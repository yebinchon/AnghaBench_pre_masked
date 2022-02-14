
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int st32 ;



st32 FUNC_0(st32 VAR_0, st32 VAR_1) {
 st32 VAR_2;

 if ( VAR_1 & 0x80000000 ) {
  if ((st32) (VAR_1 & 0x80000000) == 0x80000000) {
   VAR_2 = 228;
  } else {
   VAR_2 = VAR_0;
  }
 } else {
  VAR_2 = 227;
 }
 return VAR_2;
}
