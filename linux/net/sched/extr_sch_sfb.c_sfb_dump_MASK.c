
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tc_sfb_qopt {int penalty_burst; int penalty_rate; int decrement; int increment; int bin_size; int max; int limit; int warmup_time; int rehash_interval; } ;
struct sk_buff {int dummy; } ;
struct sfb_sched_data {TYPE_3__* qdisc; int penalty_burst; int penalty_rate; int decrement; int increment; int bin_size; int max; int limit; int warmup_time; int rehash_interval; } ;
struct nlattr {int dummy; } ;
struct TYPE_4__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;
typedef int opt ;
struct TYPE_5__ {int backlog; } ;
struct TYPE_6__ {TYPE_2__ qstats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tc_sfb_qopt*) ;
 struct sfb_sched_data* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_3, struct sk_buff *VAR_4)
{
 struct sfb_sched_data *VAR_5 = FUNC_5(VAR_3);
 struct nlattr *VAR_6;
 struct tc_sfb_qopt VAR_7 = {
  .rehash_interval = FUNC_0(VAR_5->rehash_interval),
  .warmup_time = FUNC_0(VAR_5->warmup_time),
  .limit = VAR_5->limit,
  .max = VAR_5->max,
  .bin_size = VAR_5->bin_size,
  .increment = VAR_5->increment,
  .decrement = VAR_5->decrement,
  .penalty_rate = VAR_5->penalty_rate,
  .penalty_burst = VAR_5->penalty_burst,
 };

 VAR_3->qstats.backlog = VAR_5->qdisc->qstats.backlog;
 VAR_6 = FUNC_3(VAR_4, VAR_1);
 if (VAR_6 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_4(VAR_4, VAR_2, sizeof(VAR_7), &VAR_7))
  goto nla_put_failure;
 return FUNC_2(VAR_4, VAR_6);

nla_put_failure:
 FUNC_1(VAR_4, VAR_6);
 return -VAR_0;
}
