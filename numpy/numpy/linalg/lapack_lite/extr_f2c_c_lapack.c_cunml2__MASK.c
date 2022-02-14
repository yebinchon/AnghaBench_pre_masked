
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef void* logical ;
typedef int integer ;
struct TYPE_8__ {float r; float i; } ;
typedef TYPE_1__ complex ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (char*,int*) ;

int FUNC_3(char *VAR_0, char *VAR_1, integer *VAR_2, integer *VAR_3,
 integer *VAR_4, complex *VAR_5, integer *VAR_6, complex *VAR_7, complex *VAR_8,
 integer *VAR_9, complex *VAR_10, integer *VAR_11)
{

    integer VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
    complex VAR_19;


    static integer VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
    static complex VAR_29;
    static logical VAR_30;
    static complex VAR_31;
    extern int FUNC_4(char *, integer *, integer *, complex *
     , integer *, complex *, complex *, integer *, complex *);
    extern logical FUNC_5(char *, char *);
    extern int FUNC_6(integer *, complex *, integer *),
     FUNC_2(char *, integer *);
    static logical VAR_32;
    VAR_12 = *VAR_6;
    VAR_13 = 1 + VAR_12;
    VAR_5 -= VAR_13;
    --VAR_7;
    VAR_14 = *VAR_9;
    VAR_15 = 1 + VAR_14;
    VAR_8 -= VAR_15;
    --VAR_10;


    *VAR_11 = 0;
    VAR_30 = FUNC_5(VAR_0, "L");
    VAR_32 = FUNC_5(VAR_1, "N");



    if (VAR_30) {
 VAR_28 = *VAR_2;
    } else {
 VAR_28 = *VAR_3;
    }
    if (! VAR_30 && ! FUNC_5(VAR_0, "R")) {
 *VAR_11 = -1;
    } else if (! VAR_32 && ! FUNC_5(VAR_1, "C")) {
 *VAR_11 = -2;
    } else if (*VAR_2 < 0) {
 *VAR_11 = -3;
    } else if (*VAR_3 < 0) {
 *VAR_11 = -4;
    } else if (*VAR_4 < 0 || *VAR_4 > VAR_28) {
 *VAR_11 = -5;
    } else if (*VAR_6 < FUNC_0(1,*VAR_4)) {
 *VAR_11 = -7;
    } else if (*VAR_9 < FUNC_0(1,*VAR_2)) {
 *VAR_11 = -10;
    }
    if (*VAR_11 != 0) {
 VAR_16 = -(*VAR_11);
 FUNC_2("CUNML2", &VAR_16);
 return 0;
    }



    if (*VAR_2 == 0 || *VAR_3 == 0 || *VAR_4 == 0) {
 return 0;
    }

    if (VAR_30 && VAR_32 || ! VAR_30 && ! VAR_32) {
 VAR_21 = 1;
 VAR_22 = *VAR_4;
 VAR_23 = 1;
    } else {
 VAR_21 = *VAR_4;
 VAR_22 = 1;
 VAR_23 = -1;
    }

    if (VAR_30) {
 VAR_27 = *VAR_3;
 VAR_25 = 1;
    } else {
 VAR_26 = *VAR_2;
 VAR_24 = 1;
    }

    VAR_16 = VAR_22;
    VAR_17 = VAR_23;
    for (VAR_20 = VAR_21; VAR_17 < 0 ? VAR_20 >= VAR_16 : VAR_20 <= VAR_16; VAR_20 += VAR_17) {
 if (VAR_30) {



     VAR_26 = *VAR_2 - VAR_20 + 1;
     VAR_24 = VAR_20;
 } else {



     VAR_27 = *VAR_3 - VAR_20 + 1;
     VAR_25 = VAR_20;
 }



 if (VAR_32) {
     FUNC_1(&VAR_19, &VAR_7[VAR_20]);
     VAR_31.r = VAR_19, VAR_31.i = VAR_19;
 } else {
     VAR_18 = VAR_20;
     VAR_31.r = VAR_7[VAR_18].r, VAR_31.i = VAR_7[VAR_18].i;
 }
 if (VAR_20 < VAR_28) {
     VAR_18 = VAR_28 - VAR_20;
     FUNC_6(&VAR_18, &VAR_5[VAR_20 + (VAR_20 + 1) * VAR_12], VAR_6);
 }
 VAR_18 = VAR_20 + VAR_20 * VAR_12;
 VAR_29.r = VAR_5[VAR_18].r, VAR_29.i = VAR_5[VAR_18].i;
 VAR_18 = VAR_20 + VAR_20 * VAR_12;
 VAR_5[VAR_18].r = 1.f, VAR_5[VAR_18].i = 0.f;
 FUNC_4(VAR_0, &VAR_26, &VAR_27, &VAR_5[VAR_20 + VAR_20 * VAR_12], VAR_6, &VAR_31, &VAR_8[VAR_24 +
  VAR_25 * VAR_14], VAR_9, &VAR_10[1]);
 VAR_18 = VAR_20 + VAR_20 * VAR_12;
 VAR_5[VAR_18].r = VAR_29.r, VAR_5[VAR_18].i = VAR_29.i;
 if (VAR_20 < VAR_28) {
     VAR_18 = VAR_28 - VAR_20;
     FUNC_6(&VAR_18, &VAR_5[VAR_20 + (VAR_20 + 1) * VAR_12], VAR_6);
 }

    }
    return 0;



}
