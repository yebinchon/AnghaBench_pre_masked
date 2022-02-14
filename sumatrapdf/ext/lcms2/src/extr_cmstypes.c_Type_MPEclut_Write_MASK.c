
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt8Number ;
typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_12__ {scalar_t__ InputChannels; scalar_t__ OutputChannels; scalar_t__ Data; } ;
typedef TYPE_3__ cmsStage ;
struct TYPE_13__ {int (* Write ) (int ,TYPE_4__*,int,scalar_t__*) ;} ;
typedef TYPE_4__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;
struct TYPE_11__ {int * TFloat; } ;
struct TYPE_14__ {scalar_t__ HasFloatValues; size_t nEntries; TYPE_2__ Tab; TYPE_1__* Params; } ;
typedef TYPE_5__ _cmsStageCLutData ;
struct TYPE_10__ {scalar_t__* nSamples; } ;
typedef int Dimensions8 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (int ,TYPE_4__*,int ) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (int ,TYPE_4__*,int,scalar_t__*) ;

__attribute__((used)) static
cmsBool FUNC_5(cmsContext VAR_3, struct _cms_typehandler_struct* VAR_4, cmsIOHANDLER* VAR_5, void* VAR_6, cmsUInt32Number VAR_7)
{
    cmsUInt8Number VAR_8[16];
    cmsUInt32Number VAR_9;
    cmsStage* VAR_10 = (cmsStage*) VAR_6;
    _cmsStageCLutData* VAR_11 = (_cmsStageCLutData*) VAR_10 ->Data;


    if (VAR_10 -> InputChannels > VAR_1) return VAR_0;


    if (VAR_11 ->HasFloatValues == VAR_0) return VAR_0;

    if (!FUNC_1(VAR_3, VAR_5, (cmsUInt16Number) VAR_10 ->InputChannels)) return VAR_0;
    if (!FUNC_1(VAR_3, VAR_5, (cmsUInt16Number) VAR_10 ->OutputChannels)) return VAR_0;

    FUNC_3(VAR_8, 0, sizeof(VAR_8));

    for (VAR_9=0; VAR_9 < VAR_10 ->InputChannels; VAR_9++)
        VAR_8[VAR_9] = (cmsUInt8Number) VAR_11 ->Params ->nSamples[VAR_9];

    if (!VAR_5 ->Write(VAR_3, VAR_5, 16, VAR_8)) return VAR_0;

    for (VAR_9=0; VAR_9 < VAR_11 ->nEntries; VAR_9++) {

        if (!FUNC_0(VAR_3, VAR_5, VAR_11 ->Tab.TFloat[VAR_9])) return VAR_0;
    }

    return VAR_2;

    FUNC_2(VAR_7);
    FUNC_2(VAR_4);
}
