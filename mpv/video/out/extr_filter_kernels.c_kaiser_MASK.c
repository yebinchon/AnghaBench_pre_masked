
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* params; } ;
typedef TYPE_1__ params ;


 double FUNC_0 (int) ;
 int FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(params *VAR_0, double VAR_1)
{
    if (VAR_1 > 1)
        return 0;
    double VAR_2 = 1.0 / FUNC_0(VAR_0->params[1]);
    return FUNC_0(VAR_0->params[0] * FUNC_1(1.0 - VAR_1 * VAR_1)) * VAR_2;
}
