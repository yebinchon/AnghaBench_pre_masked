
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_etf_qopt {int flags; int clockid; int delta; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct etf_sched_data {scalar_t__ skip_sock_check; scalar_t__ deadline_mode; scalar_t__ offload; int clockid; int delta; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tc_etf_qopt*) ;
 struct etf_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_5, struct sk_buff *VAR_6)
{
 struct etf_sched_data *VAR_7 = FUNC_4(VAR_5);
 struct tc_etf_qopt VAR_8 = { };
 struct nlattr *VAR_9;

 VAR_9 = FUNC_2(VAR_6, VAR_1);
 if (!VAR_9)
  goto nla_put_failure;

 VAR_8.delta = VAR_7->delta;
 VAR_8.clockid = VAR_7->clockid;
 if (VAR_7->offload)
  VAR_8.flags |= VAR_3;

 if (VAR_7->deadline_mode)
  VAR_8.flags |= VAR_2;

 if (VAR_7->skip_sock_check)
  VAR_8.flags |= VAR_4;

 if (FUNC_3(VAR_6, VAR_0, sizeof(VAR_8), &VAR_8))
  goto nla_put_failure;

 return FUNC_1(VAR_6, VAR_9);

nla_put_failure:
 FUNC_0(VAR_6, VAR_9);
 return -1;
}
