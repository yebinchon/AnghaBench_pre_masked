
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;

doublereal FUNC_4(doublereal *VAR_0, doublereal *VAR_1)
{

    doublereal VAR_2, VAR_3;


    static doublereal VAR_4, VAR_5, VAR_6, VAR_7;
    VAR_6 = FUNC_0(*VAR_0);
    VAR_7 = FUNC_0(*VAR_1);
    VAR_4 = FUNC_1(VAR_6,VAR_7);
    VAR_5 = FUNC_2(VAR_6,VAR_7);
    if (VAR_5 == 0.) {
 VAR_2 = VAR_4;
    } else {

 VAR_3 = VAR_5 / VAR_4;
 VAR_2 = VAR_4 * FUNC_3(VAR_3 * VAR_3 + 1.);
    }
    return VAR_2;



}
