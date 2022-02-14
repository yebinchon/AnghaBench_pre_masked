
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipe {int dummy; } ;
struct nn_excl {struct nn_pipe* pipe; } ;


 int VAR_0 ;

int FUNC_0 (struct nn_excl *VAR_1, struct nn_pipe *VAR_2)
{

    if (VAR_1->pipe)
        return -VAR_0;


    VAR_1->pipe = VAR_2;

    return 0;
}
