
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (struct pt_regs volatile*) ;

int FUNC_1(volatile struct pt_regs* VAR_0)
{
 int VAR_1, VAR_2, VAR_3 = 0, VAR_4;

 for (VAR_2 = 0; VAR_2 < 300; VAR_2++)
  for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
   if (VAR_2 & 1)
    VAR_4 = FUNC_0(VAR_0);
   else
    VAR_4 = VAR_2;
   VAR_3 += VAR_1 * VAR_4;
  }

 return VAR_3;
}
