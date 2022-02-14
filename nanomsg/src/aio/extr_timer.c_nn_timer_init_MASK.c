
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_timer {int timeout; int fsm; int worker; int done; int wtimer; int stop_task; int start_task; int state; } ;
struct nn_fsm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int,struct nn_timer*,struct nn_fsm*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5 (struct nn_timer *VAR_5, int VAR_6, struct nn_fsm *VAR_7)
{
    FUNC_2 (&VAR_5->fsm, VAR_3, VAR_4,
        VAR_6, VAR_5, VAR_7);
    VAR_5->state = VAR_2;
    FUNC_3 (&VAR_5->start_task, VAR_0,
        &VAR_5->fsm);
    FUNC_3 (&VAR_5->stop_task, VAR_1, &VAR_5->fsm);
    FUNC_4 (&VAR_5->wtimer, &VAR_5->fsm);
    FUNC_1 (&VAR_5->done);
    VAR_5->worker = FUNC_0 (&VAR_5->fsm);
    VAR_5->timeout = -1;
}
