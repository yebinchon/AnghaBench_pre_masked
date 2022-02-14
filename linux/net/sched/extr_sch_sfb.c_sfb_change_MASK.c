
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tc_sfb_qopt {scalar_t__ limit; int penalty_burst; int penalty_rate; int bin_size; int max; int decrement; int increment; int warmup_time; int rehash_interval; } ;
struct sfb_sched_data {int double_buffering; scalar_t__ slot; void* token_time; int tokens_avail; int penalty_burst; int penalty_rate; int bin_size; int max; int decrement; int increment; scalar_t__ limit; void* rehash_time; void* warmup_time; void* rehash_interval; struct Qdisc* qdisc; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_2__ {scalar_t__ tx_queue_len; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct Qdisc* FUNC_2 (struct Qdisc*,int *,scalar_t__,struct netlink_ext_ack*) ;
 void* VAR_3 ;
 void* FUNC_3 (int ) ;
 struct tc_sfb_qopt* FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 struct Qdisc VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_6 (struct Qdisc*) ;
 int FUNC_7 (struct Qdisc*,int) ;
 struct sfb_sched_data* FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (struct Qdisc*) ;
 struct tc_sfb_qopt VAR_6 ;
 int FUNC_13 (int,struct sfb_sched_data*) ;
 int VAR_7 ;
 int FUNC_14 (struct sfb_sched_data*) ;

__attribute__((used)) static int FUNC_15(struct Qdisc *VAR_8, struct nlattr *VAR_9,
        struct netlink_ext_ack *VAR_10)
{
 struct sfb_sched_data *VAR_11 = FUNC_8(VAR_8);
 struct Qdisc *VAR_12, *VAR_13;
 struct nlattr *VAR_14[VAR_1 + 1];
 const struct tc_sfb_qopt *VAR_15 = &VAR_6;
 u32 VAR_16;
 int VAR_17;

 if (VAR_9) {
  VAR_17 = FUNC_5(VAR_14, VAR_1, VAR_9,
        VAR_7, ((void*)0));
  if (VAR_17 < 0)
   return -VAR_0;

  if (VAR_14[VAR_2] == ((void*)0))
   return -VAR_0;

  VAR_15 = FUNC_4(VAR_14[VAR_2]);
 }

 VAR_16 = VAR_15->limit;
 if (VAR_16 == 0)
  VAR_16 = FUNC_6(VAR_8)->tx_queue_len;

 VAR_12 = FUNC_2(VAR_8, &VAR_5, VAR_16, VAR_10);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 if (VAR_12 != &VAR_4)
  FUNC_7(VAR_12, 1);
 FUNC_11(VAR_8);

 FUNC_9(VAR_11->qdisc);
 VAR_13 = VAR_11->qdisc;
 VAR_11->qdisc = VAR_12;

 VAR_11->rehash_interval = FUNC_3(VAR_15->rehash_interval);
 VAR_11->warmup_time = FUNC_3(VAR_15->warmup_time);
 VAR_11->rehash_time = VAR_3;
 VAR_11->limit = VAR_16;
 VAR_11->increment = VAR_15->increment;
 VAR_11->decrement = VAR_15->decrement;
 VAR_11->max = VAR_15->max;
 VAR_11->bin_size = VAR_15->bin_size;
 VAR_11->penalty_rate = VAR_15->penalty_rate;
 VAR_11->penalty_burst = VAR_15->penalty_burst;
 VAR_11->tokens_avail = VAR_15->penalty_burst;
 VAR_11->token_time = VAR_3;

 VAR_11->slot = 0;
 VAR_11->double_buffering = 0;
 FUNC_14(VAR_11);
 FUNC_13(0, VAR_11);
 FUNC_13(1, VAR_11);

 FUNC_12(VAR_8);
 FUNC_10(VAR_13);

 return 0;
}
