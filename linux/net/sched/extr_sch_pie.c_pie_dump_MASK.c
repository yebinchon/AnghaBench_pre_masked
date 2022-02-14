
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int alpha; int beta; int ecn; int bytemode; int tupdate; int target; } ;
struct pie_sched_data {TYPE_1__ params; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int limit; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 struct pie_sched_data* FUNC_6 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_7(struct Qdisc *VAR_9, struct sk_buff *VAR_10)
{
 struct pie_sched_data *VAR_11 = FUNC_6(VAR_9);
 struct nlattr *VAR_12;

 VAR_12 = FUNC_4(VAR_10, VAR_1);
 if (!VAR_12)
  goto nla_put_failure;


 if (FUNC_5(VAR_10, VAR_7,
   ((u32)FUNC_0(VAR_11->params.target)) /
   VAR_0) ||
     FUNC_5(VAR_10, VAR_6, VAR_9->limit) ||
     FUNC_5(VAR_10, VAR_8,
   FUNC_1(VAR_11->params.tupdate)) ||
     FUNC_5(VAR_10, VAR_2, VAR_11->params.alpha) ||
     FUNC_5(VAR_10, VAR_3, VAR_11->params.beta) ||
     FUNC_5(VAR_10, VAR_5, VAR_11->params.ecn) ||
     FUNC_5(VAR_10, VAR_4, VAR_11->params.bytemode))
  goto nla_put_failure;

 return FUNC_3(VAR_10, VAR_12);

nla_put_failure:
 FUNC_2(VAR_10, VAR_12);
 return -1;
}
