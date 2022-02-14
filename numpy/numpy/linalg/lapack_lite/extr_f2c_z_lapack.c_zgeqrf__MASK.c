
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

int FUNC_3(integer *VAR_4, integer *VAR_5, doublecomplex *VAR_6,
 integer *VAR_7, doublecomplex *VAR_8, doublecomplex *VAR_9, integer *VAR_10,
  integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    extern int FUNC_4(integer *, integer *, doublecomplex *,
      integer *, doublecomplex *, doublecomplex *, integer *), FUNC_2(
     char *, integer *);
    extern integer FUNC_5(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_6(char *, char *, char *, char *,
     integer *, integer *, integer *, doublecomplex *, integer *,
     doublecomplex *, integer *, doublecomplex *, integer *,
     doublecomplex *, integer *);
    static integer VAR_26;
    extern int FUNC_7(char *, char *, integer *, integer *,
     doublecomplex *, integer *, doublecomplex *, doublecomplex *,
     integer *);
    static integer VAR_27;
    static logical VAR_28;
    VAR_12 = *VAR_7;
    VAR_13 = 1 + VAR_12;
    VAR_6 -= VAR_13;
    --VAR_8;
    --VAR_9;


    *VAR_11 = 0;
    VAR_21 = FUNC_5(&VAR_0, "ZGEQRF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (ftnlen)6, (ftnlen)
     1);
    VAR_27 = *VAR_5 * VAR_21;
    VAR_9[1].r = (doublereal) VAR_27, VAR_9[1].i = 0.;
    VAR_28 = *VAR_10 == -1;
    if (*VAR_4 < 0) {
 *VAR_11 = -1;
    } else if (*VAR_5 < 0) {
 *VAR_11 = -2;
    } else if (*VAR_7 < FUNC_0(1,*VAR_4)) {
 *VAR_11 = -4;
    } else if (*VAR_10 < FUNC_0(1,*VAR_5) && ! VAR_28) {
 *VAR_11 = -7;
    }
    if (*VAR_11 != 0) {
 VAR_14 = -(*VAR_11);
 FUNC_2("ZGEQRF", &VAR_14);
 return 0;
    } else if (VAR_28) {
 return 0;
    }



    VAR_19 = FUNC_1(*VAR_4,*VAR_5);
    if (VAR_19 == 0) {
 VAR_9[1].r = 1., VAR_9[1].i = 0.;
 return 0;
    }

    VAR_24 = 2;
    VAR_22 = 0;
    VAR_23 = *VAR_5;
    if (VAR_21 > 1 && VAR_21 < VAR_19) {






 VAR_14 = 0, VAR_15 = FUNC_5(&VAR_2, "ZGEQRF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (
  ftnlen)6, (ftnlen)1);
 VAR_22 = FUNC_0(VAR_14,VAR_15);
 if (VAR_22 < VAR_19) {



     VAR_26 = *VAR_5;
     VAR_23 = VAR_26 * VAR_21;
     if (*VAR_10 < VAR_23) {






  VAR_21 = *VAR_10 / VAR_26;

  VAR_14 = 2, VAR_15 = FUNC_5(&VAR_1, "ZGEQRF", " ", VAR_4, VAR_5, &VAR_3, &
   VAR_3, (ftnlen)6, (ftnlen)1);
  VAR_24 = FUNC_0(VAR_14,VAR_15);
     }
 }
    }

    if (VAR_21 >= VAR_24 && VAR_21 < VAR_19 && VAR_22 < VAR_19) {



 VAR_14 = VAR_19 - VAR_22;
 VAR_15 = VAR_21;
 for (VAR_18 = 1; VAR_15 < 0 ? VAR_18 >= VAR_14 : VAR_18 <= VAR_14; VAR_18 += VAR_15) {

     VAR_16 = VAR_19 - VAR_18 + 1;
     VAR_20 = FUNC_1(VAR_16,VAR_21);






     VAR_16 = *VAR_4 - VAR_18 + 1;
     FUNC_4(&VAR_16, &VAR_20, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[
      1], &VAR_25);
     if (VAR_18 + VAR_20 <= *VAR_5) {






  VAR_16 = *VAR_4 - VAR_18 + 1;
  FUNC_7("Forward", "Columnwise", &VAR_16, &VAR_20, &VAR_6[VAR_18 + VAR_18 *
   VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[1], &VAR_26);



  VAR_16 = *VAR_4 - VAR_18 + 1;
  VAR_17 = *VAR_5 - VAR_18 - VAR_20 + 1;
  FUNC_6("Left", "Conjugate transpose", "Forward", "Columnwise"
   , &VAR_16, &VAR_17, &VAR_20, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &
   VAR_9[1], &VAR_26, &VAR_6[VAR_18 + (VAR_18 + VAR_20) * VAR_12], VAR_7,
   &VAR_9[VAR_20 + 1], &VAR_26);
     }

 }
    } else {
 VAR_18 = 1;
    }



    if (VAR_18 <= VAR_19) {
 VAR_15 = *VAR_4 - VAR_18 + 1;
 VAR_14 = *VAR_5 - VAR_18 + 1;
 FUNC_4(&VAR_15, &VAR_14, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[1]
  , &VAR_25);
    }

    VAR_9[1].r = (doublereal) VAR_23, VAR_9[1].i = 0.;
    return 0;



}
