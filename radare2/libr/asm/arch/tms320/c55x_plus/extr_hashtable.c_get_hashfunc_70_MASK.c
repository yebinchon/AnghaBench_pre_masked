
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;

 VAR_2 = VAR_1 & 0x1400000;
 if ( VAR_1 & 0x1400000 ) {
  if ( VAR_2 == 16777216 ) {
   VAR_3 = 217;
  } else {
   if (VAR_2 == 20971520) {
    VAR_3 = 212;
   } else {
    VAR_3 = VAR_0;
   }
  }
 } else {
  VAR_3 = 216;
 }
 return VAR_3;
}
