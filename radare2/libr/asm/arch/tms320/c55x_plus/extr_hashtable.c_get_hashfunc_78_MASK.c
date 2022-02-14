
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2 = VAR_1 & 0x18000;
 if ( (ut32)VAR_2 <= 0x10000 ) {
  if (VAR_2 == 65536) {
   return 429;
  }
  if (!VAR_2) {
   return 427;
  }
  if (VAR_2 == 32768) {
   return 428;
  }

  return VAR_0;
 }
 if (VAR_2 != 98304) {
  return VAR_0;
 }
 return 252;
}
