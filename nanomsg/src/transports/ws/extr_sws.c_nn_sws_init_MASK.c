
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src; int * fsm; } ;
struct nn_sws {int instate; int outstate; int done; scalar_t__ pongs_received; scalar_t__ pings_received; scalar_t__ pongs_sent; scalar_t__ pings_sent; scalar_t__ utf8_code_pt_fragment_len; int utf8_code_pt_fragment; scalar_t__ continuing; int outmsg; int inmsg_array; int pipebase; TYPE_1__ usock_owner; int * usock; int fsm; int handshaker; int state; } ;
struct nn_fsm {int dummy; } ;
struct nn_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int,struct nn_sws*,struct nn_fsm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,struct nn_ep*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int *) ;

void FUNC_7 (struct nn_sws *VAR_6, int VAR_7,
    struct nn_ep *VAR_8, struct nn_fsm *VAR_9)
{
    FUNC_2 (&VAR_6->fsm, VAR_3, VAR_5,
        VAR_7, VAR_6, VAR_9);
    VAR_6->state = VAR_1;
    FUNC_6 (&VAR_6->handshaker,
        VAR_0, &VAR_6->fsm);
    VAR_6->usock = ((void*)0);
    VAR_6->usock_owner.src = -1;
    VAR_6->usock_owner.fsm = ((void*)0);
    FUNC_5 (&VAR_6->pipebase, &VAR_4, VAR_8);
    VAR_6->instate = -1;
    FUNC_3 (&VAR_6->inmsg_array);
    VAR_6->outstate = -1;
    FUNC_4 (&VAR_6->outmsg, 0);

    VAR_6->continuing = 0;

    FUNC_0 (VAR_6->utf8_code_pt_fragment, 0,
        VAR_2);
    VAR_6->utf8_code_pt_fragment_len = 0;

    VAR_6->pings_sent = 0;
    VAR_6->pongs_sent = 0;
    VAR_6->pings_received = 0;
    VAR_6->pongs_received = 0;

    FUNC_1 (&VAR_6->done);
}
