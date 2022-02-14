
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm_event {int type; int srcptr; int src; int fsm; } ;
struct nn_fsm {int ctx; int srcptr; int src; int owner; } ;


 int FUNC_0 (int ,struct nn_fsm_event*) ;

void FUNC_1 (struct nn_fsm *VAR_0, struct nn_fsm_event *VAR_1, int VAR_2)
{
    VAR_1->fsm = VAR_0->owner;
    VAR_1->src = VAR_0->src;
    VAR_1->srcptr = VAR_0->srcptr;
    VAR_1->type = VAR_2;
    FUNC_0 (VAR_0->ctx, VAR_1);
}
