
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int logical ;
typedef int integer ;
typedef int ftnlen ;
typedef void* doublereal ;
struct TYPE_5__ {int r; int i; } ;
typedef TYPE_1__ doublecomplex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(integer *VAR_4, integer *VAR_5, integer *VAR_6,
 doublecomplex *VAR_7, integer *VAR_8, doublecomplex *VAR_9, doublecomplex *
 VAR_10, integer *VAR_11, integer *VAR_12)
{

    integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;


    static integer VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29;
    extern int FUNC_4(integer *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *), FUNC_2(char *, integer *);
    extern integer FUNC_5(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_6(char *, char *, char *, char *,
     integer *, integer *, integer *, doublecomplex *, integer *,
     doublecomplex *, integer *, doublecomplex *, integer *,
     doublecomplex *, integer *);
    static integer VAR_30;
    extern int FUNC_7(char *, char *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *);
    static integer VAR_31;
    static logical VAR_32;
    VAR_13 = *VAR_8;
    VAR_14 = 1 + VAR_13;
    VAR_7 -= VAR_14;
    --VAR_9;
    --VAR_10;


    *VAR_12 = 0;
    VAR_23 = FUNC_5(&VAR_0, "ZUNGQR", " ", VAR_4, VAR_5, VAR_6, &VAR_3, (ftnlen)6, (ftnlen)1);
    VAR_31 = FUNC_0(1,*VAR_5) * VAR_23;
    VAR_10[1].r = (doublereal) VAR_31, VAR_10[1].i = 0.;
    VAR_32 = *VAR_11 == -1;
    if (*VAR_4 < 0) {
 *VAR_12 = -1;
    } else if (*VAR_5 < 0 || *VAR_5 > *VAR_4) {
 *VAR_12 = -2;
    } else if (*VAR_6 < 0 || *VAR_6 > *VAR_5) {
 *VAR_12 = -3;
    } else if (*VAR_8 < FUNC_0(1,*VAR_4)) {
 *VAR_12 = -5;
    } else if (*VAR_11 < FUNC_0(1,*VAR_5) && ! VAR_32) {
 *VAR_12 = -8;
    }
    if (*VAR_12 != 0) {
 VAR_15 = -(*VAR_12);
 FUNC_2("ZUNGQR", &VAR_15);
 return 0;
    } else if (VAR_32) {
 return 0;
    }



    if (*VAR_5 <= 0) {
 VAR_10[1].r = 1., VAR_10[1].i = 0.;
 return 0;
    }

    VAR_28 = 2;
    VAR_26 = 0;
    VAR_27 = *VAR_5;
    if (VAR_23 > 1 && VAR_23 < *VAR_6) {






 VAR_15 = 0, VAR_16 = FUNC_5(&VAR_2, "ZUNGQR", " ", VAR_4, VAR_5, VAR_6, &VAR_3, (
  ftnlen)6, (ftnlen)1);
 VAR_26 = FUNC_0(VAR_15,VAR_16);
 if (VAR_26 < *VAR_6) {



     VAR_30 = *VAR_5;
     VAR_27 = VAR_30 * VAR_23;
     if (*VAR_11 < VAR_27) {






  VAR_23 = *VAR_11 / VAR_30;

  VAR_15 = 2, VAR_16 = FUNC_5(&VAR_1, "ZUNGQR", " ", VAR_4, VAR_5, VAR_6, &VAR_3,
    (ftnlen)6, (ftnlen)1);
  VAR_28 = FUNC_0(VAR_15,VAR_16);
     }
 }
    }

    if (VAR_23 >= VAR_28 && VAR_23 < *VAR_6 && VAR_26 < *VAR_6) {






 VAR_24 = (*VAR_6 - VAR_26 - 1) / VAR_23 * VAR_23;

 VAR_15 = *VAR_6, VAR_16 = VAR_24 + VAR_23;
 VAR_25 = FUNC_1(VAR_15,VAR_16);



 VAR_15 = *VAR_5;
 for (VAR_20 = VAR_25 + 1; VAR_20 <= VAR_15; ++VAR_20) {
     VAR_16 = VAR_25;
     for (VAR_19 = 1; VAR_19 <= VAR_16; ++VAR_19) {
  VAR_17 = VAR_19 + VAR_20 * VAR_13;
  VAR_7[VAR_17].r = 0., VAR_7[VAR_17].i = 0.;

     }

 }
    } else {
 VAR_25 = 0;
    }



    if (VAR_25 < *VAR_5) {
 VAR_15 = *VAR_4 - VAR_25;
 VAR_16 = *VAR_5 - VAR_25;
 VAR_17 = *VAR_6 - VAR_25;
 FUNC_4(&VAR_15, &VAR_16, &VAR_17, &VAR_7[VAR_25 + 1 + (VAR_25 + 1) * VAR_13], VAR_8, &
  VAR_9[VAR_25 + 1], &VAR_10[1], &VAR_29);
    }

    if (VAR_25 > 0) {



 VAR_15 = -VAR_23;
 for (VAR_19 = VAR_24 + 1; VAR_15 < 0 ? VAR_19 >= 1 : VAR_19 <= 1; VAR_19 += VAR_15) {

     VAR_16 = VAR_23, VAR_17 = *VAR_6 - VAR_19 + 1;
     VAR_22 = FUNC_1(VAR_16,VAR_17);
     if (VAR_19 + VAR_22 <= *VAR_5) {






  VAR_16 = *VAR_4 - VAR_19 + 1;
  FUNC_7("Forward", "Columnwise", &VAR_16, &VAR_22, &VAR_7[VAR_19 + VAR_19 *
   VAR_13], VAR_8, &VAR_9[VAR_19], &VAR_10[1], &VAR_30);



  VAR_16 = *VAR_4 - VAR_19 + 1;
  VAR_17 = *VAR_5 - VAR_19 - VAR_22 + 1;
  FUNC_6("Left", "No transpose", "Forward", "Columnwise", &
   VAR_16, &VAR_17, &VAR_22, &VAR_7[VAR_19 + VAR_19 * VAR_13], VAR_8, &VAR_10[
   1], &VAR_30, &VAR_7[VAR_19 + (VAR_19 + VAR_22) * VAR_13], VAR_8, &
   VAR_10[VAR_22 + 1], &VAR_30);
     }



     VAR_16 = *VAR_4 - VAR_19 + 1;
     FUNC_4(&VAR_16, &VAR_22, &VAR_22, &VAR_7[VAR_19 + VAR_19 * VAR_13], VAR_8, &VAR_9[VAR_19], &
      VAR_10[1], &VAR_29);



     VAR_16 = VAR_19 + VAR_22 - 1;
     for (VAR_20 = VAR_19; VAR_20 <= VAR_16; ++VAR_20) {
  VAR_17 = VAR_19 - 1;
  for (VAR_21 = 1; VAR_21 <= VAR_17; ++VAR_21) {
      VAR_18 = VAR_21 + VAR_20 * VAR_13;
      VAR_7[VAR_18].r = 0., VAR_7[VAR_18].i = 0.;

  }

     }

 }
    }

    VAR_10[1].r = (doublereal) VAR_27, VAR_10[1].i = 0.;
    return 0;



}
