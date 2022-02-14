
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct net_device {unsigned int num_tx_queues; int tx_global_lock; struct netdev_queue* _tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct netdev_queue* FUNC_0 (size_t,int) ;
 int FUNC_1 (struct net_device*,int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5)
{
 unsigned int VAR_6 = VAR_5->num_tx_queues;
 struct netdev_queue *VAR_7;
 size_t VAR_8 = VAR_6 * sizeof(*VAR_7);

 if (VAR_6 < 1 || VAR_6 > 0xffff)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_8, VAR_2 | VAR_3);
 if (!VAR_7)
  return -VAR_1;

 VAR_5->_tx = VAR_7;

 FUNC_1(VAR_5, VAR_4, ((void*)0));
 FUNC_2(&VAR_5->tx_global_lock);

 return 0;
}
