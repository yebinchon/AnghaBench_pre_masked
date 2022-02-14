
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef int integer ;
typedef float doublereal ;



doublereal FUNC_0(integer *VAR_0, real *VAR_1, integer *VAR_2, real *VAR_3, integer *VAR_4)
{

    integer VAR_5;
    real VAR_6;


    static integer VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    static real VAR_12;
    --VAR_3;
    --VAR_1;


    VAR_12 = 0.f;
    VAR_6 = 0.f;
    if (*VAR_0 <= 0) {
 return VAR_6;
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
    VAR_5 = *VAR_0;
    for (VAR_7 = 1; VAR_7 <= VAR_5; ++VAR_7) {
 VAR_12 += VAR_1[VAR_9] * VAR_3[VAR_10];
 VAR_9 += *VAR_2;
 VAR_10 += *VAR_4;

    }
    VAR_6 = VAR_12;
    return VAR_6;
L20:
    VAR_8 = *VAR_0 % 5;
    if (VAR_8 == 0) {
 goto L40;
    }
    VAR_5 = VAR_8;
    for (VAR_7 = 1; VAR_7 <= VAR_5; ++VAR_7) {
 VAR_12 += VAR_1[VAR_7] * VAR_3[VAR_7];

    }
    if (*VAR_0 < 5) {
 goto L60;
    }
L40:
    VAR_11 = VAR_8 + 1;
    VAR_5 = *VAR_0;
    for (VAR_7 = VAR_11; VAR_7 <= VAR_5; VAR_7 += 5) {
 VAR_12 = VAR_12 + VAR_1[VAR_7] * VAR_3[VAR_7] + VAR_1[VAR_7 + 1] * VAR_3[VAR_7 + 1] + VAR_1[
  VAR_7 + 2] * VAR_3[VAR_7 + 2] + VAR_1[VAR_7 + 3] * VAR_3[VAR_7 + 3] + VAR_1[VAR_7 +
  4] * VAR_3[VAR_7 + 4];

    }
L60:
    VAR_6 = VAR_12;
    return VAR_6;
}
