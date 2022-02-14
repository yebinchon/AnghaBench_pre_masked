
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tc_ratespec {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_9__ {int classid; } ;
struct TYPE_13__ {int allot; int quantum; int avpkt; int minidle; TYPE_3__* R_tab; int block; int ewma_log; int weight; void* cpriority; void* priority2; void* priority; int * q; struct Qdisc* qdisc; TYPE_1__ common; struct TYPE_13__* sibling; int filter_list; } ;
struct TYPE_12__ {int function; } ;
struct cbq_sched_data {TYPE_6__ link; int now; int toplevel; int clhash; TYPE_5__ delay_timer; int watchdog; } ;
struct Qdisc {int handle; int dev_queue; } ;
struct TYPE_10__ {int rate; } ;
struct TYPE_11__ {TYPE_2__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (struct cbq_sched_data*,TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct nlattr**,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_4 (TYPE_6__*,struct tc_ratespec*) ;
 int VAR_10 ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 struct tc_ratespec* FUNC_6 (struct nlattr*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int *,int ,int *) ;
 int FUNC_11 (struct Qdisc*) ;
 TYPE_3__* FUNC_12 (struct tc_ratespec*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_13 (int *,int) ;
 struct cbq_sched_data* FUNC_14 (struct Qdisc*) ;
 int FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *,struct Qdisc*) ;
 int FUNC_17 (int *,int *,struct Qdisc*,struct netlink_ext_ack*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct Qdisc *VAR_13, struct nlattr *VAR_14,
      struct netlink_ext_ack *VAR_15)
{
 struct cbq_sched_data *VAR_16 = FUNC_14(VAR_13);
 struct nlattr *VAR_17[VAR_4 + 1];
 struct tc_ratespec *VAR_18;
 int VAR_19;

 FUNC_16(&VAR_16->watchdog, VAR_13);
 FUNC_5(&VAR_16->delay_timer, VAR_0, VAR_2);
 VAR_16->delay_timer.function = VAR_10;

 VAR_19 = FUNC_3(VAR_17, VAR_14, VAR_15);
 if (VAR_19 < 0)
  return VAR_19;

 if (!VAR_17[VAR_6] || !VAR_17[VAR_5]) {
  FUNC_0(VAR_15, "Rate specification missing or incomplete");
  return -VAR_1;
 }

 VAR_18 = FUNC_6(VAR_17[VAR_5]);

 VAR_16->link.R_tab = FUNC_12(VAR_18, VAR_17[VAR_6], VAR_15);
 if (!VAR_16->link.R_tab)
  return -VAR_1;

 VAR_19 = FUNC_17(&VAR_16->link.block, &VAR_16->link.filter_list, VAR_13, VAR_15);
 if (VAR_19)
  goto put_rtab;

 VAR_19 = FUNC_9(&VAR_16->clhash);
 if (VAR_19 < 0)
  goto put_block;

 VAR_16->link.sibling = &VAR_16->link;
 VAR_16->link.common.classid = VAR_13->handle;
 VAR_16->link.qdisc = VAR_13;
 VAR_16->link.q = FUNC_10(VAR_13->dev_queue, &VAR_12,
          VAR_13->handle, ((void*)0));
 if (!VAR_16->link.q)
  VAR_16->link.q = &VAR_11;
 else
  FUNC_13(VAR_16->link.q, 1);

 VAR_16->link.priority = VAR_9 - 1;
 VAR_16->link.priority2 = VAR_9 - 1;
 VAR_16->link.cpriority = VAR_9 - 1;
 VAR_16->link.allot = FUNC_8(FUNC_11(VAR_13));
 VAR_16->link.quantum = VAR_16->link.allot;
 VAR_16->link.weight = VAR_16->link.R_tab->rate.rate;

 VAR_16->link.ewma_log = VAR_7;
 VAR_16->link.avpkt = VAR_16->link.allot/2;
 VAR_16->link.minidle = -0x7FFFFFFF;

 VAR_16->toplevel = VAR_8;
 VAR_16->now = FUNC_7();

 FUNC_2(&VAR_16->link);

 if (VAR_17[VAR_3])
  FUNC_4(&VAR_16->link, FUNC_6(VAR_17[VAR_3]));

 FUNC_1(VAR_16, &VAR_16->link);
 return 0;

put_block:
 FUNC_18(VAR_16->link.block);

put_rtab:
 FUNC_15(VAR_16->link.R_tab);
 return VAR_19;
}
