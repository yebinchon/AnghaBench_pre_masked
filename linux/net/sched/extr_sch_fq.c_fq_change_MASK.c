
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fq_sched_data {int fq_trees_log; int flow_plimit; int quantum; int initial_quantum; unsigned long flow_max_rate; int low_rate_threshold; int rate_enable; int orphan_mask; int ce_threshold; int flow_refill_delay; } ;
struct TYPE_2__ {scalar_t__ qlen; } ;
struct Qdisc {int limit; TYPE_1__ q; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 struct sk_buff* FUNC_0 (struct Qdisc*) ;
 int VAR_15 ;
 int FUNC_1 (struct Qdisc*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct fq_sched_data* FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*,int,unsigned int) ;
 int FUNC_9 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct Qdisc *VAR_16, struct nlattr *VAR_17,
       struct netlink_ext_ack *VAR_18)
{
 struct fq_sched_data *VAR_19 = FUNC_7(VAR_16);
 struct nlattr *VAR_20[VAR_10 + 1];
 int VAR_21, VAR_22 = 0;
 unsigned VAR_23 = 0;
 u32 VAR_24;

 if (!VAR_17)
  return -VAR_0;

 VAR_21 = FUNC_4(VAR_20, VAR_10, VAR_17, VAR_15,
       ((void*)0));
 if (VAR_21 < 0)
  return VAR_21;

 FUNC_10(VAR_16);

 VAR_24 = VAR_19->fq_trees_log;

 if (VAR_20[VAR_2]) {
  u32 VAR_25 = FUNC_3(VAR_20[VAR_2]);

  if (VAR_25 >= 1 && VAR_25 <= FUNC_2(256*1024))
   VAR_24 = VAR_25;
  else
   VAR_21 = -VAR_0;
 }
 if (VAR_20[VAR_12])
  VAR_16->limit = FUNC_3(VAR_20[VAR_12]);

 if (VAR_20[VAR_6])
  VAR_19->flow_plimit = FUNC_3(VAR_20[VAR_6]);

 if (VAR_20[VAR_13]) {
  u32 VAR_26 = FUNC_3(VAR_20[VAR_13]);

  if (VAR_26 > 0)
   VAR_19->quantum = VAR_26;
  else
   VAR_21 = -VAR_0;
 }

 if (VAR_20[VAR_8])
  VAR_19->initial_quantum = FUNC_3(VAR_20[VAR_8]);

 if (VAR_20[VAR_4])
  FUNC_5("sch_fq: defrate %u ignored.\n",
        FUNC_3(VAR_20[VAR_4]));

 if (VAR_20[VAR_5]) {
  u32 VAR_27 = FUNC_3(VAR_20[VAR_5]);

  VAR_19->flow_max_rate = (VAR_27 == ~0U) ? ~0UL : VAR_27;
 }
 if (VAR_20[VAR_9])
  VAR_19->low_rate_threshold =
   FUNC_3(VAR_20[VAR_9]);

 if (VAR_20[VAR_14]) {
  u32 VAR_28 = FUNC_3(VAR_20[VAR_14]);

  if (VAR_28 <= 1)
   VAR_19->rate_enable = VAR_28;
  else
   VAR_21 = -VAR_0;
 }

 if (VAR_20[VAR_7]) {
  u32 VAR_29 = FUNC_3(VAR_20[VAR_7]) ;

  VAR_19->flow_refill_delay = FUNC_12(VAR_29);
 }

 if (VAR_20[VAR_11])
  VAR_19->orphan_mask = FUNC_3(VAR_20[VAR_11]);

 if (VAR_20[VAR_3])
  VAR_19->ce_threshold = (u64)VAR_1 *
      FUNC_3(VAR_20[VAR_3]);

 if (!VAR_21) {
  FUNC_11(VAR_16);
  VAR_21 = FUNC_1(VAR_16, VAR_24);
  FUNC_10(VAR_16);
 }
 while (VAR_16->q.qlen > VAR_16->limit) {
  struct sk_buff *VAR_30 = FUNC_0(VAR_16);

  if (!VAR_30)
   break;
  VAR_23 += FUNC_6(VAR_30);
  FUNC_9(VAR_30, VAR_30);
  VAR_22++;
 }
 FUNC_8(VAR_16, VAR_22, VAR_23);

 FUNC_11(VAR_16);
 return VAR_21;
}
