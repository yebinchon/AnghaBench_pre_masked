
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MPContext ;


 double VAR_0 ;
 double FUNC_0 (int *) ;
 double FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(MPContext *VAR_1, double *VAR_2)
{
    double VAR_3 = FUNC_1(VAR_1);
    double VAR_4 = FUNC_0(VAR_1);

    if (VAR_4 == VAR_0 || VAR_3 <= 0)
        return 0;

    *VAR_2 = VAR_3 - VAR_4;

    return VAR_3 >= 0;
}
