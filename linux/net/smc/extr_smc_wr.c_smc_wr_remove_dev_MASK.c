
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_ib_device {int send_tasklet; int recv_tasklet; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct smc_ib_device *VAR_0)
{
 FUNC_0(&VAR_0->recv_tasklet);
 FUNC_0(&VAR_0->send_tasklet);
}
