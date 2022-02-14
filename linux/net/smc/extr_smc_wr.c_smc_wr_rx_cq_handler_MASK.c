
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_ib_device {int recv_tasklet; } ;
struct ib_cq {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct ib_cq *VAR_0, void *VAR_1)
{
 struct smc_ib_device *VAR_2 = (struct smc_ib_device *)VAR_1;

 FUNC_0(&VAR_2->recv_tasklet);
}
