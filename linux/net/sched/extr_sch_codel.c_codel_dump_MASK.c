
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {scalar_t__ target; scalar_t__ interval; scalar_t__ ce_threshold; int ecn; } ;
struct codel_sched_data {TYPE_1__ params; } ;
struct Qdisc {int limit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 struct codel_sched_data* FUNC_5 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_7, struct sk_buff *VAR_8)
{
 struct codel_sched_data *VAR_9 = FUNC_5(VAR_7);
 struct nlattr *VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_6);
 if (VAR_10 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_4(VAR_8, VAR_5,
   FUNC_0(VAR_9->params.target)) ||
     FUNC_4(VAR_8, VAR_4,
   VAR_7->limit) ||
     FUNC_4(VAR_8, VAR_3,
   FUNC_0(VAR_9->params.interval)) ||
     FUNC_4(VAR_8, VAR_2,
   VAR_9->params.ecn))
  goto nla_put_failure;
 if (VAR_9->params.ce_threshold != VAR_0 &&
     FUNC_4(VAR_8, VAR_1,
   FUNC_0(VAR_9->params.ce_threshold)))
  goto nla_put_failure;
 return FUNC_2(VAR_8, VAR_10);

nla_put_failure:
 FUNC_1(VAR_8, VAR_10);
 return -1;
}
