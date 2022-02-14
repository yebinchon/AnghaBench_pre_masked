
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3 = VAR_1 & 0x18180;
 if ( (ut32)VAR_3 <= 0x8080 ) {
  if (VAR_3 == 32896) {
   return 528;
  }
  if (!VAR_3) {
   return 406;
  }
  if (VAR_3 == 128) {
   return 527;
  }
  if (VAR_3 == 32768) {
   return 407;
  }
  return VAR_0;
 }
 if ( VAR_3 == 98304 ) {
  VAR_2 = 408;
 } else {
  if (VAR_3 != 98432) {
   return VAR_0;
  }
  VAR_2 = 529;
 }
 return VAR_2;
}
