
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

zend_long FUNC_0(
      int VAR_3,
      int VAR_4,
      int VAR_5)
{
 zend_long VAR_6;
 int VAR_7;


 if (VAR_3 == 0 || VAR_3 < -4713 ||
  VAR_4 <= 0 || VAR_4 > 12 ||
  VAR_5 <= 0 || VAR_5 > 31) {
  return (0);
 }

 if (VAR_3 == -4713) {
  if (VAR_4 == 1 && VAR_5 == 1) {
   return (0);
  }
 }

 if (VAR_3 < 0) {
  VAR_6 = VAR_3 + 4801;
 } else {
  VAR_6 = VAR_3 + 4800;
 }


 if (VAR_4 > 2) {
  VAR_7 = VAR_4 - 3;
 } else {
  VAR_7 = VAR_4 + 9;
  VAR_6--;
 }

 return ((VAR_6 * VAR_0) / 4
   + (VAR_7 * VAR_1 + 2) / 5
   + VAR_5
   - VAR_2);
}
