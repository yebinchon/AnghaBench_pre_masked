
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, integer *VAR_1, integer *VAR_2, doublereal *
 VAR_3, integer *VAR_4, doublereal *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


    static integer VAR_13, VAR_14;
    extern logical FUNC_2(char *, char *);
    VAR_7 = *VAR_4;
    VAR_8 = 1 + VAR_7;
    VAR_3 -= VAR_8;
    VAR_9 = *VAR_6;
    VAR_10 = 1 + VAR_9;
    VAR_5 -= VAR_10;


    if (FUNC_2(VAR_0, "U")) {
 VAR_11 = *VAR_2;
 for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
     VAR_12 = FUNC_0(VAR_14,*VAR_1);
     for (VAR_13 = 1; VAR_13 <= VAR_12; ++VAR_13) {
  VAR_5[VAR_13 + VAR_14 * VAR_9] = VAR_3[VAR_13 + VAR_14 * VAR_7];

     }

 }
    } else if (FUNC_2(VAR_0, "L")) {
 VAR_11 = *VAR_2;
 for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
     VAR_12 = *VAR_1;
     for (VAR_13 = VAR_14; VAR_13 <= VAR_12; ++VAR_13) {
  VAR_5[VAR_13 + VAR_14 * VAR_9] = VAR_3[VAR_13 + VAR_14 * VAR_7];

     }

 }
    } else {
 VAR_11 = *VAR_2;
 for (VAR_14 = 1; VAR_14 <= VAR_11; ++VAR_14) {
     VAR_12 = *VAR_1;
     for (VAR_13 = 1; VAR_13 <= VAR_12; ++VAR_13) {
  VAR_5[VAR_13 + VAR_14 * VAR_9] = VAR_3[VAR_13 + VAR_14 * VAR_7];

     }

 }
    }
    return 0;



}
