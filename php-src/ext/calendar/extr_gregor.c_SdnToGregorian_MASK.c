
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(
        zend_long VAR_5,
        int *VAR_6,
        int *VAR_7,
        int *VAR_8)
{
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 zend_long VAR_13;
 int VAR_14;

 if (VAR_5 <= 0 ||
   VAR_5 > (VAR_4 - 4 * VAR_3) / 4) {
  goto fail;
 }
 VAR_13 = (VAR_5 + VAR_3) * 4 - 1;


 VAR_9 = VAR_13 / VAR_0;


 VAR_13 = ((VAR_13 % VAR_0) / 4) * 4 + 3;
 VAR_10 = (VAR_9 * 100) + (VAR_13 / VAR_1);
 VAR_14 = (VAR_13 % VAR_1) / 4 + 1;


 VAR_13 = VAR_14 * 5 - 3;
 VAR_11 = VAR_13 / VAR_2;
 VAR_12 = (VAR_13 % VAR_2) / 5 + 1;


 if (VAR_11 < 10) {
  VAR_11 += 3;
 } else {
  VAR_10 += 1;
  VAR_11 -= 9;
 }


 VAR_10 -= 4800;
 if (VAR_10 <= 0)
  VAR_10--;

 *VAR_6 = VAR_10;
 *VAR_7 = VAR_11;
 *VAR_8 = VAR_12;
 return;

fail:
 *VAR_6 = 0;
 *VAR_7 = 0;
 *VAR_8 = 0;
}
