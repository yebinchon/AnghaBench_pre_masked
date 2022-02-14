
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipebase {scalar_t__ state; int sock; } ;
struct nn_pipe {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct nn_pipe*) ;

void FUNC_1 (struct nn_pipebase *VAR_2)
{
    if (VAR_2->state == VAR_0)
        FUNC_0 (VAR_2->sock, (struct nn_pipe*) VAR_2);
    VAR_2->state = VAR_1;
}
