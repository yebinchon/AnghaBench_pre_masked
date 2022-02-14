
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsS1Fixed14Number ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;


 int FUNC_0 (double) ;
 double FUNC_1 (int ,int *,double) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_0, cmsS1Fixed14Number* VAR_1, cmsToneCurve* VAR_2)
{
    int VAR_3;
    cmsFloat32Number VAR_4, VAR_5;

    for (VAR_3=0; VAR_3 < 256; VAR_3++) {

        VAR_4 = (cmsFloat32Number) (VAR_3 / 255.0);
        VAR_5 = FUNC_1(VAR_0, VAR_2, VAR_4);

        if (VAR_5 < 131072.0)
            VAR_1[VAR_3] = FUNC_0(VAR_5);
        else
            VAR_1[VAR_3] = 0x7fffffff;
    }
}
