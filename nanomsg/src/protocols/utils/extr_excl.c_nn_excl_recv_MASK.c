
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_msg {int dummy; } ;
struct nn_excl {int * inpipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,struct nn_msg*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3 (struct nn_excl *VAR_2, struct nn_msg *VAR_3)
{
    int VAR_4;

    if (FUNC_2 (!VAR_2->inpipe))
        return -VAR_0;

    VAR_4 = FUNC_1 (VAR_2->inpipe, VAR_3);
    FUNC_0 (VAR_4 >= 0, -VAR_4);

    if (VAR_4 & VAR_1)
        VAR_2->inpipe = ((void*)0);

    return VAR_4 & ~VAR_1;
}
