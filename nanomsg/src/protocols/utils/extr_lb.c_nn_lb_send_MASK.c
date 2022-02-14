
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipe {int dummy; } ;
struct nn_msg {int dummy; } ;
struct nn_lb {int priolist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nn_pipe*,struct nn_msg*) ;
 int FUNC_2 (int *,int) ;
 struct nn_pipe* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5 (struct nn_lb *VAR_2, struct nn_msg *VAR_3, struct nn_pipe **VAR_4)
{
    int VAR_5;
    struct nn_pipe *VAR_6;


    VAR_6 = FUNC_3 (&VAR_2->priolist);
    if (FUNC_4 (!VAR_6))
        return -VAR_0;


    VAR_5 = FUNC_1 (VAR_6, VAR_3);
    FUNC_0 (VAR_5 >= 0, -VAR_5);


    FUNC_2 (&VAR_2->priolist, VAR_5 & VAR_1);

    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_6;

    return VAR_5 & ~VAR_1;
}
