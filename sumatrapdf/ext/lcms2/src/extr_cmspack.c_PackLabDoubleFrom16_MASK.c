
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
struct TYPE_5__ {int b; int a; int L; } ;
typedef TYPE_1__ cmsCIELab ;
struct TYPE_6__ {int OutputFormat; } ;
typedef TYPE_2__ _cmsTRANSFORM ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_3(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                                    register cmsUInt16Number VAR_2[],
                                    register cmsUInt8Number* VAR_3,
                                    register cmsUInt32Number VAR_4)
{

    if (FUNC_1(VAR_1 -> OutputFormat)) {

        cmsCIELab VAR_5;
        cmsFloat64Number* VAR_6 = (cmsFloat64Number*) VAR_3;
        FUNC_2(VAR_0, &VAR_5, VAR_2);

        VAR_6[0] = VAR_5.L;
        VAR_6[VAR_4] = VAR_5.a;
        VAR_6[VAR_4*2] = VAR_5.b;

        return VAR_3 + sizeof(cmsFloat64Number);
    }
    else {

        FUNC_2(VAR_0, (cmsCIELab*) VAR_3, VAR_2);
        return VAR_3 + (sizeof(cmsCIELab) + FUNC_0(VAR_1 ->OutputFormat) * sizeof(cmsFloat64Number));
    }
}
