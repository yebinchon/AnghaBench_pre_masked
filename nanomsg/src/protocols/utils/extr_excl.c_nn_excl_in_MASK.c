
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipe {int dummy; } ;
struct nn_excl {struct nn_pipe* inpipe; struct nn_pipe* pipe; } ;


 int FUNC_0 (int) ;

void FUNC_1 (struct nn_excl *VAR_0, struct nn_pipe *VAR_1)
{
    FUNC_0 (!VAR_0->inpipe);
    FUNC_0 (VAR_1 == VAR_0->pipe);
    VAR_0->inpipe = VAR_1;
}
