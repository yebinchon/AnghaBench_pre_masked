
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef int integer ;
typedef int doublereal ;


 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_0, char *VAR_1, integer *VAR_2, integer *VAR_3,
 integer *VAR_4, doublereal *VAR_5, integer *VAR_6, doublereal *VAR_7, doublereal *
 VAR_8, integer *VAR_9, doublereal *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;


    static integer VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
    static doublereal VAR_27;
    static logical VAR_28;
    extern int FUNC_2(char *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *,
     doublereal *);
    extern logical FUNC_3(char *, char *);
    extern int FUNC_4(char *, integer *);
    static logical VAR_29;
    VAR_12 = *VAR_6;
    VAR_13 = 1 + VAR_12;
    VAR_5 -= VAR_13;
    --VAR_7;
    VAR_14 = *VAR_9;
    VAR_15 = 1 + VAR_14;
    VAR_8 -= VAR_15;
    --VAR_10;


    *VAR_11 = 0;
    VAR_28 = FUNC_3(VAR_0, "L");
    VAR_29 = FUNC_3(VAR_1, "N");



    if (VAR_28) {
 VAR_26 = *VAR_2;
    } else {
 VAR_26 = *VAR_3;
    }
    if (! VAR_28 && ! FUNC_3(VAR_0, "R")) {
 *VAR_11 = -1;
    } else if (! VAR_29 && ! FUNC_3(VAR_1, "T")) {
 *VAR_11 = -2;
    } else if (*VAR_2 < 0) {
 *VAR_11 = -3;
    } else if (*VAR_3 < 0) {
 *VAR_11 = -4;
    } else if (*VAR_4 < 0 || *VAR_4 > VAR_26) {
 *VAR_11 = -5;
    } else if (*VAR_6 < FUNC_0(1,*VAR_4)) {
 *VAR_11 = -7;
    } else if (*VAR_9 < FUNC_0(1,*VAR_2)) {
 *VAR_11 = -10;
    }
    if (*VAR_11 != 0) {
 VAR_16 = -(*VAR_11);
 FUNC_4("DORML2", &VAR_16);
 return 0;
    }



    if (*VAR_2 == 0 || *VAR_3 == 0 || *VAR_4 == 0) {
 return 0;
    }

    if (VAR_28 && VAR_29 || ! VAR_28 && ! VAR_29) {
 VAR_19 = 1;
 VAR_20 = *VAR_4;
 VAR_21 = 1;
    } else {
 VAR_19 = *VAR_4;
 VAR_20 = 1;
 VAR_21 = -1;
    }

    if (VAR_28) {
 VAR_25 = *VAR_3;
 VAR_23 = 1;
    } else {
 VAR_24 = *VAR_2;
 VAR_22 = 1;
    }

    VAR_16 = VAR_20;
    VAR_17 = VAR_21;
    for (VAR_18 = VAR_19; VAR_17 < 0 ? VAR_18 >= VAR_16 : VAR_18 <= VAR_16; VAR_18 += VAR_17) {
 if (VAR_28) {



     VAR_24 = *VAR_2 - VAR_18 + 1;
     VAR_22 = VAR_18;
 } else {



     VAR_25 = *VAR_3 - VAR_18 + 1;
     VAR_23 = VAR_18;
 }



 VAR_27 = VAR_5[VAR_18 + VAR_18 * VAR_12];
 VAR_5[VAR_18 + VAR_18 * VAR_12] = 1.;
 FUNC_2(VAR_0, &VAR_24, &VAR_25, &VAR_5[VAR_18 + VAR_18 * VAR_12], VAR_6, &VAR_7[VAR_18], &VAR_8[
  VAR_22 + VAR_23 * VAR_14], VAR_9, &VAR_10[1]);
 VAR_5[VAR_18 + VAR_18 * VAR_12] = VAR_27;

    }
    return 0;



}
