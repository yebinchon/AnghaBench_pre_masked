
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipebase {scalar_t__ outstate; int out; int fsm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ) ;

void FUNC_3 (struct nn_pipebase *VAR_5)
{
    if (FUNC_1 (VAR_5->outstate == VAR_2)) {
        VAR_5->outstate = VAR_3;
        return;
    }
    FUNC_0 (VAR_5->outstate == VAR_0);
    VAR_5->outstate = VAR_1;
    FUNC_2 (&VAR_5->fsm, &VAR_5->out, VAR_4);
}
