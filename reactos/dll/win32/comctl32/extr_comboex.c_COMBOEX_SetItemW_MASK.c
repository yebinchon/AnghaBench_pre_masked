
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_15__ {int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; scalar_t__ pszText; } ;
struct TYPE_14__ {int iItem; int mask; int lParam; int iIndent; int iOverlay; int iSelectedImage; int iImage; int cchTextMax; scalar_t__ pszText; } ;
struct TYPE_13__ {int nb_items; int hwndCombo; int hwndEdit; } ;
typedef int INT_PTR ;
typedef int INT ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef TYPE_2__ COMBOBOXEXITEMW ;
typedef TYPE_3__ CBE_ITEMDATA ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_11 (COMBOEX_INFO *VAR_12, const COMBOBOXEXITEMW *VAR_13)
{
    INT_PTR VAR_14 = VAR_13->iItem;
    CBE_ITEMDATA *VAR_15;

    if (FUNC_7(VAR_11)) FUNC_1 (VAR_13);


    if ((VAR_14 >= VAR_12->nb_items) || (VAR_14 < -1)) return VAR_6;


    if ((VAR_14 == -1) && !VAR_12->hwndEdit) return VAR_6;

    if (!(VAR_15 = FUNC_3(VAR_12, VAR_14))) return VAR_6;


    VAR_15->mask |= VAR_13->mask;
    if (VAR_13->mask & VAR_5) {
 INT VAR_16 = 0;

 FUNC_4(VAR_15);
        if (FUNC_8(VAR_13->pszText)) VAR_16 = FUNC_10(VAR_13->pszText);
 if (VAR_16 > 0) {
            VAR_15->pszText = FUNC_0 ((VAR_16 + 1)*sizeof(WCHAR));
     if (!VAR_15->pszText) return VAR_6;
     FUNC_9(VAR_15->pszText, VAR_13->pszText);
 } else if (VAR_13->pszText == VAR_7)
     VAR_15->pszText = VAR_7;
        VAR_15->cchTextMax = VAR_13->cchTextMax;
    }
    if (VAR_13->mask & VAR_0)
        VAR_15->iImage = VAR_13->iImage;
    if (VAR_13->mask & VAR_4)
        VAR_15->iSelectedImage = VAR_13->iSelectedImage;
    if (VAR_13->mask & VAR_3)
        VAR_15->iOverlay = VAR_13->iOverlay;
    if (VAR_13->mask & VAR_1)
        VAR_15->iIndent = VAR_13->iIndent;
    if (VAR_13->mask & VAR_2)
        VAR_15->lParam = VAR_13->lParam;

    if (FUNC_7(VAR_11)) FUNC_2 (VAR_15);


    if (VAR_13->iItem == -1 && VAR_13->mask & VAR_5) {
 FUNC_5 (VAR_12, VAR_15);
 FUNC_6 (VAR_12->hwndCombo, 0, 0, VAR_8 | VAR_9);
    }
    return VAR_10;
}
