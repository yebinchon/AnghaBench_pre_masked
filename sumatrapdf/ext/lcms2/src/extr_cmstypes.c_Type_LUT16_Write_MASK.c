
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
struct TYPE_15__ {scalar_t__ Type; struct TYPE_15__* Next; scalar_t__ Data; } ;
typedef TYPE_4__ cmsStage ;
struct TYPE_16__ {TYPE_4__* Elements; } ;
typedef TYPE_5__ cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_17__ {TYPE_2__** TheCurves; } ;
typedef TYPE_6__ _cmsStageToneCurvesData ;
struct TYPE_18__ {int* Double; } ;
typedef TYPE_7__ _cmsStageMatrixData ;
struct TYPE_14__ {int T; } ;
struct TYPE_19__ {TYPE_3__ Tab; TYPE_1__* Params; } ;
typedef TYPE_8__ _cmsStageCLutData ;
struct TYPE_13__ {scalar_t__ nEntries; } ;
struct TYPE_12__ {scalar_t__* nSamples; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_6__*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int ,int *,scalar_t__,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_6 (int ,TYPE_5__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int ,int ,char*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_10(cmsContext VAR_6, struct _cms_typehandler_struct* VAR_7, cmsIOHANDLER* VAR_8, void* VAR_9, cmsUInt32Number VAR_10)
{
    cmsUInt32Number VAR_11;
    cmsPipeline* VAR_12 = (cmsPipeline*) VAR_9;
    cmsStage* VAR_13;
    _cmsStageToneCurvesData* VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
    _cmsStageMatrixData* VAR_16 = ((void*)0);
    _cmsStageCLutData* VAR_17 = ((void*)0);
    cmsUInt32Number VAR_18, VAR_19, VAR_20, VAR_21;
    FUNC_8(VAR_7);


    VAR_13 = VAR_12 -> Elements;
    if (VAR_13 != ((void*)0) && VAR_13 ->Type == VAR_5) {

        VAR_16 = (_cmsStageMatrixData*) VAR_13 ->Data;
        VAR_13 = VAR_13 -> Next;
    }


    if (VAR_13 != ((void*)0) && VAR_13 ->Type == VAR_4) {
        VAR_14 = (_cmsStageToneCurvesData*) VAR_13 ->Data;
        VAR_13 = VAR_13 -> Next;
    }

    if (VAR_13 != ((void*)0) && VAR_13 ->Type == VAR_3) {
        VAR_17 = (_cmsStageCLutData*) VAR_13 -> Data;
        VAR_13 = VAR_13 ->Next;
    }

    if (VAR_13 != ((void*)0) && VAR_13 ->Type == VAR_4) {
        VAR_15 = (_cmsStageToneCurvesData*) VAR_13 ->Data;
        VAR_13 = VAR_13 -> Next;
    }


    if (VAR_13 != ((void*)0)) {
        FUNC_7(VAR_6, VAR_2, "LUT is not suitable to be saved as LUT16");
        return VAR_0;
    }

    VAR_19 = FUNC_5(VAR_6, VAR_12);
    VAR_20 = FUNC_6(VAR_6, VAR_12);

    if (VAR_17 == ((void*)0))
        VAR_21 = 0;
    else
        VAR_21 = VAR_17->Params->nSamples[0];

    if (!FUNC_4(VAR_6, VAR_8, (cmsUInt8Number) VAR_19)) return VAR_0;
    if (!FUNC_4(VAR_6, VAR_8, (cmsUInt8Number) VAR_20)) return VAR_0;
    if (!FUNC_4(VAR_6, VAR_8, (cmsUInt8Number) VAR_21)) return VAR_0;
    if (!FUNC_4(VAR_6, VAR_8, 0)) return VAR_0;


    if (VAR_16 != ((void*)0)) {

        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[0])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[1])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[2])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[3])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[4])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[5])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[6])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[7])) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, VAR_16 -> Double[8])) return VAR_0;
    }
    else {

        if (!FUNC_1(VAR_6, VAR_8, 1)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 1)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 0)) return VAR_0;
        if (!FUNC_1(VAR_6, VAR_8, 1)) return VAR_0;
    }


    if (VAR_14 != ((void*)0)) {
        if (!FUNC_3(VAR_6, VAR_8, (cmsUInt16Number) VAR_14 ->TheCurves[0]->nEntries)) return VAR_0;
    } else {
            if (!FUNC_3(VAR_6, VAR_8, 2)) return VAR_0;
    }

    if (VAR_15 != ((void*)0)) {
        if (!FUNC_3(VAR_6, VAR_8, (cmsUInt16Number) VAR_15 ->TheCurves[0]->nEntries)) return VAR_0;
    } else {
        if (!FUNC_3(VAR_6, VAR_8, 2)) return VAR_0;

    }



    if (VAR_14 != ((void*)0)) {
        if (!FUNC_0(VAR_6, VAR_8, VAR_14)) return VAR_0;
    }
    else {
        for (VAR_18=0; VAR_18 < VAR_19; VAR_18++) {

            if (!FUNC_3(VAR_6, VAR_8, 0)) return VAR_0;
            if (!FUNC_3(VAR_6, VAR_8, 0xffff)) return VAR_0;
        }
    }

    VAR_11 = FUNC_9(VAR_20, VAR_21, VAR_19);
    if (VAR_11 == (cmsUInt32Number) -1) return VAR_0;
    if (VAR_11 > 0) {

        if (VAR_17 != ((void*)0)) {
            if (!FUNC_2(VAR_6, VAR_8, VAR_11, VAR_17->Tab.T)) return VAR_0;
        }
    }


    if (VAR_15 != ((void*)0)) {
        if (!FUNC_0(VAR_6, VAR_8, VAR_15)) return VAR_0;
    }
    else {
        for (VAR_18=0; VAR_18 < VAR_20; VAR_18++) {

            if (!FUNC_3(VAR_6, VAR_8, 0)) return VAR_0;
            if (!FUNC_3(VAR_6, VAR_8, 0xffff)) return VAR_0;
        }
    }

    return VAR_1;

    FUNC_8(VAR_10);
}
