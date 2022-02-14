
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;



int FUNC_0(integer *VAR_0, real *VAR_1, real *VAR_2, integer *VAR_3,
 real *VAR_4, integer *VAR_5)
{

    integer VAR_6;


    static integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    --VAR_4;
    --VAR_2;


    if (*VAR_0 <= 0) {
 return 0;
    }
    if (*VAR_1 == 0.f) {
 return 0;
    }
    if (*VAR_3 == 1 && *VAR_5 == 1) {
 goto L20;
    }






    VAR_9 = 1;
    VAR_10 = 1;
    if (*VAR_3 < 0) {
 VAR_9 = (-(*VAR_0) + 1) * *VAR_3 + 1;
    }
    if (*VAR_5 < 0) {
 VAR_10 = (-(*VAR_0) + 1) * *VAR_5 + 1;
    }
    VAR_6 = *VAR_0;
    for (VAR_7 = 1; VAR_7 <= VAR_6; ++VAR_7) {
 VAR_4[VAR_10] += *VAR_1 * VAR_2[VAR_9];
 VAR_9 += *VAR_3;
 VAR_10 += *VAR_5;

    }
    return 0;
L20:
    VAR_8 = *VAR_0 % 4;
    if (VAR_8 == 0) {
 goto L40;
    }
    VAR_6 = VAR_8;
    for (VAR_7 = 1; VAR_7 <= VAR_6; ++VAR_7) {
 VAR_4[VAR_7] += *VAR_1 * VAR_2[VAR_7];

    }
    if (*VAR_0 < 4) {
 return 0;
    }
L40:
    VAR_11 = VAR_8 + 1;
    VAR_6 = *VAR_0;
    for (VAR_7 = VAR_11; VAR_7 <= VAR_6; VAR_7 += 4) {
 VAR_4[VAR_7] += *VAR_1 * VAR_2[VAR_7];
 VAR_4[VAR_7 + 1] += *VAR_1 * VAR_2[VAR_7 + 1];
 VAR_4[VAR_7 + 2] += *VAR_1 * VAR_2[VAR_7 + 2];
 VAR_4[VAR_7 + 3] += *VAR_1 * VAR_2[VAR_7 + 3];

    }
    return 0;
}
