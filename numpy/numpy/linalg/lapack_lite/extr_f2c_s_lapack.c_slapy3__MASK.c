
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

doublereal FUNC_4(real *VAR_0, real *VAR_1, real *VAR_2)
{

    real VAR_3, VAR_4, VAR_5, VAR_6;


    static real VAR_7, VAR_8, VAR_9, VAR_10;
    VAR_8 = FUNC_0(*VAR_0);
    VAR_9 = FUNC_0(*VAR_1);
    VAR_10 = FUNC_0(*VAR_2);

    VAR_4 = FUNC_2(VAR_8,VAR_9);
    VAR_7 = FUNC_1(VAR_4,VAR_10);
    if (VAR_7 == 0.f) {





 VAR_3 = VAR_8 + VAR_9 + VAR_10;
    } else {

 VAR_4 = VAR_8 / VAR_7;

 VAR_5 = VAR_9 / VAR_7;

 VAR_6 = VAR_10 / VAR_7;
 VAR_3 = VAR_7 * FUNC_3(VAR_4 * VAR_4 + VAR_5 * VAR_5 + VAR_6 * VAR_6);
    }
    return VAR_3;



}
