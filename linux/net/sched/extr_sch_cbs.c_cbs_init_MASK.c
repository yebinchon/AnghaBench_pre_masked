
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct cbs_sched_data {int watchdog; int dequeue; int enqueue; scalar_t__ queue; int qdisc; int cbs_list; } ;
struct Qdisc {scalar_t__ dev_queue; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (struct net_device*,int ) ;
 int VAR_6 ;
 int FUNC_4 (scalar_t__,int *,int ,struct netlink_ext_ack*) ;
 struct net_device* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (int ,int) ;
 struct cbs_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (int *,struct Qdisc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct Qdisc *VAR_7, struct nlattr *VAR_8,
      struct netlink_ext_ack *VAR_9)
{
 struct cbs_sched_data *VAR_10 = FUNC_7(VAR_7);
 struct net_device *VAR_11 = FUNC_5(VAR_7);

 if (!VAR_8) {
  FUNC_0(VAR_9, "Missing CBS qdisc options  which are mandatory");
  return -VAR_0;
 }

 VAR_10->qdisc = FUNC_4(VAR_7->dev_queue, &VAR_6,
         VAR_7->handle, VAR_9);
 if (!VAR_10->qdisc)
  return -VAR_1;

 FUNC_9(&VAR_5);
 FUNC_2(&VAR_10->cbs_list, &VAR_4);
 FUNC_10(&VAR_5);

 FUNC_6(VAR_10->qdisc, 0);

 VAR_10->queue = VAR_7->dev_queue - FUNC_3(VAR_11, 0);

 VAR_10->enqueue = VAR_3;
 VAR_10->dequeue = VAR_2;

 FUNC_8(&VAR_10->watchdog, VAR_7);

 return FUNC_1(VAR_7, VAR_8, VAR_9);
}
