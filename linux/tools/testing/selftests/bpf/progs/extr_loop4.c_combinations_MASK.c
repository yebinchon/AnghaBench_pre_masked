
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {scalar_t__ len; } ;



int FUNC_0(volatile struct __sk_buff* VAR_0)
{
 int VAR_1 = 0, VAR_2;

#pragma nounroll
 for (VAR_2 = 0; VAR_2 < 20; VAR_2++)
  if (VAR_0->len)
   VAR_1 |= 1 << VAR_2;
 return VAR_1;
}
