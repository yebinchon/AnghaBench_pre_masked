
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sinproc {int item; int event_disconnect; int event_received; int event_sent; int event_connect; int msg; int msgqueue; int pipebase; int * peer; scalar_t__ flags; int state; int fsm; } ;
struct nn_fsm {int dummy; } ;
struct nn_ep {int dummy; } ;
typedef int rcvbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nn_ep*,int ,int ,int*,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int,struct nn_sinproc*,struct nn_fsm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int *,struct nn_ep*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_8 (struct nn_sinproc *VAR_6, int VAR_7,
    struct nn_ep *VAR_8, struct nn_fsm *VAR_9)
{
    int VAR_10;
    size_t VAR_11;

    FUNC_3 (&VAR_6->fsm, VAR_3, VAR_5,
        VAR_7, VAR_6, VAR_9);
    VAR_6->state = VAR_1;
    VAR_6->flags = 0;
    VAR_6->peer = ((void*)0);
    FUNC_7 (&VAR_6->pipebase, &VAR_4, VAR_8);
    VAR_11 = sizeof (VAR_10);
    FUNC_1 (VAR_8, VAR_2, VAR_0, &VAR_10, &VAR_11);
    FUNC_0 (VAR_11 == sizeof (VAR_10));
    FUNC_6 (&VAR_6->msgqueue, VAR_10);
    FUNC_5 (&VAR_6->msg, 0);
    FUNC_2 (&VAR_6->event_connect);
    FUNC_2 (&VAR_6->event_sent);
    FUNC_2 (&VAR_6->event_received);
    FUNC_2 (&VAR_6->event_disconnect);
    FUNC_4 (&VAR_6->item);
}
