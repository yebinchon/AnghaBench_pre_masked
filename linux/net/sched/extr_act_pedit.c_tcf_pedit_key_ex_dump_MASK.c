
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_pedit_key_ex {int cmd; int htype; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5,
     struct tcf_pedit_key_ex *VAR_6, int VAR_7)
{
 struct nlattr *VAR_8 = FUNC_2(VAR_5,
         VAR_1);

 if (!VAR_8)
  goto nla_failure;
 for (; VAR_7 > 0; VAR_7--) {
  struct nlattr *VAR_9;

  VAR_9 = FUNC_2(VAR_5, VAR_2);
  if (!VAR_9)
   goto nla_failure;

  if (FUNC_3(VAR_5, VAR_4, VAR_6->htype) ||
      FUNC_3(VAR_5, VAR_3, VAR_6->cmd))
   goto nla_failure;

  FUNC_1(VAR_5, VAR_9);

  VAR_6++;
 }

 FUNC_1(VAR_5, VAR_8);

 return 0;
nla_failure:
 FUNC_0(VAR_5, VAR_8);
 return -VAR_0;
}
