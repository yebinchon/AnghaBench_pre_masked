
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm_event {int src; int type; void* srcptr; struct nn_fsm* fsm; } ;
struct nn_fsm {int ctx; } ;


 int FUNC_0 (int ,struct nn_fsm_event*) ;

void FUNC_1 (struct nn_fsm *VAR_0, struct nn_fsm *VAR_1,
    struct nn_fsm_event *VAR_2, int VAR_3, int VAR_4, void *VAR_5)
{
    VAR_2->fsm = VAR_1;
    VAR_2->src = VAR_3;
    VAR_2->srcptr = VAR_5;
    VAR_2->type = VAR_4;
    FUNC_0 (VAR_0->ctx, VAR_2);
}
