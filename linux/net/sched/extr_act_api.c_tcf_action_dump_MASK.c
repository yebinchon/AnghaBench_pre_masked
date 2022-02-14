
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,struct tc_action*,int,int) ;

int FUNC_4(struct sk_buff *VAR_2, struct tc_action *VAR_3[],
      int VAR_4, int VAR_5)
{
 struct tc_action *VAR_6;
 int VAR_7 = -VAR_0, VAR_8;
 struct nlattr *VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_1 && VAR_3[VAR_8]; VAR_8++) {
  VAR_6 = VAR_3[VAR_8];
  VAR_9 = FUNC_2(VAR_2, VAR_8 + 1);
  if (VAR_9 == ((void*)0))
   goto nla_put_failure;
  VAR_7 = FUNC_3(VAR_2, VAR_6, VAR_4, VAR_5);
  if (VAR_7 < 0)
   goto errout;
  FUNC_1(VAR_2, VAR_9);
 }

 return 0;

nla_put_failure:
 VAR_7 = -VAR_0;
errout:
 FUNC_0(VAR_2, VAR_9);
 return VAR_7;
}
