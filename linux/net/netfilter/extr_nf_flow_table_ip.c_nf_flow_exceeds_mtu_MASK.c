
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;


 scalar_t__ FUNC_0 (struct sk_buff const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_2(const struct sk_buff *VAR_0, unsigned int VAR_1)
{
 if (VAR_0->len <= VAR_1)
  return 0;

 if (FUNC_1(VAR_0) && FUNC_0(VAR_0, VAR_1))
  return 0;

 return 1;
}
