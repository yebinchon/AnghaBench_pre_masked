
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
 if ( (ut32)VAR_4 <= 0x404000 ) {
  if (VAR_4 == 4210688 || VAR_4 == 16384) {
   return 310;
  }
  if ( VAR_4 != 49152 ) {
   if (VAR_4 == 4194304) {
    return 312;
   }
   return VAR_1;
  }
  return 311;
 }

 if (VAR_4 != VAR_0) {
  if (VAR_4 != 4243456) {
   return VAR_1;
  }
  return 311;
 }
 return 313;
}
