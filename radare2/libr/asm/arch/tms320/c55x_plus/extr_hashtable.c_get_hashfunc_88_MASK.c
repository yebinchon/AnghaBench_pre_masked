
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
typedef int st32 ;


 int VAR_0 ;

st32 FUNC_0(st32 VAR_1, st32 VAR_2) {
 st32 VAR_3 = VAR_2;
 st32 VAR_4 = VAR_3 & 0x79B981;
 if ( (ut32)VAR_4 <= 0x410101 ) {
  if (VAR_4 == 0x410101) {
   return 493;
  }
  if (VAR_4 == 0x8100 || VAR_4 == 0x408100) {
   return 492;
  }
  return VAR_1;
 }
 if (VAR_4 != VAR_0) {
  return VAR_1;
 }
 return 494;
}
