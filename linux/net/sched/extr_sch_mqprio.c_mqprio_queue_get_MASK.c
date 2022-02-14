
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct net_device {unsigned long num_tx_queues; } ;
struct Qdisc {int dummy; } ;


 struct netdev_queue* FUNC_0 (struct net_device*,unsigned long) ;
 struct net_device* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct netdev_queue *FUNC_2(struct Qdisc *VAR_0,
          unsigned long VAR_1)
{
 struct net_device *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3 = VAR_1 - 1;

 if (VAR_3 >= VAR_2->num_tx_queues)
  return ((void*)0);
 return FUNC_0(VAR_2, VAR_3);
}
