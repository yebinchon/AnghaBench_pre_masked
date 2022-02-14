
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_fsm {int state; int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nn_fsm*,int ) ;
 int FUNC_1 (struct nn_fsm*,int *,int) ;

void FUNC_2 (struct nn_fsm *VAR_2, int VAR_3)
{
    FUNC_0 (VAR_2, VAR_1);
    FUNC_1 (VAR_2, &VAR_2->stopped, VAR_3);
    VAR_2->state = VAR_0;
}
