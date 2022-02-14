
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float real ;
typedef float doublereal ;


 float FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 float FUNC_2 (float,float) ;
 float FUNC_3 (float) ;

doublereal FUNC_4(real *VAR_0, real *VAR_1)
{

    real VAR_2, VAR_3;


    static real VAR_4, VAR_5, VAR_6, VAR_7;
    VAR_6 = FUNC_0(*VAR_0);
    VAR_7 = FUNC_0(*VAR_1);
    VAR_4 = FUNC_1(VAR_6,VAR_7);
    VAR_5 = FUNC_2(VAR_6,VAR_7);
    if (VAR_5 == 0.f) {
 VAR_2 = VAR_4;
    } else {

 VAR_3 = VAR_5 / VAR_4;
 VAR_2 = VAR_4 * FUNC_3(VAR_3 * VAR_3 + 1.f);
    }
    return VAR_2;



}
