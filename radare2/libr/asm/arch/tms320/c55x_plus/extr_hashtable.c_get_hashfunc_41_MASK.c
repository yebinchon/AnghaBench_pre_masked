
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3 = VAR_1 & 0x1010000;
 if ( VAR_1 & 0x1010000 ) {
  if ( VAR_3 == 16777216 ) {
   VAR_2 = 138;
  } else {
   if (VAR_3 == 16842752) {
    VAR_2 = 139;
   } else {
    VAR_2 = VAR_0;
   }
  }
 } else {
  VAR_2 = 137;
 }
 return VAR_2;
}
