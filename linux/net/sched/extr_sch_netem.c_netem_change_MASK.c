
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_netem_qopt {int duplicate; int loss; scalar_t__ gap; int limit; int jitter; int latency; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct clgstate {int dummy; } ;
struct netem_sched_data {int loss_model; struct clgstate clg; int ecn; void* jitter; void* latency; int rate; int reorder; scalar_t__ gap; int duplicate; int loss; scalar_t__ counter; int limit; int slot_dist; int delay_dist; } ;
struct Qdisc {int limit; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_1 (struct netem_sched_data*,struct nlattr*) ;
 int FUNC_2 (struct netem_sched_data*,struct nlattr*) ;
 int FUNC_3 (struct Qdisc*,int *,struct nlattr*) ;
 int FUNC_4 (struct netem_sched_data*,struct nlattr*) ;
 int FUNC_5 (struct netem_sched_data*,struct nlattr*) ;
 int FUNC_6 (struct netem_sched_data*,struct nlattr*) ;
 int FUNC_7 (struct netem_sched_data*,struct nlattr*) ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_15 ;
 struct tc_netem_qopt* FUNC_9 (struct nlattr*) ;
 void* FUNC_10 (struct nlattr*) ;
 int FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr**,int ,struct nlattr*,int ,int) ;
 struct netem_sched_data* FUNC_14 (struct Qdisc*) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_15(struct Qdisc *VAR_17, struct nlattr *VAR_18,
   struct netlink_ext_ack *VAR_19)
{
 struct netem_sched_data *VAR_20 = FUNC_14(VAR_17);
 struct nlattr *VAR_21[VAR_9 + 1];
 struct tc_netem_qopt *VAR_22;
 struct clgstate VAR_23;
 int VAR_24 = VAR_0;
 int VAR_25;

 if (VAR_18 == ((void*)0))
  return -VAR_1;

 VAR_22 = FUNC_9(VAR_18);
 VAR_25 = FUNC_13(VAR_21, VAR_9, VAR_18, VAR_15, sizeof(*VAR_22));
 if (VAR_25 < 0)
  return VAR_25;


 VAR_23 = VAR_20->clg;
 VAR_24 = VAR_20->loss_model;

 if (VAR_21[VAR_8]) {
  VAR_25 = FUNC_4(VAR_20, VAR_21[VAR_8]);
  if (VAR_25) {
   VAR_20->loss_model = VAR_24;
   return VAR_25;
  }
 } else {
  VAR_20->loss_model = VAR_0;
 }

 if (VAR_21[VAR_4]) {
  VAR_25 = FUNC_3(VAR_17, &VAR_20->delay_dist,
         VAR_21[VAR_4]);
  if (VAR_25)
   goto get_table_failure;
 }

 if (VAR_21[VAR_14]) {
  VAR_25 = FUNC_3(VAR_17, &VAR_20->slot_dist,
         VAR_21[VAR_14]);
  if (VAR_25)
   goto get_table_failure;
 }

 VAR_17->limit = VAR_22->limit;

 VAR_20->latency = FUNC_0(VAR_22->latency);
 VAR_20->jitter = FUNC_0(VAR_22->jitter);
 VAR_20->limit = VAR_22->limit;
 VAR_20->gap = VAR_22->gap;
 VAR_20->counter = 0;
 VAR_20->loss = VAR_22->loss;
 VAR_20->duplicate = VAR_22->duplicate;




 if (VAR_20->gap)
  VAR_20->reorder = ~0;

 if (VAR_21[VAR_2])
  FUNC_1(VAR_20, VAR_21[VAR_2]);

 if (VAR_21[VAR_12])
  FUNC_6(VAR_20, VAR_21[VAR_12]);

 if (VAR_21[VAR_3])
  FUNC_2(VAR_20, VAR_21[VAR_3]);

 if (VAR_21[VAR_10])
  FUNC_5(VAR_20, VAR_21[VAR_10]);

 if (VAR_21[VAR_11])
  VAR_20->rate = FUNC_8(VAR_16, VAR_20->rate,
    FUNC_12(VAR_21[VAR_11]));

 if (VAR_21[VAR_7])
  VAR_20->latency = FUNC_10(VAR_21[VAR_7]);

 if (VAR_21[VAR_6])
  VAR_20->jitter = FUNC_10(VAR_21[VAR_6]);

 if (VAR_21[VAR_5])
  VAR_20->ecn = FUNC_11(VAR_21[VAR_5]);

 if (VAR_21[VAR_13])
  FUNC_7(VAR_20, VAR_21[VAR_13]);

 return VAR_25;

get_table_failure:




 VAR_20->clg = VAR_23;
 VAR_20->loss_model = VAR_24;
 return VAR_25;
}
