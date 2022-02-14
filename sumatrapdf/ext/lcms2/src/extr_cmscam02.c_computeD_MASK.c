
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsFloat64Number ;
struct TYPE_3__ {int LA; scalar_t__ F; } ;
typedef TYPE_1__ cmsCIECAM02 ;


 double FUNC_0 (int) ;

__attribute__((used)) static
cmsFloat64Number FUNC_1(cmsCIECAM02* VAR_0)
{
    cmsFloat64Number VAR_1;

    VAR_1 = VAR_0->F - (1.0/3.6)*(FUNC_0(((-VAR_0 ->LA-42) / 92.0)));

    return VAR_1;
}
