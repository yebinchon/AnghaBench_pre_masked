
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct cbq_sched_data {int link; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 struct cbq_sched_data* FUNC_4 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_4(VAR_1);
 struct nlattr *VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (VAR_4 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_0(VAR_2, &VAR_3->link) < 0)
  goto nla_put_failure;
 return FUNC_2(VAR_2, VAR_4);

nla_put_failure:
 FUNC_1(VAR_2, VAR_4);
 return -1;
}
