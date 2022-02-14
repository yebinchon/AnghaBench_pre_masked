
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_4, int *VAR_5)
{
 int VAR_6;

 switch(VAR_4) {
 case 1: *VAR_5 |= VAR_0; return 0;
 case 3: *VAR_5 |= VAR_2; return 0;
 case 5: *VAR_5 |= VAR_3; return 0;
 case 14: *VAR_5 |= VAR_1; return 0;
 default:
  if (VAR_4%2) return -1;
  VAR_6 = VAR_4/2-1;
  if (VAR_6 == 0x14 || VAR_6 == 0x13 || VAR_6 == 0x12 || VAR_6 == 0x0E)
   return -1;
  *VAR_5 |= FUNC_0(VAR_4);
  return 0;
 }
}
