
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

 VAR_2 = VAR_1 & 0x1810180;
 if ( (VAR_1 & 0x1810180u) <= 0x800080 ) {
  if ( (VAR_1 & 0x1810180) != 8388736 ) {
   if ( (ut32)VAR_2 <= 0x10000 ) {
    if (VAR_2 == 65536) {
     return 193;
    }
    if ( (ut32)VAR_2 <= 0x100 ) {
     if ( VAR_2 != 256 ) {
      if ( VAR_2 ) {
       if (VAR_2 == 128) {
        return 197;
       }
       return VAR_0;
      }
      return 193;
     }
     return 202;
    }
    VAR_4 = VAR_2 == 384;
    LABEL_11:
     if (VAR_4) {
      return 199;
     }
     return VAR_0;
   }
   if ( (ut32)VAR_2 > 0x10180 ) {
    if (VAR_2 == 8388608) {
     return 193;
    }
    return VAR_0;
   }
   if (VAR_2 == 65920) {
    return 199;
   }
   if ( VAR_2 != 65664 ) {
    if (VAR_2 == 65792) {
     return 202;
    }
    return VAR_0;
   }
  }
  return 197;
 }
 if ( (ut32)VAR_2 <= 0x810100 ) {
  if (VAR_2 == 8454400) {
   return 202;
  }
  if ( (ut32)VAR_2 <= 0x810000 ) {
   if (VAR_2 == 8454144) {
    return 193;
   }
   if (VAR_2 == 8388864) {
    return 202;
   }
   VAR_4 = VAR_2 == 8388992;
   goto LABEL_11;
  }
  if (VAR_2 != 8454272) {
   return VAR_0;
  }
  return 197;
 }
 if (VAR_2 == 8454528) {
  return 199;
 }
 if ( VAR_2 == 16777216 ) {
  VAR_3 = 205;
 } else {
  if (VAR_2 != 16777344) {
   return VAR_0;
  }
  VAR_3 = 206;
 }
 return VAR_3;
}
