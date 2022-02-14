
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_3(struct sk_buff *VAR_1, int VAR_2, u32 VAR_3)
{
 struct nlattr *VAR_4 = FUNC_1(VAR_1, VAR_2);
 int VAR_5;

 if (!VAR_4)
  return -VAR_0;

 VAR_5 = 0;
 while (VAR_3) {
  if ((VAR_3 & 1) && FUNC_2(VAR_1, VAR_5))
   return -VAR_0;

  VAR_3 >>= 1;
  VAR_5++;
 }

 FUNC_0(VAR_1, VAR_4);
 return 0;
}
