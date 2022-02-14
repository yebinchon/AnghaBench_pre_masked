
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_worker_task {int src; int item; struct nn_fsm* owner; } ;
struct nn_fsm {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1 (struct nn_worker_task *VAR_0, int VAR_1,
    struct nn_fsm *VAR_2)
{
    VAR_0->src = VAR_1;
    VAR_0->owner = VAR_2;
    FUNC_0 (&VAR_0->item);
}
