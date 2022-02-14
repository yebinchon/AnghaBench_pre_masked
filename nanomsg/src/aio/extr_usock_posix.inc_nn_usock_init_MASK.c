
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int hdr; } ;
struct TYPE_3__ {int * pfd; scalar_t__ batch_pos; scalar_t__ batch_len; int * batch; scalar_t__ len; int * buf; } ;
struct nn_usock {int s; int * asock; int event_error; int event_received; int event_sent; int event_established; int fsm; int task_stop; int task_recv; int task_send; int task_accept; int task_connected; int task_connecting; int wfd; TYPE_2__ out; TYPE_1__ in; scalar_t__ errnum; int worker; int state; } ;
struct nn_fsm {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int,struct nn_usock*,struct nn_fsm*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int *,int ,int *) ;

void FUNC_6 (struct nn_usock *VAR_10, int VAR_11, struct nn_fsm *VAR_12)
{

    FUNC_3 (&VAR_10->fsm, VAR_8, VAR_9,
        VAR_11, VAR_10, VAR_12);
    VAR_10->state = VAR_7;


    VAR_10->worker = FUNC_1 (&VAR_10->fsm);


    VAR_10->s = -1;
    VAR_10->errnum = 0;

    VAR_10->in.buf = ((void*)0);
    VAR_10->in.len = 0;
    VAR_10->in.batch = ((void*)0);
    VAR_10->in.batch_len = 0;
    VAR_10->in.batch_pos = 0;
    VAR_10->in.pfd = ((void*)0);

    FUNC_0 (&VAR_10->out.hdr, 0, sizeof (struct msghdr));


    FUNC_4 (&VAR_10->wfd, VAR_0, &VAR_10->fsm);
    FUNC_5 (&VAR_10->task_connecting, VAR_3,
        &VAR_10->fsm);
    FUNC_5 (&VAR_10->task_connected, VAR_2,
        &VAR_10->fsm);
    FUNC_5 (&VAR_10->task_accept, VAR_1,
        &VAR_10->fsm);
    FUNC_5 (&VAR_10->task_send, VAR_5, &VAR_10->fsm);
    FUNC_5 (&VAR_10->task_recv, VAR_4, &VAR_10->fsm);
    FUNC_5 (&VAR_10->task_stop, VAR_6, &VAR_10->fsm);


    FUNC_2 (&VAR_10->event_established);
    FUNC_2 (&VAR_10->event_sent);
    FUNC_2 (&VAR_10->event_received);
    FUNC_2 (&VAR_10->event_error);


    VAR_10->asock = ((void*)0);
}
