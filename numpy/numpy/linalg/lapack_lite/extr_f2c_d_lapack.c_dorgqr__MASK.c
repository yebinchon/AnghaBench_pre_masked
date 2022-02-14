
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
 int FUNC_0 (char*,char*,char*,char*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_1 (char*,char*,int*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(integer *VAR_4, integer *VAR_5, integer *VAR_6, doublereal *
 VAR_7, integer *VAR_8, doublereal *VAR_9, doublereal *VAR_10, integer *VAR_11,
 integer *VAR_12)
{

    integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    extern int FUNC_6(integer *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *),
     FUNC_0(char *, char *, char *, char *, integer *, integer *,
     integer *, doublereal *, integer *, doublereal *, integer *,
     doublereal *, integer *, doublereal *, integer *), FUNC_1(char *, char *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *), FUNC_4(char *, integer *);
    extern integer FUNC_7(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static integer VAR_29, VAR_30;
    static logical VAR_31;
    VAR_13 = *VAR_8;
    VAR_14 = 1 + VAR_13;
    VAR_7 -= VAR_14;
    --VAR_9;
    --VAR_10;


    *VAR_12 = 0;
    VAR_22 = FUNC_7(&VAR_0, "DORGQR", " ", VAR_4, VAR_5, VAR_6, &VAR_3, (ftnlen)6, (ftnlen)1);
    VAR_30 = FUNC_2(1,*VAR_5) * VAR_22;
    VAR_10[1] = (doublereal) VAR_30;
    VAR_31 = *VAR_11 == -1;
    if (*VAR_4 < 0) {
 *VAR_12 = -1;
    } else if (*VAR_5 < 0 || *VAR_5 > *VAR_4) {
 *VAR_12 = -2;
    } else if (*VAR_6 < 0 || *VAR_6 > *VAR_5) {
 *VAR_12 = -3;
    } else if (*VAR_8 < FUNC_2(1,*VAR_4)) {
 *VAR_12 = -5;
    } else if (*VAR_11 < FUNC_2(1,*VAR_5) && ! VAR_31) {
 *VAR_12 = -8;
    }
    if (*VAR_12 != 0) {
 VAR_15 = -(*VAR_12);
 FUNC_4("DORGQR", &VAR_15);
 return 0;
    } else if (VAR_31) {
 return 0;
    }



    if (*VAR_5 <= 0) {
 VAR_10[1] = 1.;
 return 0;
    }

    VAR_27 = 2;
    VAR_25 = 0;
    VAR_26 = *VAR_5;
    if (VAR_22 > 1 && VAR_22 < *VAR_6) {






 VAR_15 = 0, VAR_16 = FUNC_7(&VAR_2, "DORGQR", " ", VAR_4, VAR_5, VAR_6, &VAR_3, (
  ftnlen)6, (ftnlen)1);
 VAR_25 = FUNC_2(VAR_15,VAR_16);
 if (VAR_25 < *VAR_6) {



     VAR_29 = *VAR_5;
     VAR_26 = VAR_29 * VAR_22;
     if (*VAR_11 < VAR_26) {






  VAR_22 = *VAR_11 / VAR_29;

  VAR_15 = 2, VAR_16 = FUNC_7(&VAR_1, "DORGQR", " ", VAR_4, VAR_5, VAR_6, &VAR_3,
    (ftnlen)6, (ftnlen)1);
  VAR_27 = FUNC_2(VAR_15,VAR_16);
     }
 }
    }

    if (VAR_22 >= VAR_27 && VAR_22 < *VAR_6 && VAR_25 < *VAR_6) {






 VAR_23 = (*VAR_6 - VAR_25 - 1) / VAR_22 * VAR_22;

 VAR_15 = *VAR_6, VAR_16 = VAR_23 + VAR_22;
 VAR_24 = FUNC_3(VAR_15,VAR_16);



 VAR_15 = *VAR_5;
 for (VAR_19 = VAR_24 + 1; VAR_19 <= VAR_15; ++VAR_19) {
     VAR_16 = VAR_24;
     for (VAR_18 = 1; VAR_18 <= VAR_16; ++VAR_18) {
  VAR_7[VAR_18 + VAR_19 * VAR_13] = 0.;

     }

 }
    } else {
 VAR_24 = 0;
    }



    if (VAR_24 < *VAR_5) {
 VAR_15 = *VAR_4 - VAR_24;
 VAR_16 = *VAR_5 - VAR_24;
 VAR_17 = *VAR_6 - VAR_24;
 FUNC_6(&VAR_15, &VAR_16, &VAR_17, &VAR_7[VAR_24 + 1 + (VAR_24 + 1) * VAR_13], VAR_8, &
  VAR_9[VAR_24 + 1], &VAR_10[1], &VAR_28);
    }

    if (VAR_24 > 0) {



 VAR_15 = -VAR_22;
 for (VAR_18 = VAR_23 + 1; VAR_15 < 0 ? VAR_18 >= 1 : VAR_18 <= 1; VAR_18 += VAR_15) {

     VAR_16 = VAR_22, VAR_17 = *VAR_6 - VAR_18 + 1;
     VAR_21 = FUNC_3(VAR_16,VAR_17);
     if (VAR_18 + VAR_21 <= *VAR_5) {






  VAR_16 = *VAR_4 - VAR_18 + 1;
  FUNC_1("Forward", "Columnwise", &VAR_16, &VAR_21, &VAR_7[VAR_18 + VAR_18 *
   VAR_13], VAR_8, &VAR_9[VAR_18], &VAR_10[1], &VAR_29);



  VAR_16 = *VAR_4 - VAR_18 + 1;
  VAR_17 = *VAR_5 - VAR_18 - VAR_21 + 1;
  FUNC_0("Left", "No transpose", "Forward", "Columnwise", &
   VAR_16, &VAR_17, &VAR_21, &VAR_7[VAR_18 + VAR_18 * VAR_13], VAR_8, &VAR_10[
   1], &VAR_29, &VAR_7[VAR_18 + (VAR_18 + VAR_21) * VAR_13], VAR_8, &
   VAR_10[VAR_21 + 1], &VAR_29);
     }



     VAR_16 = *VAR_4 - VAR_18 + 1;
     FUNC_6(&VAR_16, &VAR_21, &VAR_21, &VAR_7[VAR_18 + VAR_18 * VAR_13], VAR_8, &VAR_9[VAR_18], &
      VAR_10[1], &VAR_28);



     VAR_16 = VAR_18 + VAR_21 - 1;
     for (VAR_19 = VAR_18; VAR_19 <= VAR_16; ++VAR_19) {
  VAR_17 = VAR_18 - 1;
  for (VAR_20 = 1; VAR_20 <= VAR_17; ++VAR_20) {
      VAR_7[VAR_20 + VAR_19 * VAR_13] = 0.;

  }

     }

 }
    }

    VAR_10[1] = (doublereal) VAR_26;
    return 0;



}
