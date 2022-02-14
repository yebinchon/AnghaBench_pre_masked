
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;


 float FUNC_0 (float) ;
 float FUNC_1 (float) ;

int FUNC_2(real *VAR_0, real *VAR_1, real *VAR_2, real *VAR_3, real *VAR_4)
{

    real VAR_5;


    static real VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
    VAR_9 = *VAR_0 + *VAR_2;
    VAR_7 = *VAR_0 - *VAR_2;
    VAR_11 = FUNC_0(VAR_7);
    VAR_8 = *VAR_1 + *VAR_1;
    VAR_6 = FUNC_0(VAR_8);
    if (FUNC_0(*VAR_0) > FUNC_0(*VAR_2)) {
 VAR_13 = *VAR_0;
 VAR_12 = *VAR_2;
    } else {
 VAR_13 = *VAR_2;
 VAR_12 = *VAR_0;
    }
    if (VAR_11 > VAR_6) {

 VAR_5 = VAR_6 / VAR_11;
 VAR_10 = VAR_11 * FUNC_1(VAR_5 * VAR_5 + 1.f);
    } else if (VAR_11 < VAR_6) {

 VAR_5 = VAR_11 / VAR_6;
 VAR_10 = VAR_6 * FUNC_1(VAR_5 * VAR_5 + 1.f);
    } else {



 VAR_10 = VAR_6 * FUNC_1(2.f);
    }
    if (VAR_9 < 0.f) {
 *VAR_3 = (VAR_9 - VAR_10) * .5f;







 *VAR_4 = VAR_13 / *VAR_3 * VAR_12 - *VAR_1 / *VAR_3 * *VAR_1;
    } else if (VAR_9 > 0.f) {
 *VAR_3 = (VAR_9 + VAR_10) * .5f;







 *VAR_4 = VAR_13 / *VAR_3 * VAR_12 - *VAR_1 / *VAR_3 * *VAR_1;
    } else {



 *VAR_3 = VAR_10 * .5f;
 *VAR_4 = VAR_10 * -.5f;
    }
    return 0;



}
