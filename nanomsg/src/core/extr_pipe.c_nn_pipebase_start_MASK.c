
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipebase {int out; int fsm; int state; int sock; int outstate; int instate; } ;
struct nn_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nn_pipebase*,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,struct nn_pipe*) ;

int FUNC_4 (struct nn_pipebase *VAR_6)
{
    int VAR_7;

    FUNC_0 (VAR_6, VAR_4);

    VAR_6->state = VAR_2;
    VAR_6->instate = VAR_0;
    VAR_6->outstate = VAR_1;
    VAR_7 = FUNC_3 (VAR_6->sock, (struct nn_pipe*) VAR_6);
    if (FUNC_2 (VAR_7 < 0)) {
        VAR_6->state = VAR_3;
        return VAR_7;
    }
    FUNC_1 (&VAR_6->fsm, &VAR_6->out, VAR_5);

    return 0;
}
