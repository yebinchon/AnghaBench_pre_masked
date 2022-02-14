
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_3__ {size_t InputChannels; size_t OutputChannels; scalar_t__ Data; } ;
typedef TYPE_1__ cmsStage ;
typedef int cmsIOHANDLER ;
typedef int cmsFloat32Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_4__ {scalar_t__* Offset; scalar_t__* Double; } ;
typedef TYPE_2__ _cmsStageMatrixData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (size_t) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_2, struct _cms_typehandler_struct* VAR_3, cmsIOHANDLER* VAR_4, void* VAR_5, cmsUInt32Number VAR_6)
{
    cmsUInt32Number VAR_7, VAR_8;
    cmsStage* VAR_9 = (cmsStage*) VAR_5;
    _cmsStageMatrixData* VAR_10 = (_cmsStageMatrixData*) VAR_9 ->Data;

    if (!FUNC_1(VAR_2, VAR_4, (cmsUInt16Number) VAR_9 ->InputChannels)) return VAR_0;
    if (!FUNC_1(VAR_2, VAR_4, (cmsUInt16Number) VAR_9 ->OutputChannels)) return VAR_0;

    VAR_8 = VAR_9 ->InputChannels * VAR_9 ->OutputChannels;

    for (VAR_7=0; VAR_7 < VAR_8; VAR_7++) {
        if (!FUNC_0(VAR_2, VAR_4, (cmsFloat32Number) VAR_10->Double[VAR_7])) return VAR_0;
    }


    for (VAR_7=0; VAR_7 < VAR_9 ->OutputChannels; VAR_7++) {

        if (VAR_10 ->Offset == ((void*)0)) {

               if (!FUNC_0(VAR_2, VAR_4, 0)) return VAR_0;
        }
        else {
               if (!FUNC_0(VAR_2, VAR_4, (cmsFloat32Number) VAR_10->Offset[VAR_7])) return VAR_0;
        }
    }

    return VAR_1;

    FUNC_2(VAR_6);
    FUNC_2(VAR_3);
}
