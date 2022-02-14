
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_dist_data {int item; } ;
struct nn_dist {int pipes; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;

void FUNC_2 (struct nn_dist *VAR_0, struct nn_dist_data *VAR_1)
{
    ++VAR_0->count;
    FUNC_1 (&VAR_0->pipes, &VAR_1->item, FUNC_0 (&VAR_0->pipes));
}
