
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nn_fsm {int dummy; } ;
struct nn_ep {int dummy; } ;
struct TYPE_2__ {int src; int * fsm; } ;
struct nn_aipc {int item; int done; int accepted; int fsm; int sipc; TYPE_1__ listener_owner; int * listener; int usock; struct nn_ep* ep; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int,struct nn_aipc*,struct nn_fsm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct nn_ep*,int *) ;
 int FUNC_4 (int *,int ,int *) ;

void FUNC_5 (struct nn_aipc *VAR_5, int VAR_6,
    struct nn_ep *VAR_7, struct nn_fsm *VAR_8)
{
    FUNC_1 (&VAR_5->fsm, VAR_3, VAR_4,
        VAR_6, VAR_5, VAR_8);
    VAR_5->state = VAR_2;
    VAR_5->ep = VAR_7;
    FUNC_4 (&VAR_5->usock, VAR_1, &VAR_5->fsm);
    VAR_5->listener = ((void*)0);
    VAR_5->listener_owner.src = -1;
    VAR_5->listener_owner.fsm = ((void*)0);
    FUNC_3 (&VAR_5->sipc, VAR_0, VAR_7, &VAR_5->fsm);
    FUNC_0 (&VAR_5->accepted);
    FUNC_0 (&VAR_5->done);
    FUNC_2 (&VAR_5->item);
}
