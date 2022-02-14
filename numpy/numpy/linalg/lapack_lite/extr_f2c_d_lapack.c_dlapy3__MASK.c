
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int doublereal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;

doublereal FUNC_3(doublereal *VAR_0, doublereal *VAR_1, doublereal *VAR_2)
{

    doublereal VAR_3, VAR_4, VAR_5, VAR_6;


    static doublereal VAR_7, VAR_8, VAR_9, VAR_10;
    VAR_8 = FUNC_0(*VAR_0);
    VAR_9 = FUNC_0(*VAR_1);
    VAR_10 = FUNC_0(*VAR_2);

    VAR_4 = FUNC_1(VAR_8,VAR_9);
    VAR_7 = FUNC_1(VAR_4,VAR_10);
    if (VAR_7 == 0.) {





 VAR_3 = VAR_8 + VAR_9 + VAR_10;
    } else {

 VAR_4 = VAR_8 / VAR_7;

 VAR_5 = VAR_9 / VAR_7;

 VAR_6 = VAR_10 / VAR_7;
 VAR_3 = VAR_7 * FUNC_2(VAR_4 * VAR_4 + VAR_5 * VAR_5 + VAR_6 * VAR_6);
    }
    return VAR_3;



}
