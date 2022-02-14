
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

zend_long FUNC_0(
      int VAR_3,
      int VAR_4,
      int VAR_5)
{

 if (VAR_3 < 1 || VAR_3 > 14 ||
  VAR_4 < 1 || VAR_4 > 13 ||
  VAR_5 < 1 || VAR_5 > 30) {
  return (0);
 }
 return ((VAR_3 * VAR_0) / 4
   + (VAR_4 - 1) * VAR_1
   + VAR_5
   + VAR_2);
}
