
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef float cmsFloat32Number ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int,scalar_t__*) ;
 float FUNC_2 (int ,int *,float) ;
 scalar_t__ FUNC_3 (float) ;

__attribute__((used)) static
cmsToneCurve* FUNC_4(cmsToneCurve* VAR_0, cmsToneCurve* VAR_1)
{
    cmsUInt16Number VAR_2[256];
    cmsFloat32Number VAR_3;
    cmsInt32Number VAR_4;

    for (VAR_4=0; VAR_4 < 256; VAR_4++) {

        VAR_3 = (cmsFloat32Number) VAR_4 / 255.0F;
        VAR_3 = FUNC_2(FUNC_0(), VAR_1, FUNC_2(FUNC_0(), VAR_0, VAR_3));

        VAR_2[VAR_4] = (cmsUInt16Number) FUNC_3(VAR_3 * 65535.0 + 0.5);
    }

    return FUNC_1(FUNC_0(), 256, VAR_2);
}
