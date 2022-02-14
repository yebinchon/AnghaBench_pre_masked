
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_sinproc {int fsm; int pipebase; int msgqueue; int msg; int event_connect; int event_sent; int event_received; int event_disconnect; int item; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6 (struct nn_sinproc *VAR_0)
{
    FUNC_2 (&VAR_0->item);
    FUNC_0 (&VAR_0->event_disconnect);
    FUNC_0 (&VAR_0->event_received);
    FUNC_0 (&VAR_0->event_sent);
    FUNC_0 (&VAR_0->event_connect);
    FUNC_3 (&VAR_0->msg);
    FUNC_4 (&VAR_0->msgqueue);
    FUNC_5 (&VAR_0->pipebase);
    FUNC_1 (&VAR_0->fsm);
}
