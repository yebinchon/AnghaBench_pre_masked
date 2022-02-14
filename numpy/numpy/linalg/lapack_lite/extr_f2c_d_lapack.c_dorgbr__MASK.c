
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
 int FUNC_0 (int*,int*,int*,int *,int*,int *,int *,int*,int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(char *VAR_2, integer *VAR_3, integer *VAR_4, integer *VAR_5,
 doublereal *VAR_6, integer *VAR_7, doublereal *VAR_8, doublereal *VAR_9,
 integer *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;


    static integer VAR_17, VAR_18, VAR_19, VAR_20;
    extern logical FUNC_4(char *, char *);
    static integer VAR_21;
    static logical VAR_22;
    extern int FUNC_5(char *, integer *);
    extern integer FUNC_6(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_7(integer *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *,
     integer *), FUNC_0(integer *, integer *, integer *, doublereal *,
      integer *, doublereal *, doublereal *, integer *, integer *);
    static integer VAR_23;
    static logical VAR_24;
    VAR_12 = *VAR_7;
    VAR_13 = 1 + VAR_12;
    VAR_6 -= VAR_13;
    --VAR_8;
    --VAR_9;


    *VAR_11 = 0;
    VAR_22 = FUNC_4(VAR_2, "Q");
    VAR_20 = FUNC_2(*VAR_3,*VAR_4);
    VAR_24 = *VAR_10 == -1;
    if (! VAR_22 && ! FUNC_4(VAR_2, "P")) {
 *VAR_11 = -1;
    } else if (*VAR_3 < 0) {
 *VAR_11 = -2;
    } else if (*VAR_4 < 0 || VAR_22 && (*VAR_4 > *VAR_3 || *VAR_4 < FUNC_2(*VAR_3,*VAR_5)) || ! VAR_22 && (
     *VAR_3 > *VAR_4 || *VAR_3 < FUNC_2(*VAR_4,*VAR_5))) {
 *VAR_11 = -3;
    } else if (*VAR_5 < 0) {
 *VAR_11 = -4;
    } else if (*VAR_7 < FUNC_1(1,*VAR_3)) {
 *VAR_11 = -6;
    } else if (*VAR_10 < FUNC_1(1,VAR_20) && ! VAR_24) {
 *VAR_11 = -9;
    }

    if (*VAR_11 == 0) {
 if (VAR_22) {
     VAR_19 = FUNC_6(&VAR_0, "DORGQR", " ", VAR_3, VAR_4, VAR_5, &VAR_1, (ftnlen)6, (
      ftnlen)1);
 } else {
     VAR_19 = FUNC_6(&VAR_0, "DORGLQ", " ", VAR_3, VAR_4, VAR_5, &VAR_1, (ftnlen)6, (
      ftnlen)1);
 }
 VAR_23 = FUNC_1(1,VAR_20) * VAR_19;
 VAR_9[1] = (doublereal) VAR_23;
    }

    if (*VAR_11 != 0) {
 VAR_14 = -(*VAR_11);
 FUNC_5("DORGBR", &VAR_14);
 return 0;
    } else if (VAR_24) {
 return 0;
    }



    if (*VAR_3 == 0 || *VAR_4 == 0) {
 VAR_9[1] = 1.;
 return 0;
    }

    if (VAR_22) {






 if (*VAR_3 >= *VAR_5) {



     FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_6[VAR_13], VAR_7, &VAR_8[1], &VAR_9[1], VAR_10, &
      VAR_21);

 } else {
     for (VAR_18 = *VAR_3; VAR_18 >= 2; --VAR_18) {
  VAR_6[VAR_18 * VAR_12 + 1] = 0.;
  VAR_14 = *VAR_3;
  for (VAR_17 = VAR_18 + 1; VAR_17 <= VAR_14; ++VAR_17) {
      VAR_6[VAR_17 + VAR_18 * VAR_12] = VAR_6[VAR_17 + (VAR_18 - 1) * VAR_12];

  }

     }
     VAR_6[VAR_12 + 1] = 1.;
     VAR_14 = *VAR_3;
     for (VAR_17 = 2; VAR_17 <= VAR_14; ++VAR_17) {
  VAR_6[VAR_17 + VAR_12] = 0.;

     }
     if (*VAR_3 > 1) {



  VAR_14 = *VAR_3 - 1;
  VAR_15 = *VAR_3 - 1;
  VAR_16 = *VAR_3 - 1;
  FUNC_0(&VAR_14, &VAR_15, &VAR_16, &VAR_6[(VAR_12 << 1) + 2], VAR_7, &VAR_8[
   1], &VAR_9[1], VAR_10, &VAR_21);
     }
 }
    } else {






 if (*VAR_5 < *VAR_4) {



     FUNC_7(VAR_3, VAR_4, VAR_5, &VAR_6[VAR_13], VAR_7, &VAR_8[1], &VAR_9[1], VAR_10, &
      VAR_21);

 } else {
     VAR_6[VAR_12 + 1] = 1.;
     VAR_14 = *VAR_4;
     for (VAR_17 = 2; VAR_17 <= VAR_14; ++VAR_17) {
  VAR_6[VAR_17 + VAR_12] = 0.;

     }
     VAR_14 = *VAR_4;
     for (VAR_18 = 2; VAR_18 <= VAR_14; ++VAR_18) {
  for (VAR_17 = VAR_18 - 1; VAR_17 >= 2; --VAR_17) {
      VAR_6[VAR_17 + VAR_18 * VAR_12] = VAR_6[VAR_17 - 1 + VAR_18 * VAR_12];

  }
  VAR_6[VAR_18 * VAR_12 + 1] = 0.;

     }
     if (*VAR_4 > 1) {



  VAR_14 = *VAR_4 - 1;
  VAR_15 = *VAR_4 - 1;
  VAR_16 = *VAR_4 - 1;
  FUNC_7(&VAR_14, &VAR_15, &VAR_16, &VAR_6[(VAR_12 << 1) + 2], VAR_7, &VAR_8[
   1], &VAR_9[1], VAR_10, &VAR_21);
     }
 }
    }
    VAR_9[1] = (doublereal) VAR_23;
    return 0;



}
