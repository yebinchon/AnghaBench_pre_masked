
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double REAL ;


 int FUNC_0 (double,double,double*,double*,double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static void FUNC_2(REAL VAR_0, REAL VAR_1, REAL *VAR_2, REAL *VAR_3, REAL VAR_4)
{
    REAL VAR_5, VAR_6, VAR_7;

    VAR_5 = *VAR_2 - VAR_0;
    VAR_6 = *VAR_3 - VAR_1;
    if(VAR_5 == 0 && VAR_6 == 0)
        return;

    VAR_7 = VAR_4 / FUNC_1(VAR_5 * VAR_5 + VAR_6 * VAR_6);
    if(VAR_7 >= 1.0){
        *VAR_2 = VAR_0;
        *VAR_3 = VAR_1;
        return;
    }

    FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_7);
}
