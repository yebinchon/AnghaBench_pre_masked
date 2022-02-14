
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct net_device* sb_dev; } ;
struct net_device {size_t num_tx_queues; struct netdev_queue* _tx; int prio_tc_map; int tc_to_txq; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct net_device*,int ) ;

void FUNC_2(struct net_device *VAR_0,
         struct net_device *VAR_1)
{
 struct netdev_queue *VAR_2 = &VAR_0->_tx[VAR_0->num_tx_queues];




 FUNC_0(VAR_1->tc_to_txq, 0, sizeof(VAR_1->tc_to_txq));
 FUNC_0(VAR_1->prio_tc_map, 0, sizeof(VAR_1->prio_tc_map));

 while (VAR_2-- != &VAR_0->_tx[0]) {
  if (VAR_2->sb_dev == VAR_1)
   VAR_2->sb_dev = ((void*)0);
 }
}
