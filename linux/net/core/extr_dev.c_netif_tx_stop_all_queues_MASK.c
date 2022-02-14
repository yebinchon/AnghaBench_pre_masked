
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct net_device {unsigned int num_tx_queues; } ;


 struct netdev_queue* FUNC_0 (struct net_device*,unsigned int) ;
 int FUNC_1 (struct netdev_queue*) ;

void FUNC_2(struct net_device *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_queues; VAR_1++) {
  struct netdev_queue *VAR_2 = FUNC_0(VAR_0, VAR_1);

  FUNC_1(VAR_2);
 }
}
