
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt16Number ;
struct TYPE_3__ {int L; int a; int b; } ;
typedef TYPE_1__ cmsCIELab ;


 scalar_t__ FUNC_0 (double) ;

__attribute__((used)) static
void FUNC_1(const cmsCIELab* VAR_0, cmsUInt16Number VAR_1[3])
{
    VAR_1[0] = (cmsUInt16Number) FUNC_0((double) (VAR_0 -> L / 100.)* 65535. );
    VAR_1[1] = (cmsUInt16Number) FUNC_0((double) (VAR_0 -> a / 170.)* 65535. + 32768. );
    VAR_1[2] = (cmsUInt16Number) FUNC_0((double) (VAR_0 -> b / 200.)* 65535. + 24576. );
}
