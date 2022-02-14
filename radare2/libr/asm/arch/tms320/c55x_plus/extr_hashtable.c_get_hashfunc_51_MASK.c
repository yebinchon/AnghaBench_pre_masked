
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2 = VAR_1 & 0x180000;
 if ( (ut32)VAR_2 > 0x100000 ) {
  if (VAR_2 != 1572864) {
   return VAR_0;
  }
 } else {
  if ( VAR_2 != 1048576 ) {
   if (!VAR_2) {
    return 396;
   }
   if (VAR_2 == 524288) {
    return 532;
   }
   return VAR_0;
  }
 }
 return 398;
}
