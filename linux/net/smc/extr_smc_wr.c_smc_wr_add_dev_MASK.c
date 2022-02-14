
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_ib_device {int send_tasklet; int recv_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned long) ;

void FUNC_1(struct smc_ib_device *VAR_2)
{
 FUNC_0(&VAR_2->recv_tasklet, VAR_0,
       (unsigned long)VAR_2);
 FUNC_0(&VAR_2->send_tasklet, VAR_1,
       (unsigned long)VAR_2);
}
