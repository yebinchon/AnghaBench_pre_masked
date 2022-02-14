
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm_event {int src; int type; int item; int * srcptr; int * fsm; } ;


 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_fsm_event *VAR_0)
{
    VAR_0->fsm = ((void*)0);
    VAR_0->src = -1;
    VAR_0->srcptr = ((void*)0);
    VAR_0->type = -1;
    FUNC_0 (&VAR_0->item);
}
