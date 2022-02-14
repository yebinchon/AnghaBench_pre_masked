
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct nn_pipe* sent_to; int timer; int request; } ;
struct TYPE_3__ {int sockbase; } ;
struct nn_req {int state; TYPE_2__ task; int resend_ivl; TYPE_1__ xreq; } ;
struct nn_pipe {int dummy; } ;
struct nn_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nn_msg*,int *) ;
 int FUNC_4 (struct nn_msg*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,struct nn_msg*,struct nn_pipe**) ;

void FUNC_8 (struct nn_req *VAR_3, int VAR_4)
{
    int VAR_5;
    struct nn_msg VAR_6;
    struct nn_pipe *VAR_7;


    FUNC_3 (&VAR_6, &VAR_3->task.request);
    VAR_5 = FUNC_7 (&VAR_3->xreq.sockbase, &VAR_6, &VAR_7);



    if (FUNC_5 (VAR_5 == -VAR_0)) {
        FUNC_1 (VAR_4 == 1);
        FUNC_4 (&VAR_6);
        VAR_3->state = VAR_2;
        return;
    }




    if (FUNC_2 (VAR_5 == 0)) {
        FUNC_6 (&VAR_3->task.timer, VAR_3->resend_ivl);
        FUNC_1 (VAR_7);
        VAR_3->task.sent_to = VAR_7;
        VAR_3->state = VAR_1;
        return;
    }


    FUNC_0 (0, -VAR_5);
}
