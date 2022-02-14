
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_1, struct sk_buff *VAR_2)
{
 struct nlattr *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 if (VAR_3 == ((void*)0))
  goto nla_put_failure;

 return FUNC_1(VAR_2, VAR_3);

nla_put_failure:
 FUNC_0(VAR_2, VAR_3);
 return -1;
}
