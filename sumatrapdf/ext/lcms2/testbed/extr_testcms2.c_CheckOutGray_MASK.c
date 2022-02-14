
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt8Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
struct TYPE_3__ {double L; scalar_t__ b; scalar_t__ a; } ;
typedef TYPE_1__ cmsCIELab ;


 int FUNC_0 () ;
 int FUNC_1 (char*,scalar_t__,double,double) ;
 int FUNC_2 (int ,int ,TYPE_1__*,scalar_t__*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsHTRANSFORM VAR_0, double VAR_1, cmsUInt8Number VAR_2)
{
    cmsCIELab VAR_3;
    cmsUInt8Number VAR_4;

    VAR_3.L = VAR_1;
    VAR_3.a = 0;
    VAR_3.b = 0;

    FUNC_2(FUNC_0(), VAR_0, &VAR_3, &VAR_4, 1);

    return FUNC_1("Gray value", VAR_2, (double) VAR_4, 0.01);
}
