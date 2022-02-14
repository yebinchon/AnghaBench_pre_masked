
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
struct TYPE_3__ {int L; int b; int a; } ;
typedef TYPE_1__ cmsCIELab ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,int ,double) ;
 int FUNC_2 (int ,int ,int *,TYPE_1__*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsHTRANSFORM VAR_0, cmsUInt8Number VAR_1, double VAR_2)
{
    cmsCIELab VAR_3;

    FUNC_2(FUNC_0(), VAR_0, &VAR_1, &VAR_3, 1);

    if (!FUNC_1("a axis on gray", 0, VAR_3.a, 0.001)) return 0;
    if (!FUNC_1("b axis on gray", 0, VAR_3.b, 0.001)) return 0;

    return FUNC_1("Gray value", VAR_2, VAR_3.L, 0.01);
}
