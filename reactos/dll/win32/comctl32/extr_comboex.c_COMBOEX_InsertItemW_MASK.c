
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_19__ {int mask; } ;
struct TYPE_18__ {int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; void* pszText; struct TYPE_18__* next; } ;
struct TYPE_17__ {int iItem; int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; void* pszText; } ;
struct TYPE_16__ {int nb_items; int hwndCombo; TYPE_4__* items; } ;
struct TYPE_15__ {TYPE_5__ ceItem; } ;
typedef TYPE_1__ NMCOMBOBOXEXW ;
typedef int LPARAM ;
typedef int INT_PTR ;
typedef int INT ;
typedef TYPE_2__ COMBOEX_INFO ;
typedef TYPE_3__ COMBOBOXEXITEMW ;
typedef TYPE_4__ CBE_ITEMDATA ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__ const*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_4__*) ;
 void* VAR_8 ;
 int FUNC_7 (int ,int ,int,int ) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_10 (void*) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int FUNC_12 (void*,void*) ;
 int FUNC_13 (void*) ;

__attribute__((used)) static INT FUNC_14 (COMBOEX_INFO *VAR_10, COMBOBOXEXITEMW const *VAR_11)
{
    INT_PTR VAR_12;
    CBE_ITEMDATA *VAR_13;
    NMCOMBOBOXEXW VAR_14;

    FUNC_8("\n");

    if (FUNC_9(VAR_9)) FUNC_2 (VAR_11);


    VAR_12 = VAR_11->iItem;
    if (VAR_12 == -1) VAR_12 = VAR_10->nb_items;
    if (VAR_12 > VAR_10->nb_items) return -1;


    if(!(VAR_13 = FUNC_0 (sizeof(*VAR_13)))) return -1;


    if (VAR_12 == VAR_10->nb_items) {

        VAR_13->next = VAR_10->items;
 VAR_10->items = VAR_13;
    }
    else {
        INT VAR_15 = VAR_10->nb_items-1;
 CBE_ITEMDATA *VAR_16 = VAR_10->items;

 while ((VAR_15 > VAR_12) && VAR_16) {
     VAR_16 = VAR_16->next;
     VAR_15--;
 }
 if (!VAR_16) {
     FUNC_5("COMBOBOXEX item structures broken. Please report!\n");
     FUNC_6(VAR_13);
     return -1;
 }
 VAR_13->next = VAR_16->next;
 VAR_16->next = VAR_13;
    }


    VAR_13->mask = VAR_11->mask;
    if (VAR_13->mask & VAR_5) {
 INT VAR_17 = 0;

        if (FUNC_10(VAR_11->pszText)) VAR_17 = FUNC_13 (VAR_11->pszText);
 if (VAR_17 > 0) {
            VAR_13->pszText = FUNC_0 ((VAR_17 + 1)*sizeof(WCHAR));
     if (!VAR_13->pszText) {
  FUNC_6(VAR_13);
  return -1;
     }
     FUNC_12 (VAR_13->pszText, VAR_11->pszText);
 }
 else if (VAR_11->pszText == VAR_8)
     VAR_13->pszText = VAR_8;
        VAR_13->cchTextMax = VAR_11->cchTextMax;
    }
    if (VAR_13->mask & VAR_0)
        VAR_13->iImage = VAR_11->iImage;
    if (VAR_13->mask & VAR_4)
        VAR_13->iSelectedImage = VAR_11->iSelectedImage;
    if (VAR_13->mask & VAR_3)
        VAR_13->iOverlay = VAR_11->iOverlay;
    if (VAR_13->mask & VAR_1)
        VAR_13->iIndent = VAR_11->iIndent;
    if (VAR_13->mask & VAR_2)
        VAR_13->lParam = VAR_11->lParam;
    VAR_10->nb_items++;

    if (FUNC_9(VAR_9)) FUNC_3 (VAR_13);

    FUNC_7 (VAR_10->hwndCombo, VAR_7, VAR_11->iItem, (LPARAM)VAR_13);

    FUNC_11 (&VAR_14.ceItem, 0, sizeof(VAR_14.ceItem));
    VAR_14.ceItem.mask=~0;
    FUNC_1 (VAR_13, &VAR_14.ceItem);
    FUNC_4 (VAR_10, VAR_6, &VAR_14);

    return VAR_12;

}
