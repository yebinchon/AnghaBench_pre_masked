
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;

__attribute__((used)) static long
FUNC_0 (unsigned long VAR_1,
      ppc_cpu_t VAR_2,
      int *VAR_3)
{
  if ((VAR_2 & VAR_0) == 0)
    {
   if (((VAR_1 & (1 << 21)) == 0) != ((VAR_1 & (1 << 15)) == 0)) {
    *VAR_3 = 1;
   }
    }
  else
    {
     if ((VAR_1 & (0x17 << 21)) != (0x06 << 21) && (VAR_1 & (0x1d << 21)) != (0x18 << 21)) {
      *VAR_3 = 1;
     }
    }

  return ((VAR_1 & 0xfffc) ^ 0x8000) - 0x8000;
}
