
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (scalar_t__,void const*,unsigned int) ;
 int FUNC_2 (scalar_t__,int ,unsigned int) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_0, int VAR_1,
       const void *VAR_2,
       unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6 = FUNC_0(VAR_3);
 struct nlattr *VAR_7;

 VAR_7 = FUNC_4(VAR_0, VAR_1, VAR_6);
 if (!VAR_7)
  return -1;

 VAR_5 = VAR_4 ? : VAR_3;
 FUNC_1(FUNC_3(VAR_7), VAR_2, VAR_5);
 FUNC_2(FUNC_3(VAR_7) + VAR_5, 0, VAR_6 - VAR_5);

 return 0;
}
