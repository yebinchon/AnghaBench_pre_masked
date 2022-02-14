
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0 (long VAR_2, ppc_cpu_t VAR_3, int VAR_4)
{
  if ((VAR_3 & VAR_1) == 0)
    {
      int VAR_5;
      switch (VAR_2 & 0x14)
 {
 default:
 case 0:
   VAR_5 = 1;
   break;
 case 0x4:
   VAR_5 = (VAR_2 & 0x2) == 0;
   break;
 case 0x10:
   VAR_5 = (VAR_2 & 0x8) == 0;
   break;
 case 0x14:
   VAR_5 = VAR_2 == 0x14;
   break;
 }

 if (VAR_5 || (VAR_3 & VAR_0) == 0 || !VAR_4) {
  return VAR_5;
 }
    }
    if ((VAR_2 & 0x14) == 0) {
     return (VAR_2 & 0x1) == 0;
    } else if ((VAR_2 & 0x14) == 0x14) {
     return VAR_2 == 0x14;
    } else {
     return 1;
    }
}
