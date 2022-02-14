
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2 = VAR_1 & 0x8200;
 if ( (ut32)VAR_2 <= 0x8000 ) {
  if (VAR_2 == 32768) {
   return 316;
  }
  if (!(VAR_1 & 0x8200)) {
   return 410;
  }
  if (VAR_2 == 512) {
   return 531;
  }
  return VAR_0;
 }
 if (VAR_2 != 33280) {
  return VAR_0;
 }
 return 315;
}
