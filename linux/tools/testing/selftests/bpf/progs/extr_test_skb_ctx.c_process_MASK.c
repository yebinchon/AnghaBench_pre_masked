
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int* cb; int priority; } ;



int FUNC_0(struct __sk_buff *VAR_0)
{
#pragma clang loop unroll(full)
 for (int VAR_1 = 0; VAR_1 < 5; VAR_1++) {
  if (VAR_0->cb[VAR_1] != VAR_1 + 1)
   return 1;
  VAR_0->cb[VAR_1]++;
 }
 VAR_0->priority++;

 return 0;
}
