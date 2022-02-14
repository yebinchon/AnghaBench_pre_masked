
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long long FUNC_0(unsigned long long VAR_0, int VAR_1)
{
 unsigned long long VAR_2;





 switch (VAR_1) {
 case 1:
  VAR_2 = 0x7fULL;
  break;
 case 2:
  VAR_2 = 0x7fffULL;
  break;
 case 4:
  VAR_2 = 0x7fffffffULL;
  break;
 case 8:





 default:

  return VAR_0;
 }


 if ((VAR_0 & (~0ULL - VAR_2)) == 0)
  return VAR_0;


 return (VAR_0 & VAR_2) | ~VAR_2;
}
