
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_0, int VAR_1)
{
 if (VAR_1 > 0 && VAR_1 > VAR_0->len)
  return 0;

 if (VAR_1 < 0 && -VAR_1 > FUNC_0(VAR_0))
  return 0;

 return 1;
}
