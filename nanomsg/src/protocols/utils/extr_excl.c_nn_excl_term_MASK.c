
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_excl {int outpipe; int inpipe; int pipe; } ;


 int FUNC_0 (int) ;

void FUNC_1 (struct nn_excl *VAR_0)
{
    FUNC_0 (!VAR_0->pipe);
    FUNC_0 (!VAR_0->inpipe);
    FUNC_0 (!VAR_0->outpipe);
}
