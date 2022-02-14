
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_pipe {int dummy; } ;
struct nn_lb_data {int priodata; } ;
struct nn_lb {int priolist; } ;


 int FUNC_0 (int *,int *,struct nn_pipe*,int) ;

void FUNC_1 (struct nn_lb *VAR_0, struct nn_lb_data *VAR_1,
    struct nn_pipe *VAR_2, int VAR_3)
{
    FUNC_0 (&VAR_0->priolist, &VAR_1->priodata, VAR_2, VAR_3);
}
