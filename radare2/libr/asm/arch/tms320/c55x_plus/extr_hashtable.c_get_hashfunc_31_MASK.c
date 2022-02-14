
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3 = VAR_1 & 0x380000;

 if ( (ut32)VAR_3 <= 0x200000 ) {
  if (VAR_3 == 2097152) {
   return 271;
  }
  if ( (ut32)VAR_3 > 0x100000 ) {
   if (VAR_3 == 1572864) {
    return 534;
   }
  } else {
   if (VAR_3 == 1048576) {
    return 317;
   }
   if (!VAR_3) {
    return 319;
   }
   if (VAR_3 == 524288) {
    return 533;
   }
  }
  return VAR_0;
 }
 if ( VAR_3 == 2621440 ) {
  VAR_2 = 535;
 } else {
  if ( VAR_3 == 3145728 ) {
   VAR_2 = 321;
  } else {
   if (VAR_3 != 3670016) {
    return VAR_0;
   }
   VAR_2 = 536;
  }
 }
 return VAR_2;
}
