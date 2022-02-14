
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int function; } ;
struct taprio_sched {int clockid; struct Qdisc** qdiscs; int taprio_list; struct Qdisc* root; int peek; int dequeue; TYPE_1__ advance_timer; int current_entry_lock; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int num_tx_queues; int real_num_tx_queues; } ;
struct Qdisc {scalar_t__ parent; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 struct Qdisc** FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *,int *) ;
 struct netdev_queue* FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_8 ;
 struct Qdisc* FUNC_8 (struct netdev_queue*,int *,int ,struct netlink_ext_ack*) ;
 struct net_device* FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*,int) ;
 struct taprio_sched* FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_16(struct Qdisc *VAR_13, struct nlattr *VAR_14,
         struct netlink_ext_ack *VAR_15)
{
 struct taprio_sched *VAR_16 = FUNC_11(VAR_13);
 struct net_device *VAR_17 = FUNC_9(VAR_13);
 int VAR_18;

 FUNC_13(&VAR_16->current_entry_lock);

 FUNC_3(&VAR_16->advance_timer, VAR_0, VAR_5);
 VAR_16->advance_timer.function = VAR_7;

 VAR_16->dequeue = VAR_9;
 VAR_16->peek = VAR_12;

 VAR_16->root = VAR_13;




 VAR_16->clockid = -1;

 FUNC_12(&VAR_11);
 FUNC_5(&VAR_16->taprio_list, &VAR_10);
 FUNC_14(&VAR_11);

 if (VAR_13->parent != VAR_6)
  return -VAR_3;

 if (!FUNC_7(VAR_17))
  return -VAR_3;


 VAR_16->qdiscs = FUNC_4(VAR_17->num_tx_queues,
       sizeof(VAR_16->qdiscs[0]),
       VAR_4);

 if (!VAR_16->qdiscs)
  return -VAR_2;

 if (!VAR_14)
  return -VAR_1;

 for (VAR_18 = 0; VAR_18 < VAR_17->num_tx_queues; VAR_18++) {
  struct netdev_queue *VAR_19;
  struct Qdisc *VAR_20;

  VAR_19 = FUNC_6(VAR_17, VAR_18);
  VAR_20 = FUNC_8(VAR_19,
       &VAR_8,
       FUNC_1(FUNC_0(VAR_13->handle),
          FUNC_2(VAR_18 + 1)),
       VAR_15);
  if (!VAR_20)
   return -VAR_2;

  if (VAR_18 < VAR_17->real_num_tx_queues)
   FUNC_10(VAR_20, 0);

  VAR_16->qdiscs[VAR_18] = VAR_20;
 }

 return FUNC_15(VAR_13, VAR_14, VAR_15);
}
