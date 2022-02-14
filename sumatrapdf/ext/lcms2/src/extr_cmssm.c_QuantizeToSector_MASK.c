
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double alpha; double theta; } ;
typedef TYPE_1__ cmsSpherical ;


 double VAR_0 ;
 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static
void FUNC_1(const cmsSpherical* VAR_1, int* VAR_2, int* VAR_3)
{
    *VAR_2 = (int) FUNC_0(((VAR_1->alpha * (VAR_0)) / 360.0) );
    *VAR_3 = (int) FUNC_0(((VAR_1->theta * (VAR_0)) / 180.0) );

    if (*VAR_2 >= VAR_0)
        *VAR_2 = VAR_0-1;
    if (*VAR_3 >= VAR_0)
        *VAR_3 = VAR_0-1;
}
