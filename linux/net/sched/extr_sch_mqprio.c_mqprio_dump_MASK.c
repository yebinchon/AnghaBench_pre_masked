
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct tc_mqprio_qopt {unsigned int num_tc; int * offset; int * count; int hw; int prio_tc_map; int member_0; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {unsigned int num_tx_queues; TYPE_2__* tc_to_txq; int prio_tc_map; } ;
struct mqprio_sched {int flags; int shaper; int mode; int hw_offload; } ;
struct TYPE_12__ {scalar_t__ overlimits; scalar_t__ requeues; scalar_t__ drops; scalar_t__ backlog; scalar_t__ packets; scalar_t__ bytes; } ;
struct TYPE_9__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_4__ qstats; TYPE_4__ bstats; TYPE_1__ q; int cpu_qstats; int cpu_bstats; } ;
typedef int opt ;
typedef int __u32 ;
struct TYPE_11__ {struct Qdisc* qdisc_sleeping; } ;
struct TYPE_10__ {int offset; int count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,TYPE_4__*,int ,TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (struct mqprio_sched*,struct tc_mqprio_qopt*,struct sk_buff*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 unsigned int FUNC_6 (struct net_device*) ;
 TYPE_3__* FUNC_7 (struct net_device*,unsigned int) ;
 int FUNC_8 (struct sk_buff*,struct nlattr*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ,struct tc_mqprio_qopt*) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 int FUNC_11 (struct sk_buff*,struct nlattr*) ;
 struct net_device* FUNC_12 (struct Qdisc*) ;
 scalar_t__ FUNC_13 (struct Qdisc*) ;
 int FUNC_14 (struct Qdisc*) ;
 struct mqprio_sched* FUNC_15 (struct Qdisc*) ;
 int FUNC_16 (struct Qdisc*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct Qdisc *VAR_7, struct sk_buff *VAR_8)
{
 struct net_device *VAR_9 = FUNC_12(VAR_7);
 struct mqprio_sched *VAR_10 = FUNC_15(VAR_7);
 struct nlattr *VAR_11 = (struct nlattr *)FUNC_17(VAR_8);
 struct tc_mqprio_qopt VAR_12 = { 0 };
 struct Qdisc *VAR_13;
 unsigned int VAR_14, VAR_15;

 VAR_7->q.qlen = 0;
 FUNC_5(&VAR_7->bstats, 0, sizeof(VAR_7->bstats));
 FUNC_5(&VAR_7->qstats, 0, sizeof(VAR_7->qstats));






 for (VAR_14 = 0; VAR_14 < VAR_9->num_tx_queues; VAR_14++) {
  VAR_13 = FUNC_7(VAR_9, VAR_14)->qdisc_sleeping;
  FUNC_18(FUNC_14(VAR_13));

  if (FUNC_13(VAR_13)) {
   __u32 VAR_16 = FUNC_16(VAR_13);

   FUNC_1(((void*)0), &VAR_7->bstats,
      VAR_13->cpu_bstats,
      &VAR_13->bstats);
   FUNC_2(&VAR_7->qstats,
      VAR_13->cpu_qstats,
      &VAR_13->qstats, VAR_16);
  } else {
   VAR_7->q.qlen += VAR_13->q.qlen;
   VAR_7->bstats.bytes += VAR_13->bstats.bytes;
   VAR_7->bstats.packets += VAR_13->bstats.packets;
   VAR_7->qstats.backlog += VAR_13->qstats.backlog;
   VAR_7->qstats.drops += VAR_13->qstats.drops;
   VAR_7->qstats.requeues += VAR_13->qstats.requeues;
   VAR_7->qstats.overlimits += VAR_13->qstats.overlimits;
  }

  FUNC_19(FUNC_14(VAR_13));
 }

 VAR_12.num_tc = FUNC_6(VAR_9);
 FUNC_4(VAR_12.prio_tc_map, VAR_9->prio_tc_map, sizeof(VAR_12.prio_tc_map));
 VAR_12.hw = VAR_10->hw_offload;

 for (VAR_15 = 0; VAR_15 < FUNC_6(VAR_9); VAR_15++) {
  VAR_12.count[VAR_15] = VAR_9->tc_to_txq[VAR_15].count;
  VAR_12.offset[VAR_15] = VAR_9->tc_to_txq[VAR_15].offset;
 }

 if (FUNC_9(VAR_8, VAR_2, FUNC_0(sizeof(VAR_12)), &VAR_12))
  goto nla_put_failure;

 if ((VAR_10->flags & VAR_5) &&
     FUNC_10(VAR_8, VAR_0, VAR_10->mode))
  goto nla_put_failure;

 if ((VAR_10->flags & VAR_6) &&
     FUNC_10(VAR_8, VAR_1, VAR_10->shaper))
  goto nla_put_failure;

 if ((VAR_10->flags & VAR_4 ||
      VAR_10->flags & VAR_3) &&
     (FUNC_3(VAR_10, &VAR_12, VAR_8) != 0))
  goto nla_put_failure;

 return FUNC_8(VAR_8, VAR_11);
nla_put_failure:
 FUNC_11(VAR_8, VAR_11);
 return -1;
}
