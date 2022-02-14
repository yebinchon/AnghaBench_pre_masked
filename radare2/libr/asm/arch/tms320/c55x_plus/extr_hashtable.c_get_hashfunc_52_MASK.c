
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2 = VAR_1 & 0x18000;
 if ( (ut32)VAR_2 <= 0x10000 ) {
  if (VAR_2 == 0x10000) {
   return 296;
  }
  if (VAR_2 == 0x8000) {
   return 300;
  }
  if (!VAR_2) {
   return 298;
  }
  return VAR_0;
 }
 if (VAR_2 != 0x18000) {
  return VAR_0;
 }
 return 301;
}
