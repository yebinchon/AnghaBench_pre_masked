
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {struct Qdisc** qdiscs; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int flags; } ;
struct Qdisc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 struct taprio_sched* FUNC_3 (struct Qdisc*) ;
 struct netdev_queue* FUNC_4 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_4, unsigned long VAR_5,
   struct Qdisc *VAR_6, struct Qdisc **VAR_7,
   struct netlink_ext_ack *VAR_8)
{
 struct taprio_sched *VAR_9 = FUNC_3(VAR_4);
 struct net_device *VAR_10 = FUNC_2(VAR_4);
 struct netdev_queue *VAR_11 = FUNC_4(VAR_4, VAR_5);

 if (!VAR_11)
  return -VAR_0;

 if (VAR_10->flags & VAR_1)
  FUNC_1(VAR_10);

 *VAR_7 = VAR_9->qdiscs[VAR_5 - 1];
 VAR_9->qdiscs[VAR_5 - 1] = VAR_6;

 if (VAR_6)
  VAR_6->flags |= VAR_3 | VAR_2;

 if (VAR_10->flags & VAR_1)
  FUNC_0(VAR_10);

 return 0;
}
