
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
 VAR_4 = VAR_3 & 0x418000;
 if ( (ut32)VAR_4 <= 0x400000 ) {
  if (VAR_4 == 4194304) {
   return 330;
  }
  if ( (ut32)VAR_4 <= 0x10000 ) {
   if ( VAR_4 != 65536 ) {
    if (!VAR_4) {
     return 329;
    }
    if (VAR_4 == 32768) {
     return 307;
    }
    return VAR_1;
   }
   return 480;
  }
  if (VAR_4 == 98304) {
   return 467;
  }
  return VAR_1;
 }

 if (VAR_4 != VAR_0) {
  if (VAR_4 == 4259840) {
   return 480;
  }
  if (VAR_4 == 4292608) {
   return 467;
  }
  return VAR_1;
 }
 return 308;
}
