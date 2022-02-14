
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ real ;
typedef int integer ;
typedef void* doublereal ;
typedef int complex ;



integer FUNC_0(integer *VAR_0, complex *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4;


    static integer VAR_5, VAR_6;
    static real VAR_7;
    extern doublereal FUNC_1(complex *);
    --VAR_1;


    VAR_3 = 0;
    if (*VAR_0 < 1 || *VAR_2 <= 0) {
 return VAR_3;
    }
    VAR_3 = 1;
    if (*VAR_0 == 1) {
 return VAR_3;
    }
    if (*VAR_2 == 1) {
 goto L20;
    }



    VAR_6 = 1;
    VAR_7 = FUNC_1(&VAR_1[1]);
    VAR_6 += *VAR_2;
    VAR_4 = *VAR_0;
    for (VAR_5 = 2; VAR_5 <= VAR_4; ++VAR_5) {
 if (FUNC_1(&VAR_1[VAR_6]) <= VAR_7) {
     goto L5;
 }
 VAR_3 = VAR_5;
 VAR_7 = FUNC_1(&VAR_1[VAR_6]);
L5:
 VAR_6 += *VAR_2;

    }
    return VAR_3;



L20:
    VAR_7 = FUNC_1(&VAR_1[1]);
    VAR_4 = *VAR_0;
    for (VAR_5 = 2; VAR_5 <= VAR_4; ++VAR_5) {
 if (FUNC_1(&VAR_1[VAR_5]) <= VAR_7) {
     goto L30;
 }
 VAR_3 = VAR_5;
 VAR_7 = FUNC_1(&VAR_1[VAR_5]);
L30:
 ;
    }
    return VAR_3;
}
