
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef scalar_t__ cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
struct TYPE_9__ {scalar_t__ Type; struct TYPE_9__* Next; scalar_t__ Data; } ;
typedef TYPE_3__ cmsStage ;
struct TYPE_10__ {scalar_t__ OutputChannels; scalar_t__ InputChannels; TYPE_3__* Elements; } ;
typedef TYPE_4__ cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int _cmsStageToneCurvesData ;
struct TYPE_11__ {int* Double; } ;
typedef TYPE_5__ _cmsStageMatrixData ;
struct TYPE_8__ {int * T; } ;
struct TYPE_12__ {TYPE_2__ Tab; TYPE_1__* Params; } ;
typedef TYPE_6__ _cmsStageCLutData ;
struct TYPE_7__ {scalar_t__* nSamples; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,scalar_t__,int *) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_7(cmsContext VAR_6, struct _cms_typehandler_struct* VAR_7, cmsIOHANDLER* VAR_8, void* VAR_9, cmsUInt32Number VAR_10)
{
    cmsUInt32Number VAR_11, VAR_12;
    cmsUInt8Number VAR_13;
    cmsPipeline* VAR_14 = (cmsPipeline*) VAR_9;
    cmsStage* VAR_15;
    _cmsStageToneCurvesData* VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
    _cmsStageMatrixData* VAR_18 = ((void*)0);
    _cmsStageCLutData* VAR_19 = ((void*)0);
    cmsUInt32Number VAR_20;
    FUNC_5(VAR_7);


    VAR_15 = VAR_14 -> Elements;
    if (VAR_15 ->Type == VAR_5) {

        VAR_18 = (_cmsStageMatrixData*) VAR_15 ->Data;
        VAR_15 = VAR_15 -> Next;
    }

    if (VAR_15 != ((void*)0) && VAR_15 ->Type == VAR_4) {
        VAR_16 = (_cmsStageToneCurvesData*) VAR_15 ->Data;
        VAR_15 = VAR_15 -> Next;
    }

    if (VAR_15 != ((void*)0) && VAR_15 ->Type == VAR_3) {
        VAR_19 = (_cmsStageCLutData*) VAR_15 -> Data;
        VAR_15 = VAR_15 ->Next;
    }

    if (VAR_15 != ((void*)0) && VAR_15 ->Type == VAR_4) {
        VAR_17 = (_cmsStageToneCurvesData*) VAR_15 ->Data;
        VAR_15 = VAR_15 -> Next;
    }


    if (VAR_15 != ((void*)0)) {
        FUNC_4(VAR_6, VAR_2, "LUT is not suitable to be saved as LUT8");
        return VAR_0;
    }


    if (VAR_19 == ((void*)0))
        VAR_20 = 0;
    else
        VAR_20 = VAR_19->Params->nSamples[0];

    if (!FUNC_3(VAR_6, VAR_8, (cmsUInt8Number) VAR_14 ->InputChannels)) return VAR_0;
    if (!FUNC_3(VAR_6, VAR_8, (cmsUInt8Number) VAR_14 ->OutputChannels)) return VAR_0;
    if (!FUNC_3(VAR_6, VAR_8, (cmsUInt8Number) VAR_20)) return VAR_0;
    if (!FUNC_3(VAR_6, VAR_8, 0)) return VAR_0;


    if (VAR_18 != ((void*)0)) {

        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[0])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[1])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[2])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[3])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[4])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[5])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[6])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[7])) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, VAR_18 -> Double[8])) return VAR_0;

    }
    else {

        if (!FUNC_2(VAR_6, VAR_8, 1)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 1)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_2(VAR_6, VAR_8, 1)) return VAR_0;
    }


    if (!FUNC_1(VAR_6, VAR_8, VAR_14 ->InputChannels, VAR_16)) return VAR_0;

    VAR_12 = FUNC_6(VAR_14->OutputChannels, VAR_20, VAR_14 ->InputChannels);
    if (VAR_12 == (cmsUInt32Number) -1) return VAR_0;
    if (VAR_12 > 0) {


        if (VAR_19 != ((void*)0)) {

            for (VAR_11=0; VAR_11 < VAR_12; VAR_11++) {

                VAR_13 = (cmsUInt8Number) FUNC_0(VAR_19 ->Tab.T[VAR_11]);
                if (!FUNC_3(VAR_6, VAR_8, VAR_13)) return VAR_0;
            }
        }
    }


    if (!FUNC_1(VAR_6, VAR_8, VAR_14 ->OutputChannels, VAR_17)) return VAR_0;

    return VAR_1;

    FUNC_5(VAR_10);
}
