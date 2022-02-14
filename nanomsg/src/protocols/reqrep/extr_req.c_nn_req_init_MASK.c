
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nn_sockbase_vfptr {int dummy; } ;
struct TYPE_4__ {int timer; int reply; int request; int * sent_to; } ;
struct TYPE_3__ {int sockbase; } ;
struct nn_req {int fsm; int lastid; TYPE_2__ task; int resend_ivl; int state; TYPE_1__ xreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int *,int ,int *) ;
 int FUNC_7 (TYPE_1__*,struct nn_sockbase_vfptr const*,void*) ;

void FUNC_8 (struct nn_req *VAR_5,
    const struct nn_sockbase_vfptr *VAR_6, void *VAR_7)
{
    FUNC_7 (&VAR_5->xreq, VAR_6, VAR_7);
    FUNC_0 (&VAR_5->fsm, VAR_3, VAR_4,
        FUNC_4 (&VAR_5->xreq.sockbase));
    VAR_5->state = VAR_2;



    FUNC_3 (&VAR_5->lastid, sizeof (VAR_5->lastid));

    VAR_5->task.sent_to = ((void*)0);

    FUNC_2 (&VAR_5->task.request, 0);
    FUNC_2 (&VAR_5->task.reply, 0);
    FUNC_6 (&VAR_5->task.timer, VAR_1, &VAR_5->fsm);
    VAR_5->resend_ivl = VAR_0;

    FUNC_5 (&VAR_5->task, VAR_5->lastid);


    FUNC_1 (&VAR_5->fsm);
}
