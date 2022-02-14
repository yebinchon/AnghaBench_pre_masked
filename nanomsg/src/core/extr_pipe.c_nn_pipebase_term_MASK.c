
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipebase {int fsm; int in; int out; } ;


 int VAR_0 ;
 int FUNC_0 (struct nn_pipebase*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3 (struct nn_pipebase *VAR_1)
{
    FUNC_0 (VAR_1, VAR_0);

    FUNC_1 (&VAR_1->out);
    FUNC_1 (&VAR_1->in);
    FUNC_2 (&VAR_1->fsm);
}
