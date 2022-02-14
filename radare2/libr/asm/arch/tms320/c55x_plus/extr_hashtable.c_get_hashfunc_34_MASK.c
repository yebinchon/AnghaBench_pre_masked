
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3 = VAR_1;
 st32 VAR_4 = VAR_3 & 0x580000;
 if ( (ut32)VAR_4 <= 0x180000 ) {
  if (VAR_4 == 1572864) {
   return 471;
  }
  if (!VAR_4) {
   return 392;
  }
  if (VAR_4 == 524288) {
   return 470;
  }
  if (VAR_4 == 1048576) {
   return 393;
  }
  return VAR_0;
 }
 if ( VAR_4 == 4194304 ) {
  VAR_2 = 394;
 } else {
  if (VAR_4 != 5242880) {
   return VAR_0;
  }
  VAR_2 = 395;
 }
 return VAR_2;
}
