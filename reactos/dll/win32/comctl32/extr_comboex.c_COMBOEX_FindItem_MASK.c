
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {scalar_t__ nb_items; TYPE_2__* items; TYPE_2__ edit; } ;
typedef scalar_t__ INT_PTR ;
typedef scalar_t__ INT ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef TYPE_2__ CBE_ITEMDATA ;


 int FUNC_0 (char*) ;

__attribute__((used)) static CBE_ITEMDATA *FUNC_1(COMBOEX_INFO *VAR_0, INT_PTR VAR_1)
{
    CBE_ITEMDATA *VAR_2;
    INT VAR_3;

    if ((VAR_1 >= VAR_0->nb_items) || (VAR_1 < -1))
 return ((void*)0);
    if (VAR_1 == -1)
 return &VAR_0->edit;
    VAR_2 = VAR_0->items;
    VAR_3 = VAR_0->nb_items - 1;


    while (VAR_2 && (VAR_3 > VAR_1)) {
 VAR_2 = VAR_2->next;
 VAR_3--;
    }
    if (!VAR_2 || (VAR_3 != VAR_1)) {
 FUNC_0("COMBOBOXEX item structures broken. Please report!\n");
 return 0;
    }
    return VAR_2;
}
