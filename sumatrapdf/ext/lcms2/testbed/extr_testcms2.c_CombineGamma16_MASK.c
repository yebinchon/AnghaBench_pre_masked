
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;


 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int * FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static
cmsToneCurve* FUNC_4(cmsToneCurve* VAR_0, cmsToneCurve* VAR_1)
{
    cmsUInt16Number VAR_2[256];

    cmsInt32Number VAR_3;

    for (VAR_3=0; VAR_3 < 256; VAR_3++) {

        cmsUInt16Number VAR_4;

        VAR_4 = FUNC_1(VAR_3, 256);
        VAR_2[VAR_3] = FUNC_3(FUNC_0(), VAR_1, FUNC_3(FUNC_0(), VAR_0, VAR_4));
    }

    return FUNC_2(FUNC_0(), 256, VAR_2);
}
