
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs volatile*) ;

int FUNC_1(volatile struct pt_regs* VAR_0)
{
 int VAR_1 = 0;

 while (1) {
  if (FUNC_0(VAR_0) & 1)
   VAR_1 += 3;
  else
   VAR_1 += 7;
  if (VAR_1 > 40)
   break;
 }

 return VAR_1;
}
