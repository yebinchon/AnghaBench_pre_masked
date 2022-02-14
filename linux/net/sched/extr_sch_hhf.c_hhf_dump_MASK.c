
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct hhf_sched_data {int hhf_non_hh_weight; int hhf_evict_timeout; int hhf_admit_bytes; int hhf_reset_timeout; int hh_flows_limit; int quantum; } ;
struct Qdisc {int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 struct hhf_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_8, struct sk_buff *VAR_9)
{
 struct hhf_sched_data *VAR_10 = FUNC_4(VAR_8);
 struct nlattr *VAR_11;

 VAR_11 = FUNC_2(VAR_9, VAR_7);
 if (VAR_11 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_3(VAR_9, VAR_1, VAR_8->limit) ||
     FUNC_3(VAR_9, VAR_5, VAR_10->quantum) ||
     FUNC_3(VAR_9, VAR_3, VAR_10->hh_flows_limit) ||
     FUNC_3(VAR_9, VAR_6,
   FUNC_0(VAR_10->hhf_reset_timeout)) ||
     FUNC_3(VAR_9, VAR_0, VAR_10->hhf_admit_bytes) ||
     FUNC_3(VAR_9, VAR_2,
   FUNC_0(VAR_10->hhf_evict_timeout)) ||
     FUNC_3(VAR_9, VAR_4, VAR_10->hhf_non_hh_weight))
  goto nla_put_failure;

 return FUNC_1(VAR_9, VAR_11);

nla_put_failure:
 return -1;
}
