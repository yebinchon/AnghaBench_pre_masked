
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int logical ;
typedef int integer ;
typedef int ftnlen ;
typedef int doublereal ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int*,int*,int *,int*,int *,int *,int *,int *,int *,int*,int *,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_6, integer *VAR_7, doublereal *VAR_8, integer *
 VAR_9, doublereal *VAR_10, doublereal *VAR_11, doublereal *VAR_12, doublereal *
 VAR_13, doublereal *VAR_14, integer *VAR_15, integer *VAR_16)
{

    integer VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;


    static integer VAR_23, VAR_24, VAR_25, VAR_26;
    static doublereal VAR_27;
    extern int FUNC_5(char *, char *, integer *, integer *,
     integer *, doublereal *, doublereal *, integer *, doublereal *,
     integer *, doublereal *, doublereal *, integer *);
    static integer VAR_28, VAR_29, VAR_30;
    extern int FUNC_0(integer *, integer *, doublereal *,
     integer *, doublereal *, doublereal *, doublereal *, doublereal *,
      doublereal *, integer *), FUNC_0(integer *, integer *, integer *
     , doublereal *, integer *, doublereal *, doublereal *, doublereal
     *, doublereal *, doublereal *, integer *, doublereal *, integer *)
     , FUNC_3(char *, integer *);
    extern integer FUNC_6(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static integer VAR_31, VAR_32, VAR_33;
    static logical VAR_34;
    VAR_17 = *VAR_9;
    VAR_18 = 1 + VAR_17;
    VAR_8 -= VAR_18;
    --VAR_10;
    --VAR_11;
    --VAR_12;
    --VAR_13;
    --VAR_14;


    *VAR_16 = 0;

    VAR_19 = 1, VAR_20 = FUNC_6(&VAR_0, "DGEBRD", " ", VAR_6, VAR_7, &VAR_5, &VAR_5, (
     ftnlen)6, (ftnlen)1);
    VAR_25 = FUNC_1(VAR_19,VAR_20);
    VAR_33 = (*VAR_6 + *VAR_7) * VAR_25;
    VAR_14[1] = (doublereal) VAR_33;
    VAR_34 = *VAR_15 == -1;
    if (*VAR_6 < 0) {
 *VAR_16 = -1;
    } else if (*VAR_7 < 0) {
 *VAR_16 = -2;
    } else if (*VAR_9 < FUNC_1(1,*VAR_6)) {
 *VAR_16 = -4;
    } else {

 VAR_19 = FUNC_1(1,*VAR_6);
 if (*VAR_15 < FUNC_1(VAR_19,*VAR_7) && ! VAR_34) {
     *VAR_16 = -10;
 }
    }
    if (*VAR_16 < 0) {
 VAR_19 = -(*VAR_16);
 FUNC_3("DGEBRD", &VAR_19);
 return 0;
    } else if (VAR_34) {
 return 0;
    }



    VAR_30 = FUNC_2(*VAR_6,*VAR_7);
    if (VAR_30 == 0) {
 VAR_14[1] = 1.;
 return 0;
    }

    VAR_27 = (doublereal) FUNC_1(*VAR_6,*VAR_7);
    VAR_31 = *VAR_6;
    VAR_32 = *VAR_7;

    if (VAR_25 > 1 && VAR_25 < VAR_30) {






 VAR_19 = VAR_25, VAR_20 = FUNC_6(&VAR_2, "DGEBRD", " ", VAR_6, VAR_7, &VAR_5, &VAR_5, (
  ftnlen)6, (ftnlen)1);
 VAR_26 = FUNC_1(VAR_19,VAR_20);



 if (VAR_26 < VAR_30) {
     VAR_27 = (doublereal) ((*VAR_6 + *VAR_7) * VAR_25);
     if ((doublereal) (*VAR_15) < VAR_27) {






  VAR_28 = FUNC_6(&VAR_1, "DGEBRD", " ", VAR_6, VAR_7, &VAR_5, &VAR_5, (
   ftnlen)6, (ftnlen)1);
  if (*VAR_15 >= (*VAR_6 + *VAR_7) * VAR_28) {
      VAR_25 = *VAR_15 / (*VAR_6 + *VAR_7);
  } else {
      VAR_25 = 1;
      VAR_26 = VAR_30;
  }
     }
 }
    } else {
 VAR_26 = VAR_30;
    }

    VAR_19 = VAR_30 - VAR_26;
    VAR_20 = VAR_25;
    for (VAR_23 = 1; VAR_20 < 0 ? VAR_23 >= VAR_19 : VAR_23 <= VAR_19; VAR_23 += VAR_20) {







 VAR_21 = *VAR_6 - VAR_23 + 1;
 VAR_22 = *VAR_7 - VAR_23 + 1;
 FUNC_0(&VAR_21, &VAR_22, &VAR_25, &VAR_8[VAR_23 + VAR_23 * VAR_17], VAR_9, &VAR_10[VAR_23], &VAR_11[
  VAR_23], &VAR_12[VAR_23], &VAR_13[VAR_23], &VAR_14[1], &VAR_31, &VAR_14[VAR_31
  * VAR_25 + 1], &VAR_32);






 VAR_21 = *VAR_6 - VAR_23 - VAR_25 + 1;
 VAR_22 = *VAR_7 - VAR_23 - VAR_25 + 1;
 FUNC_5("No transpose", "Transpose", &VAR_21, &VAR_22, &VAR_25, &VAR_4, &VAR_8[
  VAR_23 + VAR_25 + VAR_23 * VAR_17], VAR_9, &VAR_14[VAR_31 * VAR_25 + VAR_25 + 1], &
  VAR_32, &VAR_3, &VAR_8[VAR_23 + VAR_25 + (VAR_23 + VAR_25) * VAR_17], VAR_9);
 VAR_21 = *VAR_6 - VAR_23 - VAR_25 + 1;
 VAR_22 = *VAR_7 - VAR_23 - VAR_25 + 1;
 FUNC_5("No transpose", "No transpose", &VAR_21, &VAR_22, &VAR_25, &VAR_4, &
  VAR_14[VAR_25 + 1], &VAR_31, &VAR_8[VAR_23 + (VAR_23 + VAR_25) * VAR_17], VAR_9, &
  VAR_3, &VAR_8[VAR_23 + VAR_25 + (VAR_23 + VAR_25) * VAR_17], VAR_9);



 if (*VAR_6 >= *VAR_7) {
     VAR_21 = VAR_23 + VAR_25 - 1;
     for (VAR_24 = VAR_23; VAR_24 <= VAR_21; ++VAR_24) {
  VAR_8[VAR_24 + VAR_24 * VAR_17] = VAR_10[VAR_24];
  VAR_8[VAR_24 + (VAR_24 + 1) * VAR_17] = VAR_11[VAR_24];

     }
 } else {
     VAR_21 = VAR_23 + VAR_25 - 1;
     for (VAR_24 = VAR_23; VAR_24 <= VAR_21; ++VAR_24) {
  VAR_8[VAR_24 + VAR_24 * VAR_17] = VAR_10[VAR_24];
  VAR_8[VAR_24 + 1 + VAR_24 * VAR_17] = VAR_11[VAR_24];

     }
 }

    }



    VAR_20 = *VAR_6 - VAR_23 + 1;
    VAR_19 = *VAR_7 - VAR_23 + 1;
    FUNC_0(&VAR_20, &VAR_19, &VAR_8[VAR_23 + VAR_23 * VAR_17], VAR_9, &VAR_10[VAR_23], &VAR_11[VAR_23], &
     VAR_12[VAR_23], &VAR_13[VAR_23], &VAR_14[1], &VAR_29);
    VAR_14[1] = VAR_27;
    return 0;



}
