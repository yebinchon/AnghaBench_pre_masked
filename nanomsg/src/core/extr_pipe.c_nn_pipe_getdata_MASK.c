
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipebase {void* data; } ;
struct nn_pipe {int dummy; } ;



void *FUNC_0 (struct nn_pipe *VAR_0)
{
    return ((struct nn_pipebase*) VAR_0)->data;
}
