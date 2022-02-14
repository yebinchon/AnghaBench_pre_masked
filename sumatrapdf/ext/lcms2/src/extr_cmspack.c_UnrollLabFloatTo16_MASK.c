
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef void* cmsFloat32Number ;
typedef int cmsContext ;
struct TYPE_5__ {void* b; void* a; void* L; } ;
typedef TYPE_1__ cmsCIELab ;
struct TYPE_6__ {int InputFormat; } ;
typedef TYPE_2__ _cmsTRANSFORM ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static
cmsUInt8Number* FUNC_3(cmsContext VAR_0, register _cmsTRANSFORM* VAR_1,
                                    register cmsUInt16Number VAR_2[],
                                    register cmsUInt8Number* VAR_3,
                                    register cmsUInt32Number VAR_4)
{
    cmsCIELab VAR_5;

    if (FUNC_1(VAR_1 -> InputFormat)) {

        cmsUInt8Number* VAR_6;
        cmsUInt8Number* VAR_7;
        cmsUInt8Number* VAR_8;

        VAR_6 = VAR_3;
        VAR_7 = VAR_3 + VAR_4;
        VAR_8 = VAR_3 + VAR_4 * 2;

        VAR_5.L = *(cmsFloat32Number*)VAR_6;
        VAR_5.a = *(cmsFloat32Number*)VAR_7;
        VAR_5.b = *(cmsFloat32Number*)VAR_8;

        FUNC_2(VAR_0, VAR_2, &VAR_5);
        return VAR_3 + sizeof(cmsFloat32Number);
    }
    else {

        VAR_5.L = ((cmsFloat32Number*) VAR_3)[0];
        VAR_5.a = ((cmsFloat32Number*) VAR_3)[1];
        VAR_5.b = ((cmsFloat32Number*) VAR_3)[2];

        FUNC_2(VAR_0, VAR_2, &VAR_5);
        VAR_3 += (3 + FUNC_0(VAR_1 ->InputFormat)) * sizeof(cmsFloat32Number);
        return VAR_3;
    }
}
