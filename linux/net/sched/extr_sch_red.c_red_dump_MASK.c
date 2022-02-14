
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_red_qopt {int qth_min; int qth_max; int Wlog; int Scell_log; int Plog; int flags; int limit; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int qth_min; int Wlog; int qth_max; int max_P; int Scell_log; int Plog; } ;
struct red_sched_data {TYPE_1__ parms; int flags; int limit; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tc_red_qopt*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 struct red_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_4, struct sk_buff *VAR_5)
{
 struct red_sched_data *VAR_6 = FUNC_5(VAR_4);
 struct nlattr *VAR_7 = ((void*)0);
 struct tc_red_qopt VAR_8 = {
  .limit = VAR_6->limit,
  .flags = VAR_6->flags,
  .qth_min = VAR_6->parms.qth_min >> VAR_6->parms.Wlog,
  .qth_max = VAR_6->parms.qth_max >> VAR_6->parms.Wlog,
  .Wlog = VAR_6->parms.Wlog,
  .Plog = VAR_6->parms.Plog,
  .Scell_log = VAR_6->parms.Scell_log,
 };
 int VAR_9;

 VAR_9 = FUNC_6(VAR_4);
 if (VAR_9)
  goto nla_put_failure;

 VAR_7 = FUNC_2(VAR_5, VAR_1);
 if (VAR_7 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_3, sizeof(VAR_8), &VAR_8) ||
     FUNC_4(VAR_5, VAR_2, VAR_6->parms.max_P))
  goto nla_put_failure;
 return FUNC_1(VAR_5, VAR_7);

nla_put_failure:
 FUNC_0(VAR_5, VAR_7);
 return -VAR_0;
}
