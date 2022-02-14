
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef double cmsFloat64Number ;
struct TYPE_3__ {double LA; } ;
typedef TYPE_1__ cmsCIECAM02 ;


 double FUNC_0 (double,double) ;

__attribute__((used)) static
cmsFloat64Number FUNC_1(cmsCIECAM02* VAR_0)
{
    cmsFloat64Number VAR_1, VAR_2;

    VAR_1 = 1.0 / ((5.0 * VAR_0->LA) + 1.0);
    VAR_2 = 0.2 * FUNC_0(VAR_1, 4.0) * (5.0 * VAR_0->LA) + 0.1 *
        (FUNC_0((1.0 - FUNC_0(VAR_1, 4.0)), 2.0)) *
        (FUNC_0((5.0 * VAR_0->LA), (1.0 / 3.0)));

    return VAR_2;
}
