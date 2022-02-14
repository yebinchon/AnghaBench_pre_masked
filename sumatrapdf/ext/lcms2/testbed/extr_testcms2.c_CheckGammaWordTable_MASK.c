
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;
typedef scalar_t__ cmsFloat32Number ;


 int FUNC_0 (int *,double) ;
 int FUNC_1 () ;
 double VAR_0 ;
 int * FUNC_2 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 double FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (double) ;
 double FUNC_7 (scalar_t__,double) ;
 int FUNC_8 (char*,double) ;

__attribute__((used)) static
cmsInt32Number FUNC_9(cmsFloat64Number VAR_1)
{
    cmsUInt16Number VAR_2[1025];
    cmsToneCurve* VAR_3;
    cmsInt32Number VAR_4;
    cmsFloat32Number VAR_5, VAR_6;
    cmsFloat64Number VAR_7, VAR_8;

    for (VAR_4=0; VAR_4 <= 1024; VAR_4++) {

        VAR_5 = (cmsFloat32Number) (VAR_4 / 1024.0);
        VAR_2[VAR_4] = (cmsUInt16Number) FUNC_6(FUNC_7(VAR_5, VAR_1) * 65535.0 + 0.5);
    }

    VAR_3 = FUNC_2(FUNC_1(), 1025, VAR_2);

    VAR_0 = 0.0;
    for (VAR_4=0; VAR_4 <= 0xffff; VAR_4++) {

        VAR_5 = (cmsFloat32Number) (VAR_4 / 65535.0);
        VAR_6 = FUNC_3(FUNC_1(), VAR_3, VAR_5);
        VAR_7 = FUNC_7(VAR_5, VAR_1);

        VAR_8 = FUNC_5(VAR_7 - VAR_6);
        if (VAR_8 > VAR_0) VAR_0 = VAR_8;
    }

    if (VAR_0 > 0) FUNC_8("|Err|<%lf ", VAR_0 * 65535.0);

    if (!FUNC_0(VAR_3, VAR_1)) return 0;

    FUNC_4(FUNC_1(), VAR_3);
    return 1;
}
