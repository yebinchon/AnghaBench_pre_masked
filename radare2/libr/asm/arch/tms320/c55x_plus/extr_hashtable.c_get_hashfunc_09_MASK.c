
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;

 VAR_2 = VAR_1 & 0xC0000000;
 if ( (VAR_1 & 0xC0000000u) <= 0x80000000 ) {
  if ((VAR_1 & 0xC0000000) == 0x80000000) {
   return 91;
  }
  if (!VAR_2) {
   return 89;
  }
  if (VAR_2 == 0x40000000) {
   return 90;
  }
  return VAR_0;
 }
 if (VAR_2 != 0xC0000000) {
  return VAR_0;
 }
 return 92;
}
