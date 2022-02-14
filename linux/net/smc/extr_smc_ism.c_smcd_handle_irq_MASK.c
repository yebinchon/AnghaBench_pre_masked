
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smcd_dev {int lock; struct smc_connection** conn; } ;
struct smc_connection {int rx_tsklet; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct smcd_dev *VAR_0, unsigned int VAR_1)
{
 struct smc_connection *VAR_2 = ((void*)0);
 unsigned long VAR_3;

 FUNC_0(&VAR_0->lock, VAR_3);
 VAR_2 = VAR_0->conn[VAR_1];
 if (VAR_2)
  FUNC_2(&VAR_2->rx_tsklet);
 FUNC_1(&VAR_0->lock, VAR_3);
}
