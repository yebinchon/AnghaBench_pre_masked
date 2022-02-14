
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_ib_device {int roce_cq_send; int roce_cq_recv; scalar_t__ initialized; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct smc_ib_device*) ;

__attribute__((used)) static void FUNC_2(struct smc_ib_device *VAR_0)
{
 if (!VAR_0->initialized)
  return;
 VAR_0->initialized = 0;
 FUNC_1(VAR_0);
 FUNC_0(VAR_0->roce_cq_recv);
 FUNC_0(VAR_0->roce_cq_send);
}
