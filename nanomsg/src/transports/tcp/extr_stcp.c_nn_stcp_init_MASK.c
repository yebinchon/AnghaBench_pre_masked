
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src; int * fsm; } ;
struct nn_stcp {int instate; int outstate; int done; int outmsg; int inmsg; int pipebase; TYPE_1__ usock_owner; int * usock; int fsm; int streamhdr; int state; } ;
struct nn_fsm {int dummy; } ;
struct nn_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int,struct nn_stcp*,struct nn_fsm*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,struct nn_ep*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,int ,int *) ;

void FUNC_5 (struct nn_stcp *VAR_5, int VAR_6,
    struct nn_ep *VAR_7, struct nn_fsm *VAR_8)
{
    FUNC_1 (&VAR_5->fsm, VAR_2, VAR_4,
        VAR_6, VAR_5, VAR_8);
    VAR_5->state = VAR_1;
    FUNC_4 (&VAR_5->streamhdr, VAR_0, &VAR_5->fsm);
    VAR_5->usock = ((void*)0);
    VAR_5->usock_owner.src = -1;
    VAR_5->usock_owner.fsm = ((void*)0);
    FUNC_3 (&VAR_5->pipebase, &VAR_3, VAR_7);
    VAR_5->instate = -1;
    FUNC_2 (&VAR_5->inmsg, 0);
    VAR_5->outstate = -1;
    FUNC_2 (&VAR_5->outmsg, 0);
    FUNC_0 (&VAR_5->done);
}
