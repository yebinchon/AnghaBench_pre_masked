
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_10__ {TYPE_3__* InterpParams; } ;
typedef TYPE_2__ cmsToneCurve ;
struct TYPE_9__ {void* Lerp16; } ;
struct TYPE_11__ {TYPE_1__ Interpolation; } ;
typedef TYPE_3__ cmsInterpParams ;
typedef int cmsContext ;
typedef void* _cmsInterpFn16 ;
struct TYPE_12__ {size_t nInputs; size_t nOutputs; TYPE_3__** ParamsCurveOut16; void** EvalCurveOut16; void* EvalCLUT; TYPE_3__ const* CLUTparams; TYPE_3__** ParamsCurveIn16; void** EvalCurveIn16; } ;
typedef TYPE_4__ Prelin16Data ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ,size_t,int) ;
 scalar_t__ FUNC_1 (int ,int) ;

__attribute__((used)) static
Prelin16Data* FUNC_2(cmsContext VAR_1,
                               const cmsInterpParams* VAR_2,
                               cmsUInt32Number VAR_3, cmsToneCurve** VAR_4,
                               cmsUInt32Number VAR_5, cmsToneCurve** VAR_6 )
{
    cmsUInt32Number VAR_7;
    Prelin16Data* VAR_8 = (Prelin16Data*)FUNC_1(VAR_1, sizeof(Prelin16Data));
    if (VAR_8 == ((void*)0)) return ((void*)0);

    VAR_8 ->nInputs = VAR_3;
    VAR_8 ->nOutputs = VAR_5;


    for (VAR_7=0; VAR_7 < VAR_3; VAR_7++) {

        if (VAR_4 == ((void*)0)) {
            VAR_8 -> ParamsCurveIn16[VAR_7] = ((void*)0);
            VAR_8 -> EvalCurveIn16[VAR_7] = VAR_0;

        }
        else {
            VAR_8 -> ParamsCurveIn16[VAR_7] = VAR_4[VAR_7] ->InterpParams;
            VAR_8 -> EvalCurveIn16[VAR_7] = VAR_8 ->ParamsCurveIn16[VAR_7]->Interpolation.Lerp16;
        }
    }

    VAR_8 ->CLUTparams = VAR_2;
    VAR_8 ->EvalCLUT = VAR_2 ->Interpolation.Lerp16;


    VAR_8 -> EvalCurveOut16 = (_cmsInterpFn16*) FUNC_0(VAR_1, VAR_5, sizeof(_cmsInterpFn16));
    VAR_8 -> ParamsCurveOut16 = (cmsInterpParams**) FUNC_0(VAR_1, VAR_5, sizeof(cmsInterpParams* ));

    for (VAR_7=0; VAR_7 < VAR_5; VAR_7++) {

        if (VAR_6 == ((void*)0)) {
            VAR_8 ->ParamsCurveOut16[VAR_7] = ((void*)0);
            VAR_8 -> EvalCurveOut16[VAR_7] = VAR_0;
        }
        else {

            VAR_8 ->ParamsCurveOut16[VAR_7] = VAR_6[VAR_7] ->InterpParams;
            VAR_8 -> EvalCurveOut16[VAR_7] = VAR_8 ->ParamsCurveOut16[VAR_7]->Interpolation.Lerp16;
        }
    }

    return VAR_8;
}
