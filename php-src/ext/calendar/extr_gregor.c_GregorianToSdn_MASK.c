
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

zend_long FUNC_0(
         int VAR_4,
         int VAR_5,
         int VAR_6)
{
 zend_long VAR_7;
 int VAR_8;


 if (VAR_4 == 0 || VAR_4 < -4714 ||
  VAR_5 <= 0 || VAR_5 > 12 ||
  VAR_6 <= 0 || VAR_6 > 31) {
  return (0);
 }

 if (VAR_4 == -4714) {
  if (VAR_5 < 11) {
   return (0);
  }
  if (VAR_5 == 11 && VAR_6 < 25) {
   return (0);
  }
 }

 if (VAR_4 < 0) {
  VAR_7 = VAR_4 + 4801;
 } else {
  VAR_7 = VAR_4 + 4800;
 }


 if (VAR_5 > 2) {
  VAR_8 = VAR_5 - 3;
 } else {
  VAR_8 = VAR_5 + 9;
  VAR_7--;
 }

 return (((VAR_7 / 100) * VAR_0) / 4
   + ((VAR_7 % 100) * VAR_1) / 4
   + (VAR_8 * VAR_2 + 2) / 5
   + VAR_6
   - VAR_3);
}
