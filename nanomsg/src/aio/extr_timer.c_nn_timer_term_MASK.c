
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_timer {int fsm; int start_task; int stop_task; int wtimer; int done; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_timer*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5 (struct nn_timer *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    FUNC_1 (&VAR_1->done);
    FUNC_4 (&VAR_1->wtimer);
    FUNC_3 (&VAR_1->stop_task);
    FUNC_3 (&VAR_1->start_task);
    FUNC_2 (&VAR_1->fsm);
}
