
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;
typedef double cmsFloat32Number ;


 int FUNC_0 (int *,double) ;
 int FUNC_1 () ;
 double VAR_0 ;
 int * FUNC_2 (int ,double) ;
 double FUNC_3 (int ,int *,double) ;
 int FUNC_4 (int ,int *) ;
 double FUNC_5 (double) ;
 double FUNC_6 (double,double) ;
 int FUNC_7 (char*,double) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(cmsFloat64Number VAR_1)
{
    cmsToneCurve* VAR_2 = FUNC_2(FUNC_1(), VAR_1);
    cmsInt32Number VAR_3;
    cmsFloat32Number VAR_4, VAR_5;
    cmsFloat64Number VAR_6, VAR_7;

    VAR_0 = 0.0;
    for (VAR_3=0; VAR_3 < 0xffff; VAR_3++) {

        VAR_4 = (cmsFloat32Number) (VAR_3 / 65535.0);
        VAR_5 = FUNC_3(FUNC_1(), VAR_2, VAR_4);
        VAR_6 = FUNC_6((cmsFloat64Number) VAR_4, VAR_1);

        VAR_7 = FUNC_5( VAR_6 - VAR_5);
        if (VAR_7 > VAR_0) VAR_0 = VAR_7;
    }

    if (VAR_0 > 0) FUNC_7("|Err|<%lf ", VAR_0 * 65535.0);

    if (!FUNC_0(VAR_2, VAR_1)) return 0;

    FUNC_4(FUNC_1(), VAR_2);
    return 1;
}
