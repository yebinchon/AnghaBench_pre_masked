
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int integer ;



int FUNC_0(integer *VAR_0, real *VAR_1, real *VAR_2, integer *VAR_3)
{

    integer VAR_4, VAR_5;


    static integer VAR_6, VAR_7, VAR_8, VAR_9;
    --VAR_2;


    if (*VAR_0 <= 0 || *VAR_3 <= 0) {
 return 0;
    }
    if (*VAR_3 == 1) {
 goto L20;
    }



    VAR_9 = *VAR_0 * *VAR_3;
    VAR_4 = VAR_9;
    VAR_5 = *VAR_3;
    for (VAR_6 = 1; VAR_5 < 0 ? VAR_6 >= VAR_4 : VAR_6 <= VAR_4; VAR_6 += VAR_5) {
 VAR_2[VAR_6] = *VAR_1 * VAR_2[VAR_6];

    }
    return 0;
L20:
    VAR_7 = *VAR_0 % 5;
    if (VAR_7 == 0) {
 goto L40;
    }
    VAR_5 = VAR_7;
    for (VAR_6 = 1; VAR_6 <= VAR_5; ++VAR_6) {
 VAR_2[VAR_6] = *VAR_1 * VAR_2[VAR_6];

    }
    if (*VAR_0 < 5) {
 return 0;
    }
L40:
    VAR_8 = VAR_7 + 1;
    VAR_5 = *VAR_0;
    for (VAR_6 = VAR_8; VAR_6 <= VAR_5; VAR_6 += 5) {
 VAR_2[VAR_6] = *VAR_1 * VAR_2[VAR_6];
 VAR_2[VAR_6 + 1] = *VAR_1 * VAR_2[VAR_6 + 1];
 VAR_2[VAR_6 + 2] = *VAR_1 * VAR_2[VAR_6 + 2];
 VAR_2[VAR_6 + 3] = *VAR_1 * VAR_2[VAR_6 + 3];
 VAR_2[VAR_6 + 4] = *VAR_1 * VAR_2[VAR_6 + 4];

    }
    return 0;
}
