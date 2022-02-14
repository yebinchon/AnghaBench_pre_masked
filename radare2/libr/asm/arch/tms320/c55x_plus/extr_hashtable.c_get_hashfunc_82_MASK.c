
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;
 st32 VAR_3;

 VAR_2 = VAR_1 & 0x1000180;
 if ( (VAR_1 & 0x1000180u) <= 0x100 ) {
  if ((VAR_1 & 0x1000180) == 256) {
   return 203;
  }
  if (!VAR_2) {
   return 192;
  }
  if (VAR_2 == 128) {
   return 195;
  }
  return VAR_0;
 }
 if ( VAR_2 == 384 ) {
  VAR_3 = 198;
 } else {
  if (VAR_2 != 16777600) {
   return VAR_0;
  }
  VAR_3 = 196;
 }
 return VAR_3;
}
