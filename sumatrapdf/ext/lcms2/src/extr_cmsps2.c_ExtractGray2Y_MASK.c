
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
struct TYPE_6__ {int * Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int * cmsHTRANSFORM ;
typedef scalar_t__ cmsHPROFILE ;
typedef int cmsContext ;
struct TYPE_7__ {double Y; } ;
typedef TYPE_2__ cmsCIEXYZ ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 TYPE_1__* FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,scalar_t__) ;
 int * FUNC_3 (int ,scalar_t__,int ,scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int *,TYPE_2__*,int) ;
 int VAR_2 ;

__attribute__((used)) static
cmsToneCurve* FUNC_7(cmsContext VAR_3, cmsHPROFILE VAR_4, cmsUInt32Number VAR_5)
{
    cmsToneCurve* VAR_6 = FUNC_1(VAR_3, 256, ((void*)0));
    cmsHPROFILE VAR_7 = FUNC_4(VAR_3);
    cmsHTRANSFORM VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_0, VAR_7, VAR_1, VAR_5, VAR_2);
    int VAR_9;

    if (VAR_6 != ((void*)0) && VAR_8 != ((void*)0)) {
        for (VAR_9=0; VAR_9 < 256; VAR_9++) {

            cmsUInt8Number VAR_10 = (cmsUInt8Number) VAR_9;
            cmsCIEXYZ VAR_11;

            FUNC_6(VAR_3, VAR_8, &VAR_10, &VAR_11, 1);

            VAR_6 ->Table16[VAR_9] =FUNC_0(VAR_11.Y * 65535.0);
        }
    }

    if (VAR_8) FUNC_5(VAR_3, VAR_8);
    if (VAR_7) FUNC_2(VAR_3, VAR_7);
    return VAR_6;
}
