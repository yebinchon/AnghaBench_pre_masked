
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

st32 FUNC_0(st32 VAR_2, st32 VAR_3) {
 ut32 VAR_4;

 VAR_4 = (ut32)VAR_1 & VAR_3;
 if ( ((ut32)VAR_1 & VAR_3) <= 0x8000 ) {
  if ( ((ut32)VAR_1 & VAR_3) != 32768 ) {
   if ( VAR_4 <= 0x400 ) {
    if ( VAR_4 != 1024 && VAR_4 ) {
     if (VAR_4 == 512) {
      return 365;
     }
     return VAR_2;
    }
    return 365;
   }
   if (VAR_4 == 1536) {
    return 365;
   }
   return VAR_2;
  }
  return 382;
 }
 if ( VAR_4 <= 0x8600 ) {
  if (VAR_4 != 34304 && VAR_4 != 33280 && VAR_4 != 33792) {
   return VAR_2;
  }
  return 382;
 }

 if (VAR_4 != VAR_0) {
  return VAR_2;
 }
 return 380;
}
