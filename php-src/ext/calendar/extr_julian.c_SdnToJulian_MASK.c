
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(
     zend_long VAR_7,
     int *VAR_8,
     int *VAR_9,
     int *VAR_10)
{
 int VAR_11;
 int VAR_12;
 int VAR_13;
 zend_long VAR_14;
 int VAR_15;

 if (VAR_7 <= 0) {
  goto fail;
 }

 if (VAR_7 > (VAR_5 - VAR_4 * 4 + 1) / 4 || VAR_7 < VAR_6 / 4) {
  goto fail;
 }
 VAR_14 = VAR_7 * 4 + (VAR_4 * 4 - 1);


 {
  long VAR_16 = VAR_14 / VAR_0;
  if (VAR_16 > VAR_2 || VAR_16 < VAR_3) {
   goto fail;
  }
  VAR_11 = (int) VAR_16;
 }
 VAR_15 = (VAR_14 % VAR_0) / 4 + 1;


 VAR_14 = VAR_15 * 5 - 3;
 VAR_12 = VAR_14 / VAR_1;
 VAR_13 = (VAR_14 % VAR_1) / 5 + 1;


 if (VAR_12 < 10) {
  VAR_12 += 3;
 } else {
  VAR_11 += 1;
  VAR_12 -= 9;
 }


 VAR_11 -= 4800;
 if (VAR_11 <= 0)
  VAR_11--;

 *VAR_8 = VAR_11;
 *VAR_9 = VAR_12;
 *VAR_10 = VAR_13;
 return;

fail:
 *VAR_8 = 0;
 *VAR_9 = 0;
 *VAR_10 = 0;
}
