
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(double *VAR_1, int VAR_2)
{
    double VAR_3;

    VAR_3 = FUNC_0(VAR_1[0]);
    if (VAR_3 == 0.0)
        return VAR_0;
    else
        return 1.0 / FUNC_1(VAR_3);
}
