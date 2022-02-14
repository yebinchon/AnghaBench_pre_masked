
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
struct TYPE_5__ {int Flag; int nChannels; TYPE_1__* Channels; } ;
typedef TYPE_2__ cmsScreening ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
struct TYPE_4__ {int SpotShape; int ScreenAngle; int Frequency; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int*) ;
 int VAR_0 ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static
void *FUNC_5(cmsContext VAR_1, struct _cms_typehandler_struct* VAR_2, cmsIOHANDLER* VAR_3, cmsUInt32Number* VAR_4, cmsUInt32Number VAR_5)
{
    cmsScreening* VAR_6 = ((void*)0);
    cmsUInt32Number VAR_7;

    VAR_6 = (cmsScreening*) FUNC_1(VAR_1, sizeof(cmsScreening));
    if (VAR_6 == ((void*)0)) return ((void*)0);

    *VAR_4 = 0;

    if (!FUNC_3(VAR_1, VAR_3, &VAR_6 ->Flag)) goto Error;
    if (!FUNC_3(VAR_1, VAR_3, &VAR_6 ->nChannels)) goto Error;

    if (VAR_6 ->nChannels > VAR_0 - 1)
        VAR_6 ->nChannels = VAR_0 - 1;

    for (VAR_7=0; VAR_7 < VAR_6 ->nChannels; VAR_7++) {

        if (!FUNC_2(VAR_1, VAR_3, &VAR_6 ->Channels[VAR_7].Frequency)) goto Error;
        if (!FUNC_2(VAR_1, VAR_3, &VAR_6 ->Channels[VAR_7].ScreenAngle)) goto Error;
        if (!FUNC_3(VAR_1, VAR_3, &VAR_6 ->Channels[VAR_7].SpotShape)) goto Error;
    }


    *VAR_4 = 1;

    return (void*) VAR_6;

Error:
    if (VAR_6 != ((void*)0))
        FUNC_0(VAR_1, VAR_6);

    return ((void*)0);
    FUNC_4(VAR_2);
    FUNC_4(VAR_5);
}
