
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {int src; int stopped; struct nn_ctx* ctx; int * owner; int * srcptr; int state; void* shutdown_fn; void* fn; } ;
struct nn_ctx {int dummy; } ;
typedef void* nn_fsm_fn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_fsm *VAR_1, nn_fsm_fn VAR_2,
    nn_fsm_fn VAR_3, struct nn_ctx *VAR_4)
{
    VAR_1->fn = VAR_2;
    VAR_1->shutdown_fn = VAR_3;
    VAR_1->state = VAR_0;
    VAR_1->src = -1;
    VAR_1->srcptr = ((void*)0);
    VAR_1->owner = ((void*)0);
    VAR_1->ctx = VAR_4;
    FUNC_0 (&VAR_1->stopped);
}
