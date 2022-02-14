
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0)
{
   unsigned int VAR_1,VAR_2;
   if (VAR_0 < 2) return 0;
   if (VAR_0 == 2) return 1;
   if (!(VAR_0 & 1)) return 0;
   if (VAR_0 % 3 == 0) return (VAR_0 == 3);
   for (VAR_1=5; (VAR_2=VAR_1*VAR_1), VAR_2 <= VAR_0 && VAR_2 > VAR_1; VAR_1 += 6) {
      if (VAR_0 % VAR_1 == 0) return 0;
      if (VAR_0 % (VAR_1+2) == 0) return 0;
   }
   return 1;
}
