
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
 int FUNC_0 (char*,char*,char*,char*,int*,int*,int*,int *,int*,int *,int*,int *,int*,int *,int*) ;
 int FUNC_1 (char*,char*,int*,int*,int *,int*,int *,int *,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char*,int*) ;

int FUNC_5(integer *VAR_4, integer *VAR_5, doublereal *VAR_6, integer *
 VAR_7, doublereal *VAR_8, doublereal *VAR_9, integer *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    extern int FUNC_6(integer *, integer *, doublereal *,
     integer *, doublereal *, doublereal *, integer *), FUNC_0(char *,
      char *, char *, char *, integer *, integer *, integer *,
     doublereal *, integer *, doublereal *, integer *, doublereal *,
     integer *, doublereal *, integer *), FUNC_1(char *, char *, integer *, integer *, doublereal
     *, integer *, doublereal *, doublereal *, integer *), FUNC_4(char *, integer *);
    extern integer FUNC_7(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    static integer VAR_26, VAR_27;
    static logical VAR_28;
    VAR_12 = *VAR_7;
    VAR_13 = 1 + VAR_12;
    VAR_6 -= VAR_13;
    --VAR_8;
    --VAR_9;


    *VAR_11 = 0;
    VAR_21 = FUNC_7(&VAR_0, "DGELQF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (ftnlen)6, (ftnlen)
     1);
    VAR_27 = *VAR_4 * VAR_21;
    VAR_9[1] = (doublereal) VAR_27;
    VAR_28 = *VAR_10 == -1;
    if (*VAR_4 < 0) {
 *VAR_11 = -1;
    } else if (*VAR_5 < 0) {
 *VAR_11 = -2;
    } else if (*VAR_7 < FUNC_2(1,*VAR_4)) {
 *VAR_11 = -4;
    } else if (*VAR_10 < FUNC_2(1,*VAR_4) && ! VAR_28) {
 *VAR_11 = -7;
    }
    if (*VAR_11 != 0) {
 VAR_14 = -(*VAR_11);
 FUNC_4("DGELQF", &VAR_14);
 return 0;
    } else if (VAR_28) {
 return 0;
    }



    VAR_19 = FUNC_3(*VAR_4,*VAR_5);
    if (VAR_19 == 0) {
 VAR_9[1] = 1.;
 return 0;
    }

    VAR_24 = 2;
    VAR_22 = 0;
    VAR_23 = *VAR_4;
    if (VAR_21 > 1 && VAR_21 < VAR_19) {






 VAR_14 = 0, VAR_15 = FUNC_7(&VAR_2, "DGELQF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (
  ftnlen)6, (ftnlen)1);
 VAR_22 = FUNC_2(VAR_14,VAR_15);
 if (VAR_22 < VAR_19) {



     VAR_26 = *VAR_4;
     VAR_23 = VAR_26 * VAR_21;
     if (*VAR_10 < VAR_23) {






  VAR_21 = *VAR_10 / VAR_26;

  VAR_14 = 2, VAR_15 = FUNC_7(&VAR_1, "DGELQF", " ", VAR_4, VAR_5, &VAR_3, &
   VAR_3, (ftnlen)6, (ftnlen)1);
  VAR_24 = FUNC_2(VAR_14,VAR_15);
     }
 }
    }

    if (VAR_21 >= VAR_24 && VAR_21 < VAR_19 && VAR_22 < VAR_19) {



 VAR_14 = VAR_19 - VAR_22;
 VAR_15 = VAR_21;
 for (VAR_18 = 1; VAR_15 < 0 ? VAR_18 >= VAR_14 : VAR_18 <= VAR_14; VAR_18 += VAR_15) {

     VAR_16 = VAR_19 - VAR_18 + 1;
     VAR_20 = FUNC_3(VAR_16,VAR_21);






     VAR_16 = *VAR_5 - VAR_18 + 1;
     FUNC_6(&VAR_20, &VAR_16, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[
      1], &VAR_25);
     if (VAR_18 + VAR_20 <= *VAR_4) {






  VAR_16 = *VAR_5 - VAR_18 + 1;
  FUNC_1("Forward", "Rowwise", &VAR_16, &VAR_20, &VAR_6[VAR_18 + VAR_18 *
   VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[1], &VAR_26);



  VAR_16 = *VAR_4 - VAR_18 - VAR_20 + 1;
  VAR_17 = *VAR_5 - VAR_18 + 1;
  FUNC_0("Right", "No transpose", "Forward", "Rowwise", &VAR_16,
   &VAR_17, &VAR_20, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_9[1], &
   VAR_26, &VAR_6[VAR_18 + VAR_20 + VAR_18 * VAR_12], VAR_7, &VAR_9[VAR_20 +
   1], &VAR_26);
     }

 }
    } else {
 VAR_18 = 1;
    }



    if (VAR_18 <= VAR_19) {
 VAR_15 = *VAR_4 - VAR_18 + 1;
 VAR_14 = *VAR_5 - VAR_18 + 1;
 FUNC_6(&VAR_15, &VAR_14, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[1]
  , &VAR_25);
    }

    VAR_9[1] = (doublereal) VAR_23;
    return 0;



}
