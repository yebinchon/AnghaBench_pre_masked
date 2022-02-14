
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef double cmsFloat64Number ;
struct TYPE_6__ {double L; double a; double b; } ;
typedef TYPE_1__ cmsCIELab ;


 int FUNC_0 () ;
 int FUNC_1 (char*,double,double,double,double,double,double,double) ;
 double VAR_0 ;
 double FUNC_2 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ,int ,TYPE_1__*,TYPE_1__*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(cmsHTRANSFORM VAR_1, cmsFloat64Number VAR_2, cmsFloat64Number VAR_3, cmsFloat64Number VAR_4)
{
    cmsCIELab VAR_5, VAR_6;
    cmsFloat64Number VAR_7;

    VAR_5.L = VAR_2; VAR_5.a = VAR_3; VAR_5.b = VAR_4;
    FUNC_3(FUNC_0(), VAR_1, &VAR_5, &VAR_6, 1);

    VAR_7 = FUNC_2(FUNC_0(), &VAR_5, &VAR_6);

    if (VAR_7 > VAR_0) VAR_0 = VAR_7;

    if (VAR_0 > 0.003) {
        FUNC_1("dE=%f Lab1=(%f, %f, %f)\n\tLab2=(%f %f %f)", VAR_0, VAR_5.L, VAR_5.a, VAR_5.b, VAR_6.L, VAR_6.a, VAR_6.b);
        FUNC_3(FUNC_0(), VAR_1, &VAR_5, &VAR_6, 1);
        return 0;
    }

    return 1;
}
