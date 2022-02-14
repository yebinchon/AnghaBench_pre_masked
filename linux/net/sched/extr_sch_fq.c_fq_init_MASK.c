
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_4__ {int * first; } ;
struct TYPE_3__ {int * first; } ;
struct fq_sched_data {int flow_plimit; int quantum; int initial_quantum; unsigned long flow_max_rate; unsigned long long time_next_delayed_flow; int rate_enable; int orphan_mask; int low_rate_threshold; unsigned int ce_threshold; int fq_trees_log; int watchdog; int * fq_root; int delayed; TYPE_2__ old_flows; TYPE_1__ new_flows; int flow_refill_delay; } ;
struct Qdisc {int limit; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct Qdisc*,struct nlattr*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct Qdisc*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct Qdisc*) ;
 struct fq_sched_data* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (int *,struct Qdisc*,int ) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_3, struct nlattr *VAR_4,
     struct netlink_ext_ack *VAR_5)
{
 struct fq_sched_data *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;

 VAR_3->limit = 10000;
 VAR_6->flow_plimit = 100;
 VAR_6->quantum = 2 * FUNC_4(FUNC_5(VAR_3));
 VAR_6->initial_quantum = 10 * FUNC_4(FUNC_5(VAR_3));
 VAR_6->flow_refill_delay = FUNC_3(40);
 VAR_6->flow_max_rate = ~0UL;
 VAR_6->time_next_delayed_flow = ~0ULL;
 VAR_6->rate_enable = 1;
 VAR_6->new_flows.first = ((void*)0);
 VAR_6->old_flows.first = ((void*)0);
 VAR_6->delayed = VAR_2;
 VAR_6->fq_root = ((void*)0);
 VAR_6->fq_trees_log = FUNC_2(1024);
 VAR_6->orphan_mask = 1024 - 1;
 VAR_6->low_rate_threshold = 550000 / 8;


 VAR_6->ce_threshold = (u64)VAR_1 * ~0U;

 FUNC_7(&VAR_6->watchdog, VAR_3, VAR_0);

 if (VAR_4)
  VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5);
 else
  VAR_7 = FUNC_1(VAR_3, VAR_6->fq_trees_log);

 return VAR_7;
}
