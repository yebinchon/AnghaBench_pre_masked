
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int res ;
typedef int cmsVEC3 ;
typedef int cmsUInt32Number ;
typedef int cmsStage ;
struct TYPE_11__ {int OutputChannels; int InputChannels; } ;
typedef TYPE_1__ cmsPipeline ;
typedef int cmsMAT3 ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;
struct TYPE_12__ {int TheCurves; } ;
typedef TYPE_2__ _cmsStageToneCurvesData ;
struct TYPE_13__ {int * Offset; scalar_t__ Double; } ;
typedef TYPE_3__ _cmsStageMatrixData ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_1__**,int ,int *,int *,int *) ;
 int FUNC_1 (int ,TYPE_1__*,int ,int *,int *,int ,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*,int,int ,int ,int ,int **,int **,int **,...) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int ,TYPE_1__*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,int,int,int const*,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,scalar_t__,int) ;

__attribute__((used)) static
cmsBool FUNC_14(cmsContext VAR_7, cmsPipeline** VAR_8, cmsUInt32Number VAR_9, cmsUInt32Number* VAR_10, cmsUInt32Number* VAR_11, cmsUInt32Number* VAR_12)
{
       cmsStage* VAR_13, *VAR_14;
       cmsStage* VAR_15, *VAR_16;
       cmsMAT3 VAR_17;
       cmsBool VAR_18;
       cmsPipeline* VAR_19, *VAR_20;
       cmsFloat64Number* VAR_21;


       if (FUNC_2(*VAR_10) != 3 || FUNC_2(*VAR_11) != 3) return VAR_0;


       if (!FUNC_3(*VAR_10)) return VAR_0;


       VAR_20 = *VAR_8;
       VAR_18 = VAR_0;
       if (FUNC_7(VAR_7, VAR_20, 4,
              VAR_5, VAR_6, VAR_6, VAR_5,
              &VAR_13, &VAR_15, &VAR_16, &VAR_14)) {


              _cmsStageMatrixData* VAR_22 = (_cmsStageMatrixData*)FUNC_11(VAR_7, VAR_15);
              _cmsStageMatrixData* VAR_23 = (_cmsStageMatrixData*)FUNC_11(VAR_7, VAR_16);


              if (VAR_22->Offset != ((void*)0)) return VAR_0;


              FUNC_5(VAR_7, &VAR_17, (cmsMAT3*)VAR_23->Double, (cmsMAT3*)VAR_22->Double);


              VAR_21 = VAR_23->Offset;


              if (FUNC_4(VAR_7, &VAR_17) && VAR_21 == ((void*)0)) {


                     VAR_18 = VAR_1;
              }

       }
       else {

              if (FUNC_7(VAR_7, VAR_20, 3,
                     VAR_5, VAR_6, VAR_5,
                     &VAR_13, &VAR_15, &VAR_14)) {

                     _cmsStageMatrixData* VAR_24 = (_cmsStageMatrixData*)FUNC_11(VAR_7, VAR_15);


                     FUNC_13(&VAR_17, VAR_24->Double, sizeof(VAR_17));


                     VAR_21 = VAR_24->Offset;

                     if (FUNC_4(VAR_7, &VAR_17) && VAR_21 == ((void*)0)) {


                            VAR_18 = VAR_1;
                     }
              }
              else
                     return VAR_0;

       }


    VAR_19 = FUNC_6(VAR_7, VAR_20 ->InputChannels, VAR_20 ->OutputChannels);
    if (!VAR_19) return VAR_0;


    if (!FUNC_9(VAR_7, VAR_19, VAR_2, FUNC_12(VAR_7, VAR_13)))
        goto Error;

    if (!VAR_18) {

           if (!FUNC_9(VAR_7, VAR_19, VAR_3, FUNC_10(VAR_7, 3, 3, (const cmsFloat64Number*)&VAR_17, VAR_21)))
                  goto Error;
    }

    if (!FUNC_9(VAR_7, VAR_19, VAR_3, FUNC_12(VAR_7, VAR_14)))
        goto Error;


    if (VAR_18) {

        FUNC_0(VAR_7, &VAR_19, VAR_9, VAR_10, VAR_11, VAR_12);
    }
    else {
        _cmsStageToneCurvesData* VAR_25 = (_cmsStageToneCurvesData*) FUNC_11(VAR_7, VAR_13);
        _cmsStageToneCurvesData* VAR_26 = (_cmsStageToneCurvesData*) FUNC_11(VAR_7, VAR_14);



        *VAR_12 |= VAR_4;


        FUNC_1(VAR_7, VAR_19, VAR_25 ->TheCurves, &VAR_17, (cmsVEC3*) VAR_21, VAR_26->TheCurves, VAR_11);
    }

    FUNC_8(VAR_7, VAR_20);
    *VAR_8 = VAR_19;
    return VAR_1;
Error:

    FUNC_8(VAR_7, VAR_19);
    return VAR_0;
}
