
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* logical ;
typedef int integer ;
struct TYPE_8__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

int FUNC_2(char *VAR_1, char *VAR_2, integer *VAR_3, integer *VAR_4,
 integer *VAR_5, complex *VAR_6, integer *VAR_7, complex *VAR_8, complex *VAR_9,
 integer *VAR_10, complex *VAR_11, integer *VAR_12)
{

    integer VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    complex VAR_20;


    static integer VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    static complex VAR_28;
    static logical VAR_29;
    static complex VAR_30;
    extern int FUNC_3(char *, integer *, integer *, complex *
     , integer *, complex *, complex *, integer *, complex *);
    extern logical FUNC_4(char *, char *);
    extern int FUNC_5(char *, integer *);
    static logical VAR_31;
    VAR_13 = *VAR_7;
    VAR_14 = 1 + VAR_13;
    VAR_6 -= VAR_14;
    --VAR_8;
    VAR_15 = *VAR_10;
    VAR_16 = 1 + VAR_15;
    VAR_9 -= VAR_16;
    --VAR_11;


    *VAR_12 = 0;
    VAR_29 = FUNC_4(VAR_1, "L");
    VAR_31 = FUNC_4(VAR_2, "N");



    if (VAR_29) {
 VAR_27 = *VAR_3;
    } else {
 VAR_27 = *VAR_4;
    }
    if (! VAR_29 && ! FUNC_4(VAR_1, "R")) {
 *VAR_12 = -1;
    } else if (! VAR_31 && ! FUNC_4(VAR_2, "C")) {
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
 FUNC_5("CUNM2L", &VAR_17);
 return 0;
    }



    if (*VAR_3 == 0 || *VAR_4 == 0 || *VAR_5 == 0) {
 return 0;
    }

    if (VAR_29 && VAR_31 || ! VAR_29 && ! VAR_31) {
 VAR_22 = 1;
 VAR_23 = *VAR_5;
 VAR_24 = 1;
    } else {
 VAR_22 = *VAR_5;
 VAR_23 = 1;
 VAR_24 = -1;
    }

    if (VAR_29) {
 VAR_26 = *VAR_4;
    } else {
 VAR_25 = *VAR_3;
    }

    VAR_17 = VAR_23;
    VAR_18 = VAR_24;
    for (VAR_21 = VAR_22; VAR_18 < 0 ? VAR_21 >= VAR_17 : VAR_21 <= VAR_17; VAR_21 += VAR_18) {
 if (VAR_29) {



     VAR_25 = *VAR_3 - *VAR_5 + VAR_21;
 } else {



     VAR_26 = *VAR_4 - *VAR_5 + VAR_21;
 }



 if (VAR_31) {
     VAR_19 = VAR_21;
     VAR_30.r = VAR_8[VAR_19].r, VAR_30.i = VAR_8[VAR_19].i;
 } else {
     FUNC_1(&VAR_20, &VAR_8[VAR_21]);
     VAR_30.r = VAR_20, VAR_30.i = VAR_20;
 }
 VAR_19 = VAR_27 - *VAR_5 + VAR_21 + VAR_21 * VAR_13;
 VAR_28.r = VAR_6[VAR_19].r, VAR_28.i = VAR_6[VAR_19].i;
 VAR_19 = VAR_27 - *VAR_5 + VAR_21 + VAR_21 * VAR_13;
 VAR_6[VAR_19].r = 1.f, VAR_6[VAR_19].i = 0.f;
 FUNC_3(VAR_1, &VAR_25, &VAR_26, &VAR_6[VAR_21 * VAR_13 + 1], &VAR_0, &VAR_30, &VAR_9[
  VAR_16], VAR_10, &VAR_11[1]);
 VAR_19 = VAR_27 - *VAR_5 + VAR_21 + VAR_21 * VAR_13;
 VAR_6[VAR_19].r = VAR_28.r, VAR_6[VAR_19].i = VAR_28.i;

    }
    return 0;



}
