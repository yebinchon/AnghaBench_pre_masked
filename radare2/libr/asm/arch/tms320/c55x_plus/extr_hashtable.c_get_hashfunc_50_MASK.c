
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int VAR_0 ;

st32 FUNC_0(st32 VAR_1, st32 VAR_2) {
 st32 VAR_3 = VAR_2 & 0x780000;
 if ( (ut32)VAR_3 <= 0x400000 ) {
  if (VAR_3 == 4194304) {
   return 522;
  }
  if ( (ut32)VAR_3 > 0x180000 ) {
   if (VAR_3 == 2621440) {
    return 402;
   }
   if (VAR_3 == 3145728) {
    return 411;
   }
  } else {
   if (VAR_3 == 1572864) {
    return 401;
   }
   if (!VAR_3) {
    return 403;
   }
   if (VAR_3 == 524288) {
    return 400;
   }
  }
  return VAR_1;
 }
 if ((ut32)VAR_3 <= 0x680000) {
  if (VAR_3 == 0x680000) {
   return 526;
  }
  if (VAR_3 == VAR_0) {
   return 524;
  }
  if (VAR_3 == 0x580000) {
   return 525;
  }
  return VAR_1;
 }
 if (VAR_3 != 7340032) {
  return VAR_1;
 }
 return 523;
}
