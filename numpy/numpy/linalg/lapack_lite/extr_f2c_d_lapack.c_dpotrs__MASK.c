
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ logical ;
typedef scalar_t__ integer ;
typedef int doublereal ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;

int FUNC_1(char *VAR_1, integer *VAR_2, integer *VAR_3,
 doublereal *VAR_4, integer *VAR_5, doublereal *VAR_6, integer *VAR_7, integer *
 VAR_8)
{

    integer VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


    extern logical FUNC_2(char *, char *);
    extern int FUNC_3(char *, char *, char *, char *,
     integer *, integer *, doublereal *, doublereal *, integer *,
     doublereal *, integer *);
    static logical VAR_14;
    extern int FUNC_4(char *, integer *);
    VAR_9 = *VAR_5;
    VAR_10 = 1 + VAR_9;
    VAR_4 -= VAR_10;
    VAR_11 = *VAR_7;
    VAR_12 = 1 + VAR_11;
    VAR_6 -= VAR_12;


    *VAR_8 = 0;
    VAR_14 = FUNC_2(VAR_1, "U");
    if (! VAR_14 && ! FUNC_2(VAR_1, "L")) {
 *VAR_8 = -1;
    } else if (*VAR_2 < 0) {
 *VAR_8 = -2;
    } else if (*VAR_3 < 0) {
 *VAR_8 = -3;
    } else if (*VAR_5 < FUNC_0(1,*VAR_2)) {
 *VAR_8 = -5;
    } else if (*VAR_7 < FUNC_0(1,*VAR_2)) {
 *VAR_8 = -7;
    }
    if (*VAR_8 != 0) {
 VAR_13 = -(*VAR_8);
 FUNC_4("DPOTRS", &VAR_13);
 return 0;
    }



    if (*VAR_2 == 0 || *VAR_3 == 0) {
 return 0;
    }

    if (VAR_14) {







 FUNC_3("Left", "Upper", "Transpose", "Non-unit", VAR_2, VAR_3, &VAR_0, &VAR_4[
  VAR_10], VAR_5, &VAR_6[VAR_12], VAR_7);



 FUNC_3("Left", "Upper", "No transpose", "Non-unit", VAR_2, VAR_3, &VAR_0, &
  VAR_4[VAR_10], VAR_5, &VAR_6[VAR_12], VAR_7);
    } else {







 FUNC_3("Left", "Lower", "No transpose", "Non-unit", VAR_2, VAR_3, &VAR_0, &
  VAR_4[VAR_10], VAR_5, &VAR_6[VAR_12], VAR_7);



 FUNC_3("Left", "Lower", "Transpose", "Non-unit", VAR_2, VAR_3, &VAR_0, &VAR_4[
  VAR_10], VAR_5, &VAR_6[VAR_12], VAR_7);
    }

    return 0;



}
