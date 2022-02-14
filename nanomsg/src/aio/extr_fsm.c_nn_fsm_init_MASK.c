
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {int src; int stopped; int ctx; struct nn_fsm* owner; void* srcptr; int state; void* shutdown_fn; void* fn; } ;
typedef void* nn_fsm_fn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_fsm *VAR_1, nn_fsm_fn VAR_2,
    nn_fsm_fn VAR_3, int VAR_4, void *VAR_5, struct nn_fsm *VAR_6)
{
    VAR_1->fn = VAR_2;
    VAR_1->shutdown_fn = VAR_3;
    VAR_1->state = VAR_0;
    VAR_1->src = VAR_4;
    VAR_1->srcptr = VAR_5;
    VAR_1->owner = VAR_6;
    VAR_1->ctx = VAR_6->ctx;
    FUNC_0 (&VAR_1->stopped);
}
