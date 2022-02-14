
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ batch; } ;
struct nn_usock {int fsm; int wfd; int task_connecting; int task_connected; int task_accept; int task_send; int task_recv; int task_stop; int worker; int event_established; int event_sent; int event_received; int event_error; TYPE_1__ in; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_usock*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7 (struct nn_usock *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    if (VAR_1->in.batch)
        FUNC_1 (VAR_1->in.batch);

    FUNC_2 (&VAR_1->event_error);
    FUNC_2 (&VAR_1->event_received);
    FUNC_2 (&VAR_1->event_sent);
    FUNC_2 (&VAR_1->event_established);

    FUNC_4 (VAR_1->worker, &VAR_1->task_stop);
    FUNC_4 (VAR_1->worker, &VAR_1->task_recv);
    FUNC_4 (VAR_1->worker, &VAR_1->task_send);
    FUNC_4 (VAR_1->worker, &VAR_1->task_accept);
    FUNC_4 (VAR_1->worker, &VAR_1->task_connected);
    FUNC_4 (VAR_1->worker, &VAR_1->task_connecting);

    FUNC_6 (&VAR_1->task_stop);
    FUNC_6 (&VAR_1->task_recv);
    FUNC_6 (&VAR_1->task_send);
    FUNC_6 (&VAR_1->task_accept);
    FUNC_6 (&VAR_1->task_connected);
    FUNC_6 (&VAR_1->task_connecting);
    FUNC_5 (&VAR_1->wfd);

    FUNC_3 (&VAR_1->fsm);
}
