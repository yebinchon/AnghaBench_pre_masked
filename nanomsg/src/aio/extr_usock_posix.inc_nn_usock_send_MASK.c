
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int msg_iovlen; TYPE_1__* msg_iov; } ;
struct TYPE_5__ {TYPE_3__ hdr; TYPE_1__* iov; } ;
struct nn_usock {scalar_t__ state; int task_send; int worker; int fsm; int event_sent; TYPE_2__ out; } ;
struct nn_iovec {scalar_t__ iov_len; int iov_base; } ;
struct TYPE_4__ {scalar_t__ iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nn_usock*,TYPE_3__*) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8 (struct nn_usock *VAR_6, const struct nn_iovec *VAR_7,
    int VAR_8)
{
    int VAR_9;
    int VAR_10;
    int VAR_11;


    if (VAR_6->state != VAR_5) {
        FUNC_3 (&VAR_6->fsm, VAR_2);
        return;
    }


    FUNC_1 (VAR_8 <= VAR_3);
    VAR_6->out.hdr.msg_iov = VAR_6->out.iov;
    VAR_11 = 0;
    for (VAR_10 = 0; VAR_10 != VAR_8; ++VAR_10) {
        if (VAR_7 [VAR_10].iov_len == 0)
            continue;
        VAR_6->out.iov [VAR_11].iov_base = VAR_7 [VAR_10].iov_base;
        VAR_6->out.iov [VAR_11].iov_len = VAR_7 [VAR_10].iov_len;
        VAR_11++;
    }
    VAR_6->out.hdr.msg_iovlen = VAR_11;


    VAR_9 = FUNC_6 (VAR_6, &VAR_6->out.hdr);


    if (FUNC_2 (VAR_9 == 0)) {
        FUNC_4 (&VAR_6->fsm, &VAR_6->event_sent, VAR_4);
        return;
    }


    if (FUNC_5 (VAR_9 != -VAR_0)) {
        FUNC_0 (VAR_9 == -VAR_1, -VAR_9);
        FUNC_3 (&VAR_6->fsm, VAR_2);
        return;
    }


    FUNC_7 (VAR_6->worker, &VAR_6->task_send);
}
