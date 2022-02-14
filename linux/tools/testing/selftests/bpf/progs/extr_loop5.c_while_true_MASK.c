
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {scalar_t__ len; } ;


 int FUNC_0 () ;

int FUNC_1(volatile struct __sk_buff* VAR_0)
{
 int VAR_1 = 0;

 while (1) {
  if (VAR_0->len)
   VAR_1 += 3;
  else
   VAR_1 += 7;
  if (VAR_1 == 9)
   break;
  FUNC_0();
  if (VAR_1 == 10)
   break;
  FUNC_0();
  if (VAR_1 == 13)
   break;
  FUNC_0();
  if (VAR_1 == 14)
   break;
 }
 return VAR_1;
}
