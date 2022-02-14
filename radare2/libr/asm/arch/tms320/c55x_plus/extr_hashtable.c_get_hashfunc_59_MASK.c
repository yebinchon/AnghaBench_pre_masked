
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3 = VAR_1 & 0x8180;
 if ( (ut32)VAR_3 <= 0x100 ) {
  if (VAR_3 == 256) {
   return 505;
  }
  if (!(VAR_1 & 0x8180)) {
   return 503;
  }
  if (VAR_3 == 128) {
   return 504;
  }
  return VAR_0;
 }
 if ( VAR_3 == 384 ) {
  VAR_2 = 506;
 } else {
  if (VAR_3 != 32768) {
   return VAR_0;
  }
  VAR_2 = 507;
 }
 return VAR_2;
}
