
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef void* logical ;
typedef int integer ;
typedef float doublereal ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;

int FUNC_3(char *VAR_2, integer *VAR_3, integer *VAR_4, real *
 VAR_5, real *VAR_6, integer *VAR_7, integer *VAR_8, real *VAR_9, integer *VAR_10,
 integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;


    static integer VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
    static real VAR_25, VAR_26;
    static logical VAR_27;
    static real VAR_28;
    extern logical FUNC_4(char *, char *);
    static integer VAR_29;
    static real VAR_30;
    extern doublereal FUNC_5(char *);
    static real VAR_31;
    extern int FUNC_6(char *, integer *);
    static real VAR_32;
    extern logical FUNC_7(real *);
    static real VAR_33;
    VAR_12 = *VAR_10;
    VAR_13 = 1 + VAR_12;
    VAR_9 -= VAR_13;


    *VAR_11 = 0;

    if (FUNC_4(VAR_2, "G")) {
 VAR_29 = 0;
    } else if (FUNC_4(VAR_2, "L")) {
 VAR_29 = 1;
    } else if (FUNC_4(VAR_2, "U")) {
 VAR_29 = 2;
    } else if (FUNC_4(VAR_2, "H")) {
 VAR_29 = 3;
    } else if (FUNC_4(VAR_2, "B")) {
 VAR_29 = 4;
    } else if (FUNC_4(VAR_2, "Q")) {
 VAR_29 = 5;
    } else if (FUNC_4(VAR_2, "Z")) {
 VAR_29 = 6;
    } else {
 VAR_29 = -1;
    }

    if (VAR_29 == -1) {
 *VAR_11 = -1;
    } else if (*VAR_5 == 0.f || FUNC_7(VAR_5)) {
 *VAR_11 = -4;
    } else if (FUNC_7(VAR_6)) {
 *VAR_11 = -5;
    } else if (*VAR_7 < 0) {
 *VAR_11 = -6;
    } else if (*VAR_8 < 0 || VAR_29 == 4 && *VAR_8 != *VAR_7 || VAR_29 == 5 && *VAR_8 != *VAR_7) {
 *VAR_11 = -7;
    } else if (VAR_29 <= 3 && *VAR_10 < FUNC_1(1,*VAR_7)) {
 *VAR_11 = -9;
    } else if (VAR_29 >= 4) {

 VAR_14 = *VAR_7 - 1;
 if (*VAR_3 < 0 || *VAR_3 > FUNC_1(VAR_14,0)) {
     *VAR_11 = -2;
 } else {

     VAR_14 = *VAR_8 - 1;
     if (*VAR_4 < 0 || *VAR_4 > FUNC_1(VAR_14,0) || (VAR_29 == 4 || VAR_29 == 5) &&
      *VAR_3 != *VAR_4) {
  *VAR_11 = -3;
     } else if (VAR_29 == 4 && *VAR_10 < *VAR_3 + 1 || VAR_29 == 5 && *VAR_10 < *
      VAR_4 + 1 || VAR_29 == 6 && *VAR_10 < (*VAR_3 << 1) + *VAR_4 + 1) {
  *VAR_11 = -9;
     }
 }
    }

    if (*VAR_11 != 0) {
 VAR_14 = -(*VAR_11);
 FUNC_6("SLASCL", &VAR_14);
 return 0;
    }



    if (*VAR_8 == 0 || *VAR_7 == 0) {
 return 0;
    }



    VAR_33 = FUNC_5("S");
    VAR_32 = 1.f / VAR_33;

    VAR_31 = *VAR_5;
    VAR_28 = *VAR_6;

L10:
    VAR_30 = VAR_31 * VAR_33;
    if (VAR_30 == VAR_31) {




 VAR_25 = VAR_28 / VAR_31;
 VAR_27 = VAR_1;
 VAR_26 = VAR_28;
    } else {
 VAR_26 = VAR_28 / VAR_32;
 if (VAR_26 == VAR_28) {




     VAR_25 = VAR_28;
     VAR_27 = VAR_1;
     VAR_31 = 1.f;
 } else if (FUNC_0(VAR_30) > FUNC_0(VAR_28) && VAR_28 != 0.f) {
     VAR_25 = VAR_33;
     VAR_27 = VAR_0;
     VAR_31 = VAR_30;
 } else if (FUNC_0(VAR_26) > FUNC_0(VAR_31)) {
     VAR_25 = VAR_32;
     VAR_27 = VAR_0;
     VAR_28 = VAR_26;
 } else {
     VAR_25 = VAR_28 / VAR_31;
     VAR_27 = VAR_1;
 }
    }

    if (VAR_29 == 0) {



 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {
     VAR_15 = *VAR_7;
     for (VAR_19 = 1; VAR_19 <= VAR_15; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    } else if (VAR_29 == 1) {



 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {
     VAR_15 = *VAR_7;
     for (VAR_19 = VAR_20; VAR_19 <= VAR_15; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    } else if (VAR_29 == 2) {



 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {
     VAR_15 = FUNC_2(VAR_20,*VAR_7);
     for (VAR_19 = 1; VAR_19 <= VAR_15; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    } else if (VAR_29 == 3) {



 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {

     VAR_16 = VAR_20 + 1;
     VAR_15 = FUNC_2(VAR_16,*VAR_7);
     for (VAR_19 = 1; VAR_19 <= VAR_15; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    } else if (VAR_29 == 4) {



 VAR_23 = *VAR_3 + 1;
 VAR_24 = *VAR_8 + 1;
 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {

     VAR_16 = VAR_23, VAR_17 = VAR_24 - VAR_20;
     VAR_15 = FUNC_2(VAR_16,VAR_17);
     for (VAR_19 = 1; VAR_19 <= VAR_15; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    } else if (VAR_29 == 5) {



 VAR_21 = *VAR_4 + 2;
 VAR_23 = *VAR_4 + 1;
 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {

     VAR_15 = VAR_21 - VAR_20;
     VAR_16 = VAR_23;
     for (VAR_19 = FUNC_1(VAR_15,1); VAR_19 <= VAR_16; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    } else if (VAR_29 == 6) {



 VAR_21 = *VAR_3 + *VAR_4 + 2;
 VAR_22 = *VAR_3 + 1;
 VAR_23 = (*VAR_3 << 1) + *VAR_4 + 1;
 VAR_24 = *VAR_3 + *VAR_4 + 1 + *VAR_7;
 VAR_14 = *VAR_8;
 for (VAR_20 = 1; VAR_20 <= VAR_14; ++VAR_20) {

     VAR_16 = VAR_21 - VAR_20;

     VAR_17 = VAR_23, VAR_18 = VAR_24 - VAR_20;
     VAR_15 = FUNC_2(VAR_17,VAR_18);
     for (VAR_19 = FUNC_1(VAR_16,VAR_22); VAR_19 <= VAR_15; ++VAR_19) {
  VAR_9[VAR_19 + VAR_20 * VAR_12] *= VAR_25;

     }

 }

    }

    if (! VAR_27) {
 goto L10;
    }

    return 0;



}
