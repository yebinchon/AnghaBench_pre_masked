
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int selected; scalar_t__ nb_items; TYPE_2__* items; } ;
typedef TYPE_1__ COMBOEX_INFO ;
typedef TYPE_2__ CBE_ITEMDATA ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2 (COMBOEX_INFO *VAR_0)
{
    if (VAR_0->items)
    {
        CBE_ITEMDATA *VAR_1, *VAR_2;

        VAR_1 = VAR_0->items;
        while (VAR_1) {
            VAR_2 = VAR_1->next;
            FUNC_0 (VAR_1);
            FUNC_1 (VAR_1);
            VAR_1 = VAR_2;
        }
        VAR_0->items = 0;
    }

    VAR_0->selected = -1;
    VAR_0->nb_items = 0;
}
