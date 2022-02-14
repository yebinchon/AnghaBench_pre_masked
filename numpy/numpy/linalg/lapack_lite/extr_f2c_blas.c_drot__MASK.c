
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;



int FUNC_0(integer *VAR_0, doublereal *VAR_1, integer *VAR_2,
 doublereal *VAR_3, integer *VAR_4, doublereal *VAR_5, doublereal *VAR_6)
{

    integer VAR_7;


    static integer VAR_8, VAR_9, VAR_10;
    static doublereal VAR_11;
    --VAR_3;
    --VAR_1;


    if (*VAR_0 <= 0) {
 return 0;
    }
    if (*VAR_2 == 1 && *VAR_4 == 1) {
 goto L20;
    }






    VAR_9 = 1;
    VAR_10 = 1;
    if (*VAR_2 < 0) {
 VAR_9 = (-(*VAR_0) + 1) * *VAR_2 + 1;
    }
    if (*VAR_4 < 0) {
 VAR_10 = (-(*VAR_0) + 1) * *VAR_4 + 1;
    }
    VAR_7 = *VAR_0;
    for (VAR_8 = 1; VAR_8 <= VAR_7; ++VAR_8) {
 VAR_11 = *VAR_5 * VAR_1[VAR_9] + *VAR_6 * VAR_3[VAR_10];
 VAR_3[VAR_10] = *VAR_5 * VAR_3[VAR_10] - *VAR_6 * VAR_1[VAR_9];
 VAR_1[VAR_9] = VAR_11;
 VAR_9 += *VAR_2;
 VAR_10 += *VAR_4;

    }
    return 0;



L20:
    VAR_7 = *VAR_0;
    for (VAR_8 = 1; VAR_8 <= VAR_7; ++VAR_8) {
 VAR_11 = *VAR_5 * VAR_1[VAR_8] + *VAR_6 * VAR_3[VAR_8];
 VAR_3[VAR_8] = *VAR_5 * VAR_3[VAR_8] - *VAR_6 * VAR_1[VAR_8];
 VAR_1[VAR_8] = VAR_11;

    }
    return 0;
}
