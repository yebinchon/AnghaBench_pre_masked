
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int src; int * fsm; } ;
struct nn_ws_handshake {int * pipebase; TYPE_1__ usock_owner; int * usock; int timeout; int done; int fsm; int timer; int state; } ;
struct nn_fsm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int,struct nn_ws_handshake*,struct nn_fsm*) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3 (struct nn_ws_handshake *VAR_5, int VAR_6,
    struct nn_fsm *VAR_7)
{
    FUNC_1 (&VAR_5->fsm, VAR_3, VAR_4,
        VAR_6, VAR_5, VAR_7);
    VAR_5->state = VAR_1;
    FUNC_2 (&VAR_5->timer, VAR_0, &VAR_5->fsm);
    FUNC_0 (&VAR_5->done);
    VAR_5->timeout = VAR_2;
    VAR_5->usock = ((void*)0);
    VAR_5->usock_owner.src = -1;
    VAR_5->usock_owner.fsm = ((void*)0);
    VAR_5->pipebase = ((void*)0);
}
