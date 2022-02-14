
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double* params; } ;
typedef TYPE_1__ params ;



__attribute__((used)) static double FUNC_0(params *VAR_0, double VAR_1)
{
    double VAR_2 = VAR_0->params[0],
           VAR_3 = VAR_0->params[1];
    double VAR_4 = (6.0 - 2.0 * VAR_2) / 6.0,
           VAR_5 = (-18.0 + 12.0 * VAR_2 + 6.0 * VAR_3) / 6.0,
           VAR_6 = (12.0 - 9.0 * VAR_2 - 6.0 * VAR_3) / 6.0,
           VAR_7 = (8.0 * VAR_2 + 24.0 * VAR_3) / 6.0,
           VAR_8 = (-12.0 * VAR_2 - 48.0 * VAR_3) / 6.0,
           VAR_9 = (6.0 * VAR_2 + 30.0 * VAR_3) / 6.0,
           VAR_10 = (-VAR_2 - 6.0 * VAR_3) / 6.0;

    if (VAR_1 < 1.0) {
        return VAR_4 + VAR_1 * VAR_1 * (VAR_5 + VAR_1 * VAR_6);
    } else if (VAR_1 < 2.0) {
        return VAR_7 + VAR_1 * (VAR_8 + VAR_1 * (VAR_9 + VAR_1 * VAR_10));
    }
    return 0.0;
}
