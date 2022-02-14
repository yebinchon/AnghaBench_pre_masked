
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm_owner {int src; struct nn_fsm* fsm; } ;
struct nn_fsm {int src; struct nn_fsm* owner; } ;



void FUNC_0 (struct nn_fsm *VAR_0, struct nn_fsm_owner *VAR_1)
{
    int VAR_2;
    struct nn_fsm *VAR_3;

    VAR_2 = VAR_0->src;
    VAR_3 = VAR_0->owner;
    VAR_0->src = VAR_1->src;
    VAR_0->owner = VAR_1->fsm;
    VAR_1->src = VAR_2;
    VAR_1->fsm = VAR_3;
}
