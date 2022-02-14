
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, integer *VAR_1, integer *VAR_2, doublereal *
 VAR_3, doublereal *VAR_4, doublereal *VAR_5, integer *VAR_6)
{

    integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12, VAR_13;
    extern logical FUNC_2(char *, char *);
    VAR_7 = *VAR_6;
    VAR_8 = 1 + VAR_7;
    VAR_5 -= VAR_8;


    if (FUNC_2(VAR_0, "U")) {






 VAR_9 = *VAR_2;
 for (VAR_13 = 2; VAR_13 <= VAR_9; ++VAR_13) {

     VAR_11 = VAR_13 - 1;
     VAR_10 = FUNC_0(VAR_11,*VAR_1);
     for (VAR_12 = 1; VAR_12 <= VAR_10; ++VAR_12) {
  VAR_5[VAR_12 + VAR_13 * VAR_7] = *VAR_3;

     }

 }

    } else if (FUNC_2(VAR_0, "L")) {






 VAR_9 = FUNC_0(*VAR_1,*VAR_2);
 for (VAR_13 = 1; VAR_13 <= VAR_9; ++VAR_13) {
     VAR_10 = *VAR_1;
     for (VAR_12 = VAR_13 + 1; VAR_12 <= VAR_10; ++VAR_12) {
  VAR_5[VAR_12 + VAR_13 * VAR_7] = *VAR_3;

     }

 }

    } else {



 VAR_9 = *VAR_2;
 for (VAR_13 = 1; VAR_13 <= VAR_9; ++VAR_13) {
     VAR_10 = *VAR_1;
     for (VAR_12 = 1; VAR_12 <= VAR_10; ++VAR_12) {
  VAR_5[VAR_12 + VAR_13 * VAR_7] = *VAR_3;

     }

 }
    }



    VAR_9 = FUNC_0(*VAR_1,*VAR_2);
    for (VAR_12 = 1; VAR_12 <= VAR_9; ++VAR_12) {
 VAR_5[VAR_12 + VAR_12 * VAR_7] = *VAR_4;

    }

    return 0;



}
