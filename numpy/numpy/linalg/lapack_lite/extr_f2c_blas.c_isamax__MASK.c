
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ real ;
typedef int integer ;


 scalar_t__ FUNC_0 (scalar_t__) ;

integer FUNC_1(integer *VAR_0, real *VAR_1, integer *VAR_2)
{

    integer VAR_3, VAR_4;
    real VAR_5;


    static integer VAR_6, VAR_7;
    static real VAR_8;
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



    VAR_7 = 1;
    VAR_8 = FUNC_0(VAR_1[1]);
    VAR_7 += *VAR_2;
    VAR_4 = *VAR_0;
    for (VAR_6 = 2; VAR_6 <= VAR_4; ++VAR_6) {
 if ((VAR_5 = VAR_1[VAR_7], FUNC_0(VAR_5)) <= VAR_8) {
     goto L5;
 }
 VAR_3 = VAR_6;
 VAR_8 = (VAR_5 = VAR_1[VAR_7], FUNC_0(VAR_5));
L5:
 VAR_7 += *VAR_2;

    }
    return VAR_3;



L20:
    VAR_8 = FUNC_0(VAR_1[1]);
    VAR_4 = *VAR_0;
    for (VAR_6 = 2; VAR_6 <= VAR_4; ++VAR_6) {
 if ((VAR_5 = VAR_1[VAR_6], FUNC_0(VAR_5)) <= VAR_8) {
     goto L30;
 }
 VAR_3 = VAR_6;
 VAR_8 = (VAR_5 = VAR_1[VAR_6], FUNC_0(VAR_5));
L30:
 ;
    }
    return VAR_3;
}
