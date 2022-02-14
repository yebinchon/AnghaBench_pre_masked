
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int integer ;
typedef int doublereal ;



int FUNC_0(integer *VAR_0, doublereal *VAR_1, integer *VAR_2,
 doublereal *VAR_3, integer *VAR_4)
{

    integer VAR_5;


    static integer VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
    static doublereal VAR_11;
    --VAR_3;
    --VAR_1;


    if (*VAR_0 <= 0) {
 return 0;
    }
    if (*VAR_2 == 1 && *VAR_4 == 1) {
 goto L20;
    }






    VAR_8 = 1;
    VAR_9 = 1;
    if (*VAR_2 < 0) {
 VAR_8 = (-(*VAR_0) + 1) * *VAR_2 + 1;
    }
    if (*VAR_4 < 0) {
 VAR_9 = (-(*VAR_0) + 1) * *VAR_4 + 1;
    }
    VAR_5 = *VAR_0;
    for (VAR_6 = 1; VAR_6 <= VAR_5; ++VAR_6) {
 VAR_11 = VAR_1[VAR_8];
 VAR_1[VAR_8] = VAR_3[VAR_9];
 VAR_3[VAR_9] = VAR_11;
 VAR_8 += *VAR_2;
 VAR_9 += *VAR_4;

    }
    return 0;
L20:
    VAR_7 = *VAR_0 % 3;
    if (VAR_7 == 0) {
 goto L40;
    }
    VAR_5 = VAR_7;
    for (VAR_6 = 1; VAR_6 <= VAR_5; ++VAR_6) {
 VAR_11 = VAR_1[VAR_6];
 VAR_1[VAR_6] = VAR_3[VAR_6];
 VAR_3[VAR_6] = VAR_11;

    }
    if (*VAR_0 < 3) {
 return 0;
    }
L40:
    VAR_10 = VAR_7 + 1;
    VAR_5 = *VAR_0;
    for (VAR_6 = VAR_10; VAR_6 <= VAR_5; VAR_6 += 3) {
 VAR_11 = VAR_1[VAR_6];
 VAR_1[VAR_6] = VAR_3[VAR_6];
 VAR_3[VAR_6] = VAR_11;
 VAR_11 = VAR_1[VAR_6 + 1];
 VAR_1[VAR_6 + 1] = VAR_3[VAR_6 + 1];
 VAR_3[VAR_6 + 1] = VAR_11;
 VAR_11 = VAR_1[VAR_6 + 2];
 VAR_1[VAR_6 + 2] = VAR_3[VAR_6 + 2];
 VAR_3[VAR_6 + 2] = VAR_11;

    }
    return 0;
}
