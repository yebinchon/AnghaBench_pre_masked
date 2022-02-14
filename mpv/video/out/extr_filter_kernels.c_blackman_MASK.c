
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* params; } ;
typedef TYPE_1__ params ;


 double VAR_0 ;
 double FUNC_0 (int) ;

__attribute__((used)) static double FUNC_1(params *VAR_1, double VAR_2)
{
    double VAR_3 = VAR_1->params[0];
    double VAR_4 = (1-VAR_3)/2.0, VAR_5 = 1/2.0, VAR_6 = VAR_3/2.0;
    double VAR_7 = VAR_0 * VAR_2;
    return VAR_4 + VAR_5*FUNC_0(VAR_7) + VAR_6*FUNC_0(2 * VAR_7);
}
