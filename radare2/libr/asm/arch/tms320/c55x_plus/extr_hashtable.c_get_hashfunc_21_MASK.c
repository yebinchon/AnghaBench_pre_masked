
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;

 VAR_2 = VAR_1 & 0x1400000;
 if ( (VAR_1 & 0x1400000u) <= 0x1000000 ) {
  if ((VAR_1 & 0x1400000) == 16777216) {
   return 73;
  }
  if (!VAR_2) {
   return 72;
  }
  if (VAR_2 == 4194304) {
   return 108;
  }
  return VAR_0;
 }
 if (VAR_2 != 20971520) {
  return VAR_0;
 }
 return 109;
}
