
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {scalar_t__ state; int stopped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1 (struct nn_fsm *VAR_1)
{
    return VAR_1->state == VAR_0 &&
        !FUNC_0 (&VAR_1->stopped) ? 1 : 0;
}
