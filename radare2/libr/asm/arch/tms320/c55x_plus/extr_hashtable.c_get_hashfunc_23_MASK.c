
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int VAR_0 ;

st32 FUNC_0(st32 VAR_1, st32 VAR_2) {
 st32 VAR_3;
 st32 VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = VAR_3 & 0x41C000;
 if ( (ut32)VAR_4 <= 0x400000 ) {
  if (VAR_4 == 4194304) {
   return 323;
  }
  if ( (ut32)VAR_4 <= 0xC000 ) {
   if ( VAR_4 != 49152 ) {
    if (!VAR_4) {
     return 324;
    }
    if (VAR_4 == 16384) {
     return 370;
    }
    if (VAR_4 == 32768) {
     return 325;
    }
    return VAR_1;
   }
   return 372;
  }
  if ( VAR_4 != 65536 ) {
   if ( VAR_4 != 81920 ) {
    if (VAR_4 == 114688) {
     return 371;
    }
    return VAR_1;
   }
   return 373;
  }
  return 314;
 }
 if ( (ut32)VAR_4 <= 0x410000 ) {
  if ( VAR_4 != 4259840 ) {
   if (VAR_4 == 4210688) {
    return 369;
   }

   if (VAR_4 == VAR_0) {
    return 325;
   }
   if (VAR_4 != 4243456) {
    return VAR_1;
   }
   return 372;
  }
  return 314;
 }
 if ( VAR_4 != 4276224 ) {
  if (VAR_4 == 4308992) {
   return 371;
  }
  return VAR_1;
 }
 return 373;
}
