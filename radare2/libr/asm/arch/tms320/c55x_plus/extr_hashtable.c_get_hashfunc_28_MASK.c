
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;
 char VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2 & 0x1F800;
 if ( (ut32)VAR_3 <= 0xA000 ) {
  if ( VAR_3 != 40960 ) {
   if ( (ut32)VAR_3 <= 0x3000 ) {
    if (VAR_3 == 12288) {
     return 384;
    }
    if ( (ut32)VAR_3 <= 0x1800 ) {
     if ( VAR_3 != 6144 && VAR_3 && VAR_3 != 2048 ) {
      if (VAR_3 == 4096) {
       return 384;
      }
      return VAR_0;
     }
     return 384;
    }
    if (VAR_3 == 8192 || VAR_3 == 10240) {
     return 384;
    }
    return VAR_0;
   }
   if ( (ut32)VAR_3 > 0x8800 ) {
    if ( VAR_3 != 36864 ) {
     if (VAR_3 == 38912) {
      return 385;
     }
     return VAR_0;
    }
   } else {
    if ( VAR_3 != 34816 ) {
     if ( VAR_3 != 14336 ) {
      if (VAR_3 == 24576) {
       return 388;
      }
      if (VAR_3 == 32768) {
       return 385;
      }
      return VAR_0;
     }
     return 384;
    }
   }
  }
  return 385;
 }
 if ( (ut32)VAR_3 <= 0x11000 ) {
  if (VAR_3 == 69632) {
   return 386;
  }
  if ( (ut32)VAR_3 <= 0xE000 ) {
   if (VAR_3 == 57344) {
    return 387;
   }
   if (VAR_3 != 43008 && VAR_3 != 45056 && VAR_3 != 47104) {
    return VAR_0;
   }
   return 385;
  }
  if (VAR_3 == 65536) {
   return 386;
  }
  VAR_4 = VAR_3 == 67584;
  LABEL_35:
   if (!VAR_4) {
    return VAR_0;
   }
   return 386;
 }
 if ( (ut32)VAR_3 <= 0x13000 ) {
  if (VAR_3 == 77824 || VAR_3 == 71680 || VAR_3 == 73728) {
   return 386;
  }
  VAR_4 = VAR_3 == 75776;
  goto LABEL_35;
 }
 if (VAR_3 == 79872) {
  return 386;
 }
 if (VAR_3 != 90112) {
  return VAR_0;
 }
 return 389;
}
