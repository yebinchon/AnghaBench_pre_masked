
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_priolist_slot {struct nn_priolist_data* current; int pipes; } ;
struct nn_priolist_data {int priority; int item; } ;
struct nn_priolist {int current; struct nn_priolist_slot* slots; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;

void FUNC_3 (struct nn_priolist *VAR_0,
    struct nn_priolist_data *VAR_1)
{
    struct nn_priolist_slot *VAR_2;

    VAR_2 = &VAR_0->slots [VAR_1->priority - 1];



    if (!FUNC_0 (&VAR_2->pipes)) {
        FUNC_2 (&VAR_2->pipes, &VAR_1->item, FUNC_1 (&VAR_2->pipes));
        return;
    }



    FUNC_2 (&VAR_2->pipes, &VAR_1->item, FUNC_1 (&VAR_2->pipes));
    VAR_2->current = VAR_1;
    if (VAR_0->current == -1) {
        VAR_0->current = VAR_1->priority;
        return;
    }



    if (VAR_0->current > VAR_1->priority) {
        VAR_0->current = VAR_1->priority;
        return;
    }


}
