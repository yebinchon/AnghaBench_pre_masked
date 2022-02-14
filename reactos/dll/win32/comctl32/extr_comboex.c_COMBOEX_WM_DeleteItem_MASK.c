
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_18__ {int mask; } ;
struct TYPE_17__ {struct TYPE_17__* next; } ;
struct TYPE_16__ {scalar_t__ nb_items; TYPE_4__* items; } ;
struct TYPE_15__ {scalar_t__ itemID; int itemData; int hwndItem; int CtlID; int CtlType; } ;
struct TYPE_14__ {TYPE_5__ ceItem; } ;
typedef TYPE_1__ NMCOMBOBOXEXW ;
typedef TYPE_2__ DELETEITEMSTRUCT ;
typedef TYPE_3__ COMBOEX_INFO ;
typedef TYPE_4__ CBE_ITEMDATA ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_5__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*,int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,int ,int ,scalar_t__,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_5__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_7 (COMBOEX_INFO *VAR_3, DELETEITEMSTRUCT const *VAR_4)
{
    CBE_ITEMDATA *VAR_5, *VAR_6;
    NMCOMBOBOXEXW VAR_7;
    UINT VAR_8;

    FUNC_5("CtlType=%08x, CtlID=%08x, itemID=%08x, hwnd=%p, data=%08lx\n",
   VAR_4->CtlType, VAR_4->CtlID, VAR_4->itemID, VAR_4->hwndItem, VAR_4->itemData);

    if (VAR_4->itemID >= VAR_3->nb_items) return VAR_1;

    VAR_6 = VAR_3->items;
    VAR_8 = VAR_3->nb_items - 1;

    if (VAR_8 == VAR_4->itemID) {
 VAR_3->items = VAR_3->items->next;
    }
    else {
 VAR_5 = VAR_6;
 VAR_8--;


 while (VAR_5->next && (VAR_8 > VAR_4->itemID)) {
     VAR_5 = VAR_5->next;
     VAR_8--;
 }
 if (!VAR_5->next || (VAR_8 != VAR_4->itemID)) {
     FUNC_3("COMBOBOXEX item structures broken. Please report!\n");
     return VAR_1;
 }
 VAR_6 = VAR_5->next;
 VAR_5->next = VAR_5->next->next;
    }
    VAR_3->nb_items--;

    FUNC_6 (&VAR_7.ceItem, 0, sizeof(VAR_7.ceItem));
    VAR_7.ceItem.mask=~0;
    FUNC_0 (VAR_6, &VAR_7.ceItem);
    FUNC_2 (VAR_3, VAR_0, &VAR_7);

    FUNC_1(VAR_6);
    FUNC_4(VAR_6);

    return VAR_2;
}
