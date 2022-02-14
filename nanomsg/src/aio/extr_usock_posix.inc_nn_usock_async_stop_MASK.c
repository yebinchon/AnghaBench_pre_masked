
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_usock {int event_error; int fsm; int task_stop; int worker; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2 (struct nn_usock *VAR_1)
{
    FUNC_1 (VAR_1->worker, &VAR_1->task_stop);
    FUNC_0 (&VAR_1->fsm, &VAR_1->event_error, VAR_0);
}
