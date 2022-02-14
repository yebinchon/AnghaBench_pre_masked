
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef size_t integer ;
typedef int doublereal ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

doublereal FUNC_3(char *VAR_1, integer *VAR_2, doublereal *VAR_3, doublereal *VAR_4)
{

    integer VAR_5;
    doublereal VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;


    static integer VAR_12;
    static doublereal VAR_13, VAR_14;
    extern logical FUNC_4(char *, char *);
    static doublereal VAR_15;
    extern int FUNC_5(integer *, doublereal *, integer *,
     doublereal *, doublereal *);
    --VAR_4;
    --VAR_3;


    if (*VAR_2 <= 0) {
 VAR_15 = 0.;
    } else if (FUNC_4(VAR_1, "M")) {



 VAR_15 = (VAR_7 = VAR_3[*VAR_2], FUNC_0(VAR_7));
 VAR_5 = *VAR_2 - 1;
 for (VAR_12 = 1; VAR_12 <= VAR_5; ++VAR_12) {

     VAR_8 = VAR_15, VAR_9 = (VAR_7 = VAR_3[VAR_12], FUNC_0(VAR_7));
     VAR_15 = FUNC_1(VAR_8,VAR_9);

     VAR_8 = VAR_15, VAR_9 = (VAR_7 = VAR_4[VAR_12], FUNC_0(VAR_7));
     VAR_15 = FUNC_1(VAR_8,VAR_9);

 }
    } else if (FUNC_4(VAR_1, "O") || *(unsigned char *)
     VAR_1 == '1' || FUNC_4(VAR_1, "I")) {



 if (*VAR_2 == 1) {
     VAR_15 = FUNC_0(VAR_3[1]);
 } else {

     VAR_9 = FUNC_0(VAR_3[1]) + FUNC_0(VAR_4[1]), VAR_10 = (VAR_7 = VAR_4[*VAR_2 - 1], FUNC_0(
      VAR_7)) + (VAR_8 = VAR_3[*VAR_2], FUNC_0(VAR_8));
     VAR_15 = FUNC_1(VAR_9,VAR_10);
     VAR_5 = *VAR_2 - 1;
     for (VAR_12 = 2; VAR_12 <= VAR_5; ++VAR_12) {

  VAR_10 = VAR_15, VAR_11 = (VAR_7 = VAR_3[VAR_12], FUNC_0(VAR_7)) + (VAR_8 = VAR_4[
   VAR_12], FUNC_0(VAR_8)) + (VAR_9 = VAR_4[VAR_12 - 1], FUNC_0(VAR_9));
  VAR_15 = FUNC_1(VAR_10,VAR_11);

     }
 }
    } else if (FUNC_4(VAR_1, "F") || FUNC_4(VAR_1, "E")) {



 VAR_14 = 0.;
 VAR_13 = 1.;
 if (*VAR_2 > 1) {
     VAR_5 = *VAR_2 - 1;
     FUNC_5(&VAR_5, &VAR_4[1], &VAR_0, &VAR_14, &VAR_13);
     VAR_13 *= 2;
 }
 FUNC_5(VAR_2, &VAR_3[1], &VAR_0, &VAR_14, &VAR_13);
 VAR_15 = VAR_14 * FUNC_2(VAR_13);
    }

    VAR_6 = VAR_15;
    return VAR_6;



}
