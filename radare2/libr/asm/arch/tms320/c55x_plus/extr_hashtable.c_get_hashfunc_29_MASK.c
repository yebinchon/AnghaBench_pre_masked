
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
 VAR_4 = VAR_3 & 0x40F800;
 if ( VAR_4 <= (ut32)VAR_0 ) {

  if (VAR_4 == VAR_0) {
   return 305;
  }
  if (VAR_4 == 40960) {
   return 306;
  }
  if (VAR_4 == 57344) {
   return 391;
  }
  return VAR_1;
 }
 if (VAR_4 != 4218880) {
  return VAR_1;
 }
 return 390;
}
