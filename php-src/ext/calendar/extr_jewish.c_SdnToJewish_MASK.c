
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zend_long ;


 int FUNC_0 (scalar_t__,int*,int*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,scalar_t__,scalar_t__) ;
 scalar_t__* VAR_4 ;

void FUNC_2(
     zend_long VAR_5,
     int *VAR_6,
     int *VAR_7,
     int *VAR_8)
{
 zend_long VAR_9;
 zend_long VAR_10;
 zend_long VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 if (VAR_5 <= VAR_3 || VAR_5 > VAR_2) {
  *VAR_6 = 0;
  *VAR_7 = 0;
  *VAR_8 = 0;
  return;
 }
 VAR_9 = VAR_5 - VAR_3;

 FUNC_0(VAR_9, &VAR_12, &VAR_13, &VAR_10, &VAR_11);
 VAR_14 = FUNC_1(VAR_13, VAR_10, VAR_11);

 if (VAR_9 >= VAR_14) {

  *VAR_6 = VAR_12 * 19 + VAR_13 + 1;
  if (VAR_9 < VAR_14 + 59) {
   if (VAR_9 < VAR_14 + 30) {
    *VAR_7 = 1;
    *VAR_8 = VAR_9 - VAR_14 + 1;
   } else {
    *VAR_7 = 2;
    *VAR_8 = VAR_9 - VAR_14 - 29;
   }
   return;
  }


  VAR_11 += VAR_1 * VAR_4[VAR_13];
  VAR_10 += VAR_11 / VAR_0;
  VAR_11 = VAR_11 % VAR_0;
  VAR_15 = FUNC_1((VAR_13 + 1) % 19, VAR_10, VAR_11);
 } else {

  *VAR_6 = VAR_12 * 19 + VAR_13;
  if (VAR_9 >= VAR_14 - 177) {

   if (VAR_9 > VAR_14 - 30) {
    *VAR_7 = 13;
    *VAR_8 = VAR_9 - VAR_14 + 30;
   } else if (VAR_9 > VAR_14 - 60) {
    *VAR_7 = 12;
    *VAR_8 = VAR_9 - VAR_14 + 60;
   } else if (VAR_9 > VAR_14 - 89) {
    *VAR_7 = 11;
    *VAR_8 = VAR_9 - VAR_14 + 89;
   } else if (VAR_9 > VAR_14 - 119) {
    *VAR_7 = 10;
    *VAR_8 = VAR_9 - VAR_14 + 119;
   } else if (VAR_9 > VAR_14 - 148) {
    *VAR_7 = 9;
    *VAR_8 = VAR_9 - VAR_14 + 148;
   } else {
    *VAR_7 = 8;
    *VAR_8 = VAR_9 - VAR_14 + 178;
   }
   return;
  } else {
   if (VAR_4[(*VAR_6 - 1) % 19] == 13) {
    *VAR_7 = 7;
    *VAR_8 = VAR_9 - VAR_14 + 207;
    if (*VAR_8 > 0)
     return;
    (*VAR_7)--;
    (*VAR_8) += 30;
    if (*VAR_8 > 0)
     return;
    (*VAR_7)--;
    (*VAR_8) += 30;
   } else {
    *VAR_7 = 7;
    *VAR_8 = VAR_9 - VAR_14 + 207;
    if (*VAR_8 > 0)
     return;
    (*VAR_7) -= 2;
    (*VAR_8) += 30;
   }
   if (*VAR_8 > 0)
    return;
   (*VAR_7)--;
   (*VAR_8) += 29;
   if (*VAR_8 > 0)
    return;



   VAR_15 = VAR_14;
   FUNC_0(VAR_10 - 365,
       &VAR_12, &VAR_13, &VAR_10, &VAR_11);
   VAR_14 = FUNC_1(VAR_13, VAR_10, VAR_11);
  }
 }

 VAR_16 = VAR_15 - VAR_14;
 VAR_10 = VAR_9 - VAR_14 - 29;
 if (VAR_16 == 355 || VAR_16 == 385) {

  if (VAR_10 <= 30) {
   *VAR_7 = 2;
   *VAR_8 = VAR_10;
   return;
  }
  VAR_10 -= 30;
 } else {

  if (VAR_10 <= 29) {
   *VAR_7 = 2;
   *VAR_8 = VAR_10;
   return;
  }
  VAR_10 -= 29;
 }


 *VAR_7 = 3;
 *VAR_8 = VAR_10;
}
