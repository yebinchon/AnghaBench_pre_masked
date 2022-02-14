
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0(
     zend_long VAR_5,
     int *VAR_6,
     int *VAR_7,
     int *VAR_8)
{
 zend_long VAR_9;
 int VAR_10;

 if (VAR_5 < VAR_2 || VAR_5 > VAR_4) {
  *VAR_6 = 0;
  *VAR_7 = 0;
  *VAR_8 = 0;
  return;
 }
 VAR_9 = (VAR_5 - VAR_3) * 4 - 1;
 *VAR_6 = VAR_9 / VAR_0;
 VAR_10 = (VAR_9 % VAR_0) / 4;
 *VAR_7 = VAR_10 / VAR_1 + 1;
 *VAR_8 = VAR_10 % VAR_1 + 1;
}
