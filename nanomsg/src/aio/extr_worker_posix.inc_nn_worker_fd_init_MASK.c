
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker_fd {int src; struct nn_fsm* owner; } ;
struct nn_fsm {int dummy; } ;



void FUNC_0 (struct nn_worker_fd *VAR_0, int VAR_1,
    struct nn_fsm *VAR_2)
{
    VAR_0->src = VAR_1;
    VAR_0->owner = VAR_2;
}
