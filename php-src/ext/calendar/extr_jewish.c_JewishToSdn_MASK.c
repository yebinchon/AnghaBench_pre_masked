
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;


 int FUNC_0 (int,int*,int*,int*,int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int,int) ;
 int* VAR_3 ;

zend_long FUNC_2(
      int VAR_4,
      int VAR_5,
      int VAR_6)
{
 zend_long VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 zend_long VAR_12;
 zend_long VAR_13;
 int VAR_14;
 int VAR_15;

 if (VAR_4 <= 0 || VAR_6 <= 0 || VAR_6 > 30) {
  return (0);
 }
 switch (VAR_5) {
  case 1:
  case 2:

   FUNC_0(VAR_4, &VAR_8, &VAR_9,
       &VAR_12, &VAR_13, &VAR_10);
   if (VAR_5 == 1) {
    VAR_7 = VAR_10 + VAR_6 - 1;
   } else {
    VAR_7 = VAR_10 + VAR_6 + 29;
   }
   break;

  case 3:



   FUNC_0(VAR_4, &VAR_8, &VAR_9,
       &VAR_12, &VAR_13, &VAR_10);


   VAR_13 += VAR_1 * VAR_3[VAR_9];
   VAR_12 += VAR_13 / VAR_0;
   VAR_13 = VAR_13 % VAR_0;
   VAR_11 = FUNC_1((VAR_9 + 1) % 19, VAR_12, VAR_13);

   VAR_14 = VAR_11 - VAR_10;

   if (VAR_14 == 355 || VAR_14 == 385) {
    VAR_7 = VAR_10 + VAR_6 + 59;
   } else {
    VAR_7 = VAR_10 + VAR_6 + 58;
   }
   break;

  case 4:
  case 5:
  case 6:


   FUNC_0(VAR_4 + 1, &VAR_8, &VAR_9,
       &VAR_12, &VAR_13, &VAR_11);

   if (VAR_3[(VAR_4 - 1) % 19] == 12) {
    VAR_15 = 29;
   } else {
    VAR_15 = 59;
   }

   if (VAR_5 == 4) {
    VAR_7 = VAR_11 + VAR_6 - VAR_15 - 237;
   } else if (VAR_5 == 5) {
    VAR_7 = VAR_11 + VAR_6 - VAR_15 - 208;
   } else {
    VAR_7 = VAR_11 + VAR_6 - VAR_15 - 178;
   }
   break;

  default:

   FUNC_0(VAR_4 + 1, &VAR_8, &VAR_9,
       &VAR_12, &VAR_13, &VAR_11);

   switch (VAR_5) {
    case 7:
     VAR_7 = VAR_11 + VAR_6 - 207;
     break;
    case 8:
     VAR_7 = VAR_11 + VAR_6 - 178;
     break;
    case 9:
     VAR_7 = VAR_11 + VAR_6 - 148;
     break;
    case 10:
     VAR_7 = VAR_11 + VAR_6 - 119;
     break;
    case 11:
     VAR_7 = VAR_11 + VAR_6 - 89;
     break;
    case 12:
     VAR_7 = VAR_11 + VAR_6 - 60;
     break;
    case 13:
     VAR_7 = VAR_11 + VAR_6 - 30;
     break;
    default:
     return (0);
   }
 }
 return (VAR_7 + VAR_2);
}
