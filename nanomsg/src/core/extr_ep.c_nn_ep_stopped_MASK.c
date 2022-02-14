
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int type; int * srcptr; int src; TYPE_1__* fsm; } ;
struct TYPE_3__ {TYPE_2__ stopped; int ctx; } ;
struct nn_ep {TYPE_1__ fsm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_2__*) ;

void FUNC_1 (struct nn_ep *VAR_2)
{

    VAR_2->fsm.stopped.fsm = &VAR_2->fsm;
    VAR_2->fsm.stopped.src = VAR_1;
    VAR_2->fsm.stopped.srcptr = ((void*)0);
    VAR_2->fsm.stopped.type = VAR_0;
    FUNC_0 (VAR_2->fsm.ctx, &VAR_2->fsm.stopped);
}
