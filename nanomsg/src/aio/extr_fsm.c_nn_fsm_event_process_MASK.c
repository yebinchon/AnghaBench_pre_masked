
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm_event {int src; int type; int fsm; int * srcptr; } ;


 int FUNC_0 (int ,int,int,void*) ;

void FUNC_1 (struct nn_fsm_event *VAR_0)
{
    int VAR_1;
    int VAR_2;
    void *VAR_3;

    VAR_1 = VAR_0->src;
    VAR_2 = VAR_0->type;
    VAR_3 = VAR_0->srcptr;
    VAR_0->src = -1;
    VAR_0->type = -1;
    VAR_0->srcptr = ((void*)0);

    FUNC_0 (VAR_0->fsm, VAR_1, VAR_2, VAR_3);
}
