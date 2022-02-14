
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, u16 VAR_6,
         __be64 VAR_7, u16 VAR_8)
{
 __be32 VAR_9 = FUNC_6(VAR_7);
 struct nlattr *VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_10)
  return -VAR_0;
 if (FUNC_5(VAR_5, VAR_2,
   FUNC_0(VAR_9)))
  goto nla_put_failure;
 if (FUNC_4(VAR_5, VAR_4,
   VAR_6))
  goto nla_put_failure;
 if (FUNC_4(VAR_5, VAR_1,
   VAR_8))
  goto nla_put_failure;
 FUNC_2(VAR_5, VAR_10);

 return 0;

nla_put_failure:
 FUNC_1(VAR_5, VAR_10);

 return -VAR_0;
}
