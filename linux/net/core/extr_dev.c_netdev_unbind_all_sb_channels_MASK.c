
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {scalar_t__ sb_dev; } ;
struct net_device {size_t num_tx_queues; struct netdev_queue* _tx; } ;


 int FUNC_0 (struct net_device*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct netdev_queue *VAR_1 = &VAR_0->_tx[VAR_0->num_tx_queues];


 while (VAR_1-- != &VAR_0->_tx[0]) {
  if (VAR_1->sb_dev)
   FUNC_0(VAR_0, VAR_1->sb_dev);
 }
}
