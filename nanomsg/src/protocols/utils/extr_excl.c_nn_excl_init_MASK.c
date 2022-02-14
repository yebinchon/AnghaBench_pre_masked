
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_excl {int * outpipe; int * inpipe; int * pipe; } ;



void FUNC_0 (struct nn_excl *VAR_0)
{
    VAR_0->pipe = ((void*)0);
    VAR_0->inpipe = ((void*)0);
    VAR_0->outpipe = ((void*)0);
}
