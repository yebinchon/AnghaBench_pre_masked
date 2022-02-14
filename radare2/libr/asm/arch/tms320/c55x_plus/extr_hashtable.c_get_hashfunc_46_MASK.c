
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;

 VAR_2 = VAR_1 & 0xC1000000;
 if ( (VAR_1 & 0xC1000000u) > 0x40000000 ) {
  if (VAR_2 != 0x80000000 && VAR_2 != 0xC0000000) {
   return VAR_0;
  }
 } else {
  if ( (VAR_1 & 0xC1000000) != 0x40000000 && VAR_2 ) {
   if (VAR_2 == 16777216) {
    return 136;
   }
   return VAR_0;
  }
 }
 return 18;
}
