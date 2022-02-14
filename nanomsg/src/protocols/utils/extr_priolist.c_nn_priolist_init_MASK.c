
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_priolist {int current; TYPE_1__* slots; } ;
struct TYPE_2__ {int * current; int pipes; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_priolist *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 != VAR_0; ++VAR_2) {
        FUNC_0 (&VAR_1->slots [VAR_2].pipes);
        VAR_1->slots [VAR_2].current = ((void*)0);
    }
    VAR_1->current = -1;
}
