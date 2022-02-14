
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt16Number ;
struct TYPE_3__ {double L; double a; double b; } ;
typedef TYPE_1__ cmsCIELab ;



__attribute__((used)) static
void FUNC_0(const cmsUInt16Number VAR_0[3], cmsCIELab* VAR_1)
{
    VAR_1 -> L = (double) VAR_0[0] / 655.35;
    VAR_1 -> a = (double) 170.* (VAR_0[1] - 32768.) / 65535.;
    VAR_1 -> b = (double) 200.* (VAR_0[2] - 24576.) / 65535.;
}
