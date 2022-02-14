
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;
typedef int ftnlen ;


 int FUNC_0 (float*) ;
 float FUNC_1 (float) ;
 int FUNC_2 (int,int) ;

integer FUNC_3(integer *VAR_0, char *VAR_1, char *VAR_2, integer *VAR_3, integer
 *VAR_4, integer *VAR_5, integer *VAR_6, ftnlen VAR_7, ftnlen VAR_8)
{

    integer VAR_9, VAR_10, VAR_11;
    real VAR_12;


    static integer VAR_13, VAR_14;
    if (*VAR_0 == 15 || *VAR_0 == 13 || *VAR_0 == 16) {



 VAR_13 = *VAR_5 - *VAR_4 + 1;
 VAR_14 = 2;
 if (VAR_13 >= 30) {
     VAR_14 = 4;
 }
 if (VAR_13 >= 60) {
     VAR_14 = 10;
 }
 if (VAR_13 >= 150) {

     VAR_12 = FUNC_1((real) VAR_13) / FUNC_1(2.f);
     VAR_10 = 10, VAR_11 = VAR_13 / FUNC_0(&VAR_12);
     VAR_14 = FUNC_2(VAR_10,VAR_11);
 }
 if (VAR_13 >= 590) {
     VAR_14 = 64;
 }
 if (VAR_13 >= 3000) {
     VAR_14 = 128;
 }
 if (VAR_13 >= 6000) {
     VAR_14 = 256;
 }

 VAR_10 = 2, VAR_11 = VAR_14 - VAR_14 % 2;
 VAR_14 = FUNC_2(VAR_10,VAR_11);
    }

    if (*VAR_0 == 12) {
 VAR_9 = 75;

    } else if (*VAR_0 == 14) {







 VAR_9 = 14;

    } else if (*VAR_0 == 15) {



 VAR_9 = VAR_14;

    } else if (*VAR_0 == 13) {



 if (VAR_13 <= 500) {
     VAR_9 = VAR_14;
 } else {
     VAR_9 = VAR_14 * 3 / 2;
 }

    } else if (*VAR_0 == 16) {
 VAR_9 = 0;
 if (VAR_14 >= 14) {
     VAR_9 = 1;
 }
 if (VAR_14 >= 14) {
     VAR_9 = 2;
 }

    } else {

 VAR_9 = -1;

    }



    return VAR_9;
}
