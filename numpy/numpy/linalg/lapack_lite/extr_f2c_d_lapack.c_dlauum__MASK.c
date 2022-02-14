
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ logical ;
typedef int integer ;
typedef int ftnlen ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int*,int *,int*,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(char *VAR_3, integer *VAR_4, doublereal *VAR_5, integer *
 VAR_6, integer *VAR_7)
{

    integer VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;


    static integer VAR_14, VAR_15, VAR_16;
    extern int FUNC_5(char *, char *, integer *, integer *,
     integer *, doublereal *, doublereal *, integer *, doublereal *,
     integer *, doublereal *, doublereal *, integer *);
    extern logical FUNC_6(char *, char *);
    extern int FUNC_7(char *, char *, char *, char *,
     integer *, integer *, doublereal *, doublereal *, integer *,
     doublereal *, integer *);
    static logical VAR_17;
    extern int FUNC_8(char *, char *, integer *, integer *,
     doublereal *, doublereal *, integer *, doublereal *, doublereal *,
      integer *), FUNC_0(char *, integer *,
     doublereal *, integer *, integer *), FUNC_3(char *,
     integer *);
    extern integer FUNC_9(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    VAR_8 = *VAR_6;
    VAR_9 = 1 + VAR_8;
    VAR_5 -= VAR_9;


    *VAR_7 = 0;
    VAR_17 = FUNC_6(VAR_3, "U");
    if (! VAR_17 && ! FUNC_6(VAR_3, "L")) {
 *VAR_7 = -1;
    } else if (*VAR_4 < 0) {
 *VAR_7 = -2;
    } else if (*VAR_6 < FUNC_1(1,*VAR_4)) {
 *VAR_7 = -4;
    }
    if (*VAR_7 != 0) {
 VAR_10 = -(*VAR_7);
 FUNC_3("DLAUUM", &VAR_10);
 return 0;
    }



    if (*VAR_4 == 0) {
 return 0;
    }



    VAR_16 = FUNC_9(&VAR_0, "DLAUUM", VAR_3, VAR_4, &VAR_2, &VAR_2, &VAR_2, (ftnlen)6, (
     ftnlen)1);

    if (VAR_16 <= 1 || VAR_16 >= *VAR_4) {



 FUNC_0(VAR_3, VAR_4, &VAR_5[VAR_9], VAR_6, VAR_7);
    } else {



 if (VAR_17) {



     VAR_10 = *VAR_4;
     VAR_11 = VAR_16;
     for (VAR_14 = 1; VAR_11 < 0 ? VAR_14 >= VAR_10 : VAR_14 <= VAR_10; VAR_14 += VAR_11) {

  VAR_12 = VAR_16, VAR_13 = *VAR_4 - VAR_14 + 1;
  VAR_15 = FUNC_2(VAR_12,VAR_13);
  VAR_12 = VAR_14 - 1;
  FUNC_7("Right", "Upper", "Transpose", "Non-unit", &VAR_12, &VAR_15,
   &VAR_1, &VAR_5[VAR_14 + VAR_14 * VAR_8], VAR_6, &VAR_5[VAR_14 * VAR_8
   + 1], VAR_6)
   ;
  FUNC_0("Upper", &VAR_15, &VAR_5[VAR_14 + VAR_14 * VAR_8], VAR_6, VAR_7);
  if (VAR_14 + VAR_15 <= *VAR_4) {
      VAR_12 = VAR_14 - 1;
      VAR_13 = *VAR_4 - VAR_14 - VAR_15 + 1;
      FUNC_5("No transpose", "Transpose", &VAR_12, &VAR_15, &VAR_13, &
       VAR_1, &VAR_5[(VAR_14 + VAR_15) * VAR_8 + 1], VAR_6, &VAR_5[VAR_14 +
       (VAR_14 + VAR_15) * VAR_8], VAR_6, &VAR_1, &VAR_5[VAR_14 *
       VAR_8 + 1], VAR_6);
      VAR_12 = *VAR_4 - VAR_14 - VAR_15 + 1;
      FUNC_8("Upper", "No transpose", &VAR_15, &VAR_12, &VAR_1, &VAR_5[
       VAR_14 + (VAR_14 + VAR_15) * VAR_8], VAR_6, &VAR_1, &VAR_5[VAR_14 +
       VAR_14 * VAR_8], VAR_6);
  }

     }
 } else {



     VAR_11 = *VAR_4;
     VAR_10 = VAR_16;
     for (VAR_14 = 1; VAR_10 < 0 ? VAR_14 >= VAR_11 : VAR_14 <= VAR_11; VAR_14 += VAR_10) {

  VAR_12 = VAR_16, VAR_13 = *VAR_4 - VAR_14 + 1;
  VAR_15 = FUNC_2(VAR_12,VAR_13);
  VAR_12 = VAR_14 - 1;
  FUNC_7("Left", "Lower", "Transpose", "Non-unit", &VAR_15, &VAR_12, &
   VAR_1, &VAR_5[VAR_14 + VAR_14 * VAR_8], VAR_6, &VAR_5[VAR_14 + VAR_8],
   VAR_6);
  FUNC_0("Lower", &VAR_15, &VAR_5[VAR_14 + VAR_14 * VAR_8], VAR_6, VAR_7);
  if (VAR_14 + VAR_15 <= *VAR_4) {
      VAR_12 = VAR_14 - 1;
      VAR_13 = *VAR_4 - VAR_14 - VAR_15 + 1;
      FUNC_5("Transpose", "No transpose", &VAR_15, &VAR_12, &VAR_13, &
       VAR_1, &VAR_5[VAR_14 + VAR_15 + VAR_14 * VAR_8], VAR_6, &VAR_5[VAR_14 +
       VAR_15 + VAR_8], VAR_6, &VAR_1, &VAR_5[VAR_14 + VAR_8], VAR_6);
      VAR_12 = *VAR_4 - VAR_14 - VAR_15 + 1;
      FUNC_8("Lower", "Transpose", &VAR_15, &VAR_12, &VAR_1, &VAR_5[VAR_14 +
       VAR_15 + VAR_14 * VAR_8], VAR_6, &VAR_1, &VAR_5[VAR_14 + VAR_14 *
       VAR_8], VAR_6);
  }

     }
 }
    }

    return 0;



}
