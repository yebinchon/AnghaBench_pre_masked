
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_timer {int timeout; int fsm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2 (struct nn_timer *VAR_0, int VAR_1)
{

    FUNC_0 (VAR_1 >= 0);

    VAR_0->timeout = VAR_1;
    FUNC_1 (&VAR_0->fsm);
}
