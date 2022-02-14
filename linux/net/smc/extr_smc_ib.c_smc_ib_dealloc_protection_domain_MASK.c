
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int * roce_pd; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct smc_link *VAR_0)
{
 if (VAR_0->roce_pd)
  FUNC_0(VAR_0->roce_pd);
 VAR_0->roce_pd = ((void*)0);
}
