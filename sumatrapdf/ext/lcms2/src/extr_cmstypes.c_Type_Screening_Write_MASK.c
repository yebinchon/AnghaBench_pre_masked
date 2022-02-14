
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
struct TYPE_4__ {size_t Flag; size_t nChannels; TYPE_1__* Channels; } ;
typedef TYPE_2__ cmsScreening ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_3__ {size_t SpotShape; int ScreenAngle; int Frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsScreening* VAR_7 = (cmsScreening* ) VAR_5;
    cmsUInt32Number VAR_8;

    if (!FUNC_1(VAR_2, VAR_4, VAR_7 ->Flag)) return VAR_0;
    if (!FUNC_1(VAR_2, VAR_4, VAR_7 ->nChannels)) return VAR_0;

    for (VAR_8=0; VAR_8 < VAR_7 ->nChannels; VAR_8++) {

        if (!FUNC_0(VAR_2, VAR_4, VAR_7 ->Channels[VAR_8].Frequency)) return VAR_0;
        if (!FUNC_0(VAR_2, VAR_4, VAR_7 ->Channels[VAR_8].ScreenAngle)) return VAR_0;
        if (!FUNC_1(VAR_2, VAR_4, VAR_7 ->Channels[VAR_8].SpotShape)) return VAR_0;
    }

    return VAR_1;

    FUNC_2(VAR_6);
    FUNC_2(VAR_3);
}
