
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef scalar_t__ cmsFloat64Number ;
typedef int cmsContext ;
struct TYPE_2__ {int hIlimit; int hLab2sRGB; } ;
typedef TYPE_1__ FakeCMYKParams ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__ const*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static
cmsInt32Number FUNC_3(cmsContext VAR_0, register const cmsUInt16Number VAR_1[], cmsUInt16Number VAR_2[], void* VAR_3)
{
    FakeCMYKParams* VAR_4 = (FakeCMYKParams*) VAR_3;
    cmsFloat64Number VAR_5[3], VAR_6[4];
    cmsFloat64Number VAR_7, VAR_8, VAR_9, VAR_10;

    FUNC_1(FUNC_0(), VAR_4 ->hLab2sRGB, VAR_1, VAR_5, 1);

    VAR_7 = 1 - VAR_5[0];
    VAR_8 = 1 - VAR_5[1];
    VAR_9 = 1 - VAR_5[2];

    VAR_10 = (VAR_7 < VAR_8 ? FUNC_2(VAR_7, VAR_9) : FUNC_2(VAR_8, VAR_9));





    VAR_6[0] = VAR_7;
    VAR_6[1] = VAR_8;
    VAR_6[2] = VAR_9;
    VAR_6[3] = VAR_10;

    FUNC_1(FUNC_0(), VAR_4 ->hIlimit, VAR_6, VAR_2, 1);

    return 1;
}
