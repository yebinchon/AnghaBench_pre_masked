
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* logical ;
typedef int integer ;
typedef int doublereal ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

int FUNC_1(char *VAR_1, char *VAR_2, integer *VAR_3, integer *VAR_4,
 integer *VAR_5, doublereal *VAR_6, integer *VAR_7, doublereal *VAR_8, doublereal *
 VAR_9, integer *VAR_10, doublereal *VAR_11, integer *VAR_12)
{

    integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;


    static integer VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    static doublereal VAR_28;
    static logical VAR_29;
    extern int FUNC_2(char *, integer *, integer *,
     doublereal *, integer *, doublereal *, doublereal *, integer *,
     doublereal *);
    extern logical FUNC_3(char *, char *);
    extern int FUNC_4(char *, integer *);
    static logical VAR_30;
    VAR_13 = *VAR_7;
    VAR_14 = 1 + VAR_13;
    VAR_6 -= VAR_14;
    --VAR_8;
    VAR_15 = *VAR_10;
    VAR_16 = 1 + VAR_15;
    VAR_9 -= VAR_16;
    --VAR_11;


    *VAR_12 = 0;
    VAR_29 = FUNC_3(VAR_1, "L");
    VAR_30 = FUNC_3(VAR_2, "N");



    if (VAR_29) {
 VAR_27 = *VAR_3;
    } else {
 VAR_27 = *VAR_4;
    }
    if (! VAR_29 && ! FUNC_3(VAR_1, "R")) {
 *VAR_12 = -1;
    } else if (! VAR_30 && ! FUNC_3(VAR_2, "T")) {
 *VAR_12 = -2;
    } else if (*VAR_3 < 0) {
 *VAR_12 = -3;
    } else if (*VAR_4 < 0) {
 *VAR_12 = -4;
    } else if (*VAR_5 < 0 || *VAR_5 > VAR_27) {
 *VAR_12 = -5;
    } else if (*VAR_7 < FUNC_0(1,VAR_27)) {
 *VAR_12 = -7;
    } else if (*VAR_10 < FUNC_0(1,*VAR_3)) {
 *VAR_12 = -10;
    }
    if (*VAR_12 != 0) {
 VAR_17 = -(*VAR_12);
 FUNC_4("DORM2R", &VAR_17);
 return 0;
    }



    if (*VAR_3 == 0 || *VAR_4 == 0 || *VAR_5 == 0) {
 return 0;
    }

    if (VAR_29 && ! VAR_30 || ! VAR_29 && VAR_30) {
 VAR_20 = 1;
 VAR_21 = *VAR_5;
 VAR_22 = 1;
    } else {
 VAR_20 = *VAR_5;
 VAR_21 = 1;
 VAR_22 = -1;
    }

    if (VAR_29) {
 VAR_26 = *VAR_4;
 VAR_24 = 1;
    } else {
 VAR_25 = *VAR_3;
 VAR_23 = 1;
    }

    VAR_17 = VAR_21;
    VAR_18 = VAR_22;
    for (VAR_19 = VAR_20; VAR_18 < 0 ? VAR_19 >= VAR_17 : VAR_19 <= VAR_17; VAR_19 += VAR_18) {
 if (VAR_29) {



     VAR_25 = *VAR_3 - VAR_19 + 1;
     VAR_23 = VAR_19;
 } else {



     VAR_26 = *VAR_4 - VAR_19 + 1;
     VAR_24 = VAR_19;
 }



 VAR_28 = VAR_6[VAR_19 + VAR_19 * VAR_13];
 VAR_6[VAR_19 + VAR_19 * VAR_13] = 1.;
 FUNC_2(VAR_1, &VAR_25, &VAR_26, &VAR_6[VAR_19 + VAR_19 * VAR_13], &VAR_0, &VAR_8[VAR_19], &VAR_9[
  VAR_23 + VAR_24 * VAR_15], VAR_10, &VAR_11[1]);
 VAR_6[VAR_19 + VAR_19 * VAR_13] = VAR_28;

    }
    return 0;



}
