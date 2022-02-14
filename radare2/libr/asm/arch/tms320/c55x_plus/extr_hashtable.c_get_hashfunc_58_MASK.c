
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;
 st32 VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2 & 0x18000;
 if ( VAR_3 ) {
  if ( VAR_3 == 32768 ) {
   VAR_4 = 263;
  } else {
   if (VAR_3 == 65536) {
    VAR_4 = 264;
   } else {
    VAR_4 = VAR_0;
   }
  }
 } else {
  VAR_4 = 262;
 }
 return VAR_4;
}
