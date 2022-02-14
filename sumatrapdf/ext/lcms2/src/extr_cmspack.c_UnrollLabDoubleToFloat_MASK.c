
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef double cmsFloat64Number ;
typedef scalar_t__ cmsFloat32Number ;
typedef int cmsContext ;
struct TYPE_3__ {int InputFormat; } ;
typedef TYPE_1__ _cmsTRANSFORM ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_3(cmsContext VAR_0, _cmsTRANSFORM* VAR_1,
                                       cmsFloat32Number VAR_2[],
                                       cmsUInt8Number* VAR_3,
                                       cmsUInt32Number VAR_4)
{
    cmsFloat64Number* VAR_5 = (cmsFloat64Number*) VAR_3;

    if (FUNC_2(VAR_1 -> InputFormat)) {

        VAR_4 /= FUNC_0(VAR_1->InputFormat);

        VAR_2[0] = (cmsFloat32Number) (VAR_5[0] / 100.0);
        VAR_2[1] = (cmsFloat32Number) ((VAR_5[VAR_4] + 128) / 255.0);
        VAR_2[2] = (cmsFloat32Number) ((VAR_5[VAR_4*2] + 128) / 255.0);

        return VAR_3 + sizeof(cmsFloat64Number);
    }
    else {

        VAR_2[0] = (cmsFloat32Number) (VAR_5[0] / 100.0);
        VAR_2[1] = (cmsFloat32Number) ((VAR_5[1] + 128) / 255.0);
        VAR_2[2] = (cmsFloat32Number) ((VAR_5[2] + 128) / 255.0);

        VAR_3 += sizeof(cmsFloat64Number)*(3 + FUNC_1(VAR_1 ->InputFormat));
        return VAR_3;
    }
}
