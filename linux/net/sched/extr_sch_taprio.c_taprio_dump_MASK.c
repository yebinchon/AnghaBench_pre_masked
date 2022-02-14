
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_mqprio_qopt {unsigned int num_tc; int * offset; int * count; int prio_tc_map; int member_0; } ;
struct taprio_sched {scalar_t__ txtime_delay; scalar_t__ flags; int clockid; int admin_sched; int oper_sched; } ;
struct sk_buff {int dummy; } ;
struct sched_gate_list {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {TYPE_1__* tc_to_txq; int prio_tc_map; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;
struct TYPE_2__ {int offset; int count; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct sched_gate_list*) ;
 int FUNC_2 (int ,int ,int) ;
 unsigned int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int,struct tc_mqprio_qopt*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,scalar_t__) ;
 struct net_device* FUNC_10 (struct Qdisc*) ;
 struct taprio_sched* FUNC_11 (struct Qdisc*) ;
 struct sched_gate_list* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static int FUNC_15(struct Qdisc *VAR_7, struct sk_buff *VAR_8)
{
 struct taprio_sched *VAR_9 = FUNC_11(VAR_7);
 struct net_device *VAR_10 = FUNC_10(VAR_7);
 struct sched_gate_list *VAR_11, *VAR_12;
 struct tc_mqprio_qopt VAR_13 = { 0 };
 struct nlattr *VAR_14, *VAR_15;
 unsigned int VAR_16;

 FUNC_13();
 VAR_11 = FUNC_12(VAR_9->oper_sched);
 VAR_12 = FUNC_12(VAR_9->admin_sched);

 VAR_13.num_tc = FUNC_3(VAR_10);
 FUNC_2(VAR_13.prio_tc_map, VAR_10->prio_tc_map, sizeof(VAR_13.prio_tc_map));

 for (VAR_16 = 0; VAR_16 < FUNC_3(VAR_10); VAR_16++) {
  VAR_13.count[VAR_16] = VAR_10->tc_to_txq[VAR_16].count;
  VAR_13.offset[VAR_16] = VAR_10->tc_to_txq[VAR_16].offset;
 }

 VAR_14 = FUNC_6(VAR_8, VAR_1);
 if (!VAR_14)
  goto start_error;

 if (FUNC_7(VAR_8, VAR_4, sizeof(VAR_13), &VAR_13))
  goto options_error;

 if (!FUNC_0(VAR_9->flags) &&
     FUNC_8(VAR_8, VAR_5, VAR_9->clockid))
  goto options_error;

 if (VAR_9->flags && FUNC_9(VAR_8, VAR_3, VAR_9->flags))
  goto options_error;

 if (VAR_9->txtime_delay &&
     FUNC_9(VAR_8, VAR_6, VAR_9->txtime_delay))
  goto options_error;

 if (VAR_11 && FUNC_1(VAR_8, VAR_11))
  goto options_error;

 if (!VAR_12)
  goto done;

 VAR_15 = FUNC_6(VAR_8, VAR_2);
 if (!VAR_15)
  goto options_error;

 if (FUNC_1(VAR_8, VAR_12))
  goto admin_error;

 FUNC_5(VAR_8, VAR_15);

done:
 FUNC_14();

 return FUNC_5(VAR_8, VAR_14);

admin_error:
 FUNC_4(VAR_8, VAR_15);

options_error:
 FUNC_4(VAR_8, VAR_14);

start_error:
 FUNC_14();
 return -VAR_0;
}
