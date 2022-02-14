
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int request; int reply; int timer; } ;
struct nn_req {int xreq; int fsm; TYPE_1__ task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (struct nn_req *VAR_0)
{
    FUNC_3 (&VAR_0->task.timer);
    FUNC_2 (&VAR_0->task);
    FUNC_1 (&VAR_0->task.reply);
    FUNC_1 (&VAR_0->task.request);
    FUNC_0 (&VAR_0->fsm);
    FUNC_4 (&VAR_0->xreq);
}
