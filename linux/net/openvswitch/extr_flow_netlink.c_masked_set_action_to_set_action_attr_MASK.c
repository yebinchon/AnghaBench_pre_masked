
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nlattr* FUNC_0 (struct nlattr const*) ;
 int FUNC_1 (struct nlattr const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,size_t,struct nlattr*) ;
 int FUNC_5 (struct nlattr const*) ;

__attribute__((used)) static int FUNC_6(const struct nlattr *VAR_2,
      struct sk_buff *VAR_3)
{
 const struct nlattr *VAR_4 = FUNC_0(VAR_2);
 struct nlattr *VAR_5;
 size_t VAR_6 = FUNC_1(VAR_4) / 2;




 VAR_5 = FUNC_3(VAR_3, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_4(VAR_3, FUNC_5(VAR_4), VAR_6, FUNC_0(VAR_4)))
  return -VAR_0;

 FUNC_2(VAR_3, VAR_5);
 return 0;
}
