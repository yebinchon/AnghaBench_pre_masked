
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef scalar_t__ cmsFloat32Number ;
typedef int cmsContext ;
struct TYPE_5__ {int b; int a; int L; } ;
typedef TYPE_1__ cmsCIELab ;
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
    cmsCIELab VAR_5;
    FUNC_3(VAR_0, &VAR_5, VAR_2);

    if (FUNC_2(VAR_1 -> OutputFormat)) {

        cmsFloat32Number* VAR_6 = (cmsFloat32Number*) VAR_3;

        VAR_4 /= FUNC_0(VAR_1->OutputFormat);

        VAR_6[0] = (cmsFloat32Number)VAR_5.L;
        VAR_6[VAR_4] = (cmsFloat32Number)VAR_5.a;
        VAR_6[VAR_4*2] = (cmsFloat32Number)VAR_5.b;

        return VAR_3 + sizeof(cmsFloat32Number);
    }
    else {

       ((cmsFloat32Number*) VAR_3)[0] = (cmsFloat32Number) VAR_5.L;
       ((cmsFloat32Number*) VAR_3)[1] = (cmsFloat32Number) VAR_5.a;
       ((cmsFloat32Number*) VAR_3)[2] = (cmsFloat32Number) VAR_5.b;

        return VAR_3 + (3 + FUNC_1(VAR_1 ->OutputFormat)) * sizeof(cmsFloat32Number);
    }
}
