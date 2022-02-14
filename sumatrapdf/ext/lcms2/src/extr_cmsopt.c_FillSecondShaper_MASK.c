
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (double) ;
 double FUNC_3 (int ,int *,double) ;

__attribute__((used)) static
void FUNC_4(cmsContext VAR_0, cmsUInt16Number* VAR_1, cmsToneCurve* VAR_2, cmsBool VAR_3)
{
    int VAR_4;
    cmsFloat32Number VAR_5, VAR_6;

    for (VAR_4=0; VAR_4 < 16385; VAR_4++) {

        VAR_5 = (cmsFloat32Number) (VAR_4 / 16384.0);
        VAR_6 = FUNC_3(VAR_0, VAR_2, VAR_5);

        if (VAR_6 < 0)
            VAR_6 = 0;

        if (VAR_6 > 1.0)
            VAR_6 = 1.0;

        if (VAR_3) {





            cmsUInt16Number VAR_7 = FUNC_2(VAR_6 * 65535.0);
            cmsUInt8Number VAR_8 = FUNC_0(VAR_7);

            VAR_1[VAR_4] = FUNC_1(VAR_8);
        }
        else VAR_1[VAR_4] = FUNC_2(VAR_6 * 65535.0);
    }
}
