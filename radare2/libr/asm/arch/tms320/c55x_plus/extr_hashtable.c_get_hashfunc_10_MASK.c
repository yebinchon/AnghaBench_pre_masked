
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2 & 0x500000;
 if ( (ut32)VAR_3 <= 0x400000 ) {
  if (VAR_3 == 4194304) {
   return 247;
  }
  if (!VAR_3) {
   return 245;
  }
  if (VAR_3 == 1048576) {
   return 249;
  }
  return VAR_0;
 }
 if (VAR_3 != 5242880) {
  return VAR_0;
 }
 return 248;
}
