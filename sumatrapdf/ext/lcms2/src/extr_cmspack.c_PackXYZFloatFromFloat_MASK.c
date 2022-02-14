
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsFloat32Number ;
typedef int cmsContext ;
struct TYPE_3__ {int OutputFormat; } ;
typedef TYPE_1__ _cmsTRANSFORM ;


 int VAR_0 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_3(cmsContext VAR_1, _cmsTRANSFORM* VAR_2,
                                      cmsFloat32Number VAR_3[],
                                      cmsUInt8Number* VAR_4,
                                      cmsUInt32Number VAR_5)
{
    cmsFloat32Number* VAR_6 = (cmsFloat32Number*) VAR_4;

    if (FUNC_2(VAR_2 -> OutputFormat)) {

        VAR_5 /= FUNC_0(VAR_2->OutputFormat);

        VAR_6[0] = (cmsFloat32Number) (VAR_3[0] * VAR_0);
        VAR_6[VAR_5] = (cmsFloat32Number) (VAR_3[1] * VAR_0);
        VAR_6[VAR_5*2] = (cmsFloat32Number) (VAR_3[2] * VAR_0);

        return VAR_4 + sizeof(cmsFloat32Number);
    }
    else {

        VAR_6[0] = (cmsFloat32Number) (VAR_3[0] * VAR_0);
        VAR_6[1] = (cmsFloat32Number) (VAR_3[1] * VAR_0);
        VAR_6[2] = (cmsFloat32Number) (VAR_3[2] * VAR_0);

        return VAR_4 + (sizeof(cmsFloat32Number)*3 + FUNC_1(VAR_2 ->OutputFormat) * sizeof(cmsFloat32Number));
    }

}
