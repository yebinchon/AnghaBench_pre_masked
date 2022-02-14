
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int logical ;
typedef int integer ;
typedef int ftnlen ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char*,char*,char*,int*,int*,int*,int *,int*,int *,int*,int *,int*,int *,int*) ;
 int FUNC_3 (char*,int*) ;

int FUNC_4(integer *VAR_4, integer *VAR_5, real *VAR_6, integer *VAR_7,
 real *VAR_8, real *VAR_9, integer *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;
    extern int FUNC_5(integer *, integer *, real *, integer
     *, real *, real *, integer *), FUNC_2(char *, char *, char *,
     char *, integer *, integer *, integer *, real *, integer *, real *
     , integer *, real *, integer *, real *, integer *), FUNC_3(char *, integer *);
    extern integer FUNC_6(integer *, char *, char *, integer *, integer *,
     integer *, integer *, ftnlen, ftnlen);
    extern int FUNC_7(char *, char *, integer *, integer *,
     real *, integer *, real *, real *, integer *);
    static integer VAR_26, VAR_27;
    static logical VAR_28;
    VAR_12 = *VAR_7;
    VAR_13 = 1 + VAR_12;
    VAR_6 -= VAR_13;
    --VAR_8;
    --VAR_9;


    *VAR_11 = 0;
    VAR_21 = FUNC_6(&VAR_0, "SGEQRF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (ftnlen)6, (ftnlen)
     1);
    VAR_27 = *VAR_5 * VAR_21;
    VAR_9[1] = (real) VAR_27;
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
 FUNC_3("SGEQRF", &VAR_14);
 return 0;
    } else if (VAR_28) {
 return 0;
    }



    VAR_19 = FUNC_1(*VAR_4,*VAR_5);
    if (VAR_19 == 0) {
 VAR_9[1] = 1.f;
 return 0;
    }

    VAR_24 = 2;
    VAR_22 = 0;
    VAR_23 = *VAR_5;
    if (VAR_21 > 1 && VAR_21 < VAR_19) {






 VAR_14 = 0, VAR_15 = FUNC_6(&VAR_2, "SGEQRF", " ", VAR_4, VAR_5, &VAR_3, &VAR_3, (
  ftnlen)6, (ftnlen)1);
 VAR_22 = FUNC_0(VAR_14,VAR_15);
 if (VAR_22 < VAR_19) {



     VAR_26 = *VAR_5;
     VAR_23 = VAR_26 * VAR_21;
     if (*VAR_10 < VAR_23) {






  VAR_21 = *VAR_10 / VAR_26;

  VAR_14 = 2, VAR_15 = FUNC_6(&VAR_1, "SGEQRF", " ", VAR_4, VAR_5, &VAR_3, &
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
     FUNC_5(&VAR_16, &VAR_20, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[
      1], &VAR_25);
     if (VAR_18 + VAR_20 <= *VAR_5) {






  VAR_16 = *VAR_4 - VAR_18 + 1;
  FUNC_7("Forward", "Columnwise", &VAR_16, &VAR_20, &VAR_6[VAR_18 + VAR_18 *
   VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[1], &VAR_26);



  VAR_16 = *VAR_4 - VAR_18 + 1;
  VAR_17 = *VAR_5 - VAR_18 - VAR_20 + 1;
  FUNC_2("Left", "Transpose", "Forward", "Columnwise", &VAR_16, &
   VAR_17, &VAR_20, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_9[1], &
   VAR_26, &VAR_6[VAR_18 + (VAR_18 + VAR_20) * VAR_12], VAR_7, &VAR_9[VAR_20
   + 1], &VAR_26);
     }

 }
    } else {
 VAR_18 = 1;
    }



    if (VAR_18 <= VAR_19) {
 VAR_15 = *VAR_4 - VAR_18 + 1;
 VAR_14 = *VAR_5 - VAR_18 + 1;
 FUNC_5(&VAR_15, &VAR_14, &VAR_6[VAR_18 + VAR_18 * VAR_12], VAR_7, &VAR_8[VAR_18], &VAR_9[1]
  , &VAR_25);
    }

    VAR_9[1] = (real) VAR_23;
    return 0;



}
