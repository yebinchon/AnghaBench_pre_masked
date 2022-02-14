
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * insertMarkItem; int * dropItem; int * firstVisible; int * focusedItem; int * hotItem; int * selectedItem; int items; } ;
typedef int TREEVIEW_ITEM ;
typedef TYPE_1__ TREEVIEW_INFO ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(TREEVIEW_INFO *VAR_0, TREEVIEW_ITEM *VAR_1)
{
    FUNC_0(VAR_0->items, FUNC_1(VAR_0->items, VAR_1));
    if (VAR_0->selectedItem == VAR_1)
        VAR_0->selectedItem = ((void*)0);
    if (VAR_0->hotItem == VAR_1)
        VAR_0->hotItem = ((void*)0);
    if (VAR_0->focusedItem == VAR_1)
        VAR_0->focusedItem = ((void*)0);
    if (VAR_0->firstVisible == VAR_1)
        VAR_0->firstVisible = ((void*)0);
    if (VAR_0->dropItem == VAR_1)
        VAR_0->dropItem = ((void*)0);
    if (VAR_0->insertMarkItem == VAR_1)
        VAR_0->insertMarkItem = ((void*)0);
    FUNC_2(VAR_1);
}
