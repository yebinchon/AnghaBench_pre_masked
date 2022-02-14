
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;
 st32 VAR_4;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2 & 0x18180;
 if ( (ut32)VAR_3 <= 0x8100 ) {
  if (VAR_3 == 33024) {
   return 437;
  }
  if ( (ut32)VAR_3 > 0x180 ) {
   if (VAR_3 == 32768) {
    return 431;
   }
   if (VAR_3 == 32896) {
    return 435;
   }
  } else {
   if (VAR_3 == 384) {
    return 440;
   }
   if (!VAR_3) {
    return 430;
   }
   if (VAR_3 == 128) {
    return 432;
   }
   if (VAR_3 == 256) {
    return 434;
   }
  }
  return VAR_0;
 }
 if ( (ut32)VAR_3 <= 0x10100 ) {
  if (VAR_3 == 65792) {
   return 442;
  }
  if (VAR_3 == 33152) {
   return 441;
  }
  if (VAR_3 == 65536) {
   return 433;
  }
  if (VAR_3 == 65664) {
   return 436;
  }
  return VAR_0;
 }
 if ( VAR_3 == 65920 ) {
  VAR_4 = 439;
 } else {
  if (VAR_3 != 98688) {
   return VAR_0;
  }
  VAR_4 = 438;
 }
 return VAR_4;
}
