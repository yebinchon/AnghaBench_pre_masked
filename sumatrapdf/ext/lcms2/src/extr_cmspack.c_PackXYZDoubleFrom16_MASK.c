
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_5__ {int Z; int Y; int X; } ;
typedef TYPE_1__ cmsCIEXYZ ;
struct TYPE_6__ {int OutputFormat; } ;
typedef TYPE_2__ _cmsTRANSFORM ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_4(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                                    register cmsUInt16Number VAR_2[],
                                    register cmsUInt8Number* VAR_3,
                                    register cmsUInt32Number VAR_4)
{
    if (FUNC_2(VAR_1 -> OutputFormat)) {

        cmsCIEXYZ VAR_5;
        cmsFloat64Number* VAR_6 = (cmsFloat64Number*) VAR_3;
        FUNC_3(VAR_0, &VAR_5, VAR_2);

        VAR_4 /= FUNC_0(VAR_1->OutputFormat);

        VAR_6[0] = VAR_5.X;
        VAR_6[VAR_4] = VAR_5.Y;
        VAR_6[VAR_4*2] = VAR_5.Z;

        return VAR_3 + sizeof(cmsFloat64Number);

    }
    else {

        FUNC_3(VAR_0, (cmsCIEXYZ*) VAR_3, VAR_2);

        return VAR_3 + (sizeof(cmsCIEXYZ) + FUNC_1(VAR_1 ->OutputFormat) * sizeof(cmsFloat64Number));
    }
}
