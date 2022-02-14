
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int _xmit_lock; } ;
struct net_device {int num_tx_queues; int qdisc_xmit_lock_key; int addr_list_lock_key; int addr_list_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 struct netdev_queue* FUNC_3 (struct net_device*,int) ;

void FUNC_4(struct net_device *VAR_0)
{
 struct netdev_queue *VAR_1;
 int VAR_2;

 FUNC_2(&VAR_0->qdisc_xmit_lock_key);
 FUNC_2(&VAR_0->addr_list_lock_key);

 FUNC_0(&VAR_0->qdisc_xmit_lock_key);
 FUNC_0(&VAR_0->addr_list_lock_key);

 FUNC_1(&VAR_0->addr_list_lock, &VAR_0->addr_list_lock_key);
 for (VAR_2 = 0; VAR_2 < VAR_0->num_tx_queues; VAR_2++) {
  VAR_1 = FUNC_3(VAR_0, VAR_2);

  FUNC_1(&VAR_1->_xmit_lock,
      &VAR_0->qdisc_xmit_lock_key);
 }
}
