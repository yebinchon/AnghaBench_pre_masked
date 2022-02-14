
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct mq_sched {struct Qdisc** qdiscs; } ;
struct Qdisc {scalar_t__ parent; int flags; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct net_device*,unsigned int) ;
 struct Qdisc** FUNC_4 (unsigned int,int,int ) ;
 int FUNC_5 (struct Qdisc*,int ) ;
 struct netdev_queue* FUNC_6 (struct net_device*,unsigned int) ;
 int FUNC_7 (struct net_device*) ;
 struct Qdisc* FUNC_8 (struct netdev_queue*,int ,int ,struct netlink_ext_ack*) ;
 struct net_device* FUNC_9 (struct Qdisc*) ;
 struct mq_sched* FUNC_10 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_8, struct nlattr *VAR_9,
     struct netlink_ext_ack *VAR_10)
{
 struct net_device *VAR_11 = FUNC_9(VAR_8);
 struct mq_sched *VAR_12 = FUNC_10(VAR_8);
 struct netdev_queue *VAR_13;
 struct Qdisc *VAR_14;
 unsigned int VAR_15;

 if (VAR_8->parent != VAR_6)
  return -VAR_1;

 if (!FUNC_7(VAR_11))
  return -VAR_1;


 VAR_12->qdiscs = FUNC_4(VAR_11->num_tx_queues, sizeof(VAR_12->qdiscs[0]),
          VAR_2);
 if (!VAR_12->qdiscs)
  return -VAR_0;

 for (VAR_15 = 0; VAR_15 < VAR_11->num_tx_queues; VAR_15++) {
  VAR_13 = FUNC_6(VAR_11, VAR_15);
  VAR_14 = FUNC_8(VAR_13, FUNC_3(VAR_11, VAR_15),
       FUNC_1(FUNC_0(VAR_8->handle),
          FUNC_2(VAR_15 + 1)),
       VAR_10);
  if (!VAR_14)
   return -VAR_0;
  VAR_12->qdiscs[VAR_15] = VAR_14;
  VAR_14->flags |= VAR_5 | VAR_4;
 }

 VAR_8->flags |= VAR_3;

 FUNC_5(VAR_8, VAR_7);
 return 0;
}
