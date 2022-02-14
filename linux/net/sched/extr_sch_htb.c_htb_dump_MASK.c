
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_htb_glob {scalar_t__ debug; int defcls; int rate2quantum; int version; int direct_pkts; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct htb_sched {int direct_qlen; int defcls; int rate2quantum; int direct_pkts; int overlimits; } ;
struct TYPE_2__ {int overlimits; } ;
struct Qdisc {TYPE_1__ qstats; } ;
typedef int gopt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tc_htb_glob*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 struct htb_sched* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_4, struct sk_buff *VAR_5)
{
 struct htb_sched *VAR_6 = FUNC_5(VAR_4);
 struct nlattr *VAR_7;
 struct tc_htb_glob VAR_8;

 VAR_4->qstats.overlimits = VAR_6->overlimits;




 VAR_8.direct_pkts = VAR_6->direct_pkts;
 VAR_8.version = VAR_0;
 VAR_8.rate2quantum = VAR_6->rate2quantum;
 VAR_8.defcls = VAR_6->defcls;
 VAR_8.debug = 0;

 VAR_7 = FUNC_2(VAR_5, VAR_3);
 if (VAR_7 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_2, sizeof(VAR_8), &VAR_8) ||
     FUNC_4(VAR_5, VAR_1, VAR_6->direct_qlen))
  goto nla_put_failure;

 return FUNC_1(VAR_5, VAR_7);

nla_put_failure:
 FUNC_0(VAR_5, VAR_7);
 return -1;
}
