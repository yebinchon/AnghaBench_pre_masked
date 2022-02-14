
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3 = VAR_1 & 0x1000180;
 if ( (VAR_1 & 0x1000180u) <= 0x1000000 ) {
  if ((VAR_1 & 0x1000180) == 16777216) {
   return 191;
  }
  if ( (ut32)VAR_3 > 0x100 ) {
   if (VAR_3 == 384) {
    return 200;
   }
  } else {
   if (VAR_3 == 256) {
    return 538;
   }
   if (!VAR_3) {
    return 190;
   }
   if (VAR_3 == 128) {
    return 537;
   }
  }
  return VAR_0;
 }
 if ( VAR_3 == 16777344 ) {
  VAR_2 = 194;
 } else {
  if ( VAR_3 == 16777472 ) {
   VAR_2 = 539;
  } else {
   if (VAR_3 != 16777600) {
    return VAR_0;
   }
   VAR_2 = 201;
  }
 }
 return VAR_2;
}
