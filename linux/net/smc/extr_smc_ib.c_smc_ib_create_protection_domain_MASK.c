
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_link {int * roce_pd; TYPE_1__* smcibdev; } ;
struct TYPE_2__ {int ibdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;

int FUNC_3(struct smc_link *VAR_0)
{
 int VAR_1;

 VAR_0->roce_pd = FUNC_2(VAR_0->smcibdev->ibdev, 0);
 VAR_1 = FUNC_1(VAR_0->roce_pd);
 if (FUNC_0(VAR_0->roce_pd))
  VAR_0->roce_pd = ((void*)0);
 return VAR_1;
}
