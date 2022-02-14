
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_41__ {int * Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
struct TYPE_42__ {scalar_t__ Data; } ;
typedef TYPE_2__ cmsStage ;
struct TYPE_43__ {size_t InputChannels; int OutputChannels; } ;
typedef TYPE_3__ cmsPipeline ;
typedef size_t cmsFloat64Number ;
typedef double cmsFloat32Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsColorSpaceSignature ;
typedef size_t cmsBool ;
struct TYPE_44__ {size_t nCurves; TYPE_1__** TheCurves; } ;
typedef TYPE_4__ _cmsStageToneCurvesData ;
struct TYPE_45__ {int Params; } ;
typedef TYPE_5__ _cmsStageCLutData ;
typedef int TransReverse ;
typedef int Trans ;
typedef int Prelin8Data ;
typedef int Prelin16Data ;


 size_t VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,scalar_t__,scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_2 (int ,int ,int,TYPE_1__**,int,int *) ;
 int VAR_9 ;
 int * FUNC_3 (int ,int ,TYPE_1__**) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 size_t VAR_10 ;
 scalar_t__ FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (size_t) ;
 scalar_t__ FUNC_8 (size_t) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,TYPE_3__*,int ,void*,int ,int ) ;
 int FUNC_11 (double) ;
 size_t FUNC_12 (int ,scalar_t__,size_t) ;
 TYPE_1__** FUNC_13 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_1__* FUNC_14 (int ,size_t,int *) ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_15 (int ,TYPE_1__*) ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (int ,TYPE_1__*) ;
 int VAR_16 ;
 TYPE_3__* FUNC_18 (int ,size_t,int ) ;
 TYPE_3__* FUNC_19 (int ,TYPE_3__*) ;
 int FUNC_20 (int ,double*,double*,TYPE_3__*) ;
 int FUNC_21 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_22 (int ,TYPE_3__*) ;
 TYPE_2__* FUNC_23 (int ,TYPE_3__*) ;
 int FUNC_24 (int ,TYPE_3__*,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_25 (int ,size_t,TYPE_1__*) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 TYPE_2__* FUNC_26 (int ,size_t,size_t,int ,int *) ;
 TYPE_2__* FUNC_27 (int ,size_t,TYPE_1__**) ;
 scalar_t__ FUNC_28 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_29 (int ,TYPE_2__*) ;
 int FUNC_30 (int ,TYPE_2__*,int ,void*,int ) ;
 scalar_t__ FUNC_31 (int ,TYPE_2__*) ;
 int FUNC_32 (size_t) ;
 int FUNC_33 (TYPE_1__**,int ,int) ;

__attribute__((used)) static
cmsBool FUNC_34(cmsContext VAR_19, cmsPipeline** VAR_20, cmsUInt32Number VAR_21, cmsUInt32Number* VAR_22, cmsUInt32Number* VAR_23, cmsUInt32Number* VAR_24)
{
    cmsPipeline* VAR_25;
    cmsUInt32Number VAR_26;
    cmsToneCurve *VAR_27[VAR_16], *VAR_28[VAR_16];
    cmsUInt32Number VAR_29, VAR_30;
    cmsFloat32Number VAR_31, VAR_32[VAR_16], VAR_33[VAR_16];
    cmsBool VAR_34, VAR_35;
    cmsPipeline* VAR_36 = ((void*)0), *VAR_37 = ((void*)0);
    cmsStage* VAR_38;
    cmsColorSpaceSignature VAR_39, VAR_40;
    cmsStage* VAR_41;
    cmsStage* VAR_42;
    cmsToneCurve** VAR_43;
    _cmsStageCLutData* VAR_44;



    if (FUNC_8(*VAR_22) || FUNC_8(*VAR_23)) return VAR_0;


    if (FUNC_5(*VAR_22) != VAR_3) return VAR_0;
    if (FUNC_6(*VAR_22)) return VAR_0;

    if (FUNC_5(*VAR_23) != VAR_3) return VAR_0;
    if (FUNC_6(*VAR_23)) return VAR_0;


    if (!FUNC_7(*VAR_22)) {
        if (!(*VAR_24 & VAR_14)) return VAR_0;
    }

    VAR_25 = *VAR_20;


   for (VAR_42 = FUNC_22(VAR_19, VAR_25);
         VAR_42 != ((void*)0);
         VAR_42 = FUNC_29(VAR_19, VAR_42)) {
            if (FUNC_31(VAR_19, VAR_42) == VAR_18) return VAR_0;
    }

    VAR_39 = FUNC_9(VAR_19, (int) FUNC_5(*VAR_22));
    VAR_40 = FUNC_9(VAR_19, (int) FUNC_5(*VAR_23));


    if (VAR_39 == (cmsColorSpaceSignature)0 ||
        VAR_40 == (cmsColorSpaceSignature)0) return VAR_0;

    VAR_26 = FUNC_12(VAR_19, VAR_39, *VAR_24);


    FUNC_33(VAR_27, 0, sizeof(VAR_27));
    FUNC_33(VAR_28, 0, sizeof(VAR_28));




    {
        cmsStage* VAR_45 = FUNC_23(VAR_19, VAR_25);

        if (FUNC_31(VAR_19, VAR_45) == VAR_17) {

            _cmsStageToneCurvesData* VAR_46 = (_cmsStageToneCurvesData*)FUNC_28(VAR_19, VAR_45);
            for (VAR_30 = 0; VAR_30 < VAR_46->nCurves; VAR_30++) {
                if (FUNC_1(VAR_46->TheCurves[VAR_30]))
                    goto Error;
            }
        }
    }

    for (VAR_29 = 0; VAR_29 < VAR_25 ->InputChannels; VAR_29++) {
        VAR_27[VAR_29] = FUNC_14(VAR_19, VAR_2, ((void*)0));
        if (VAR_27[VAR_29] == ((void*)0)) goto Error;
    }


    for (VAR_30=0; VAR_30 < VAR_2; VAR_30++) {

        VAR_31 = (cmsFloat32Number) ((cmsFloat64Number) VAR_30 / (VAR_2 - 1));


        for (VAR_29=0; VAR_29 < VAR_25 ->InputChannels; VAR_29++)
            VAR_32[VAR_29] = VAR_31;


        FUNC_20(VAR_19, VAR_32, VAR_33, VAR_25);


        for (VAR_29=0; VAR_29 < VAR_25 ->InputChannels; VAR_29++)
            VAR_27[VAR_29] ->Table16[VAR_30] = FUNC_11(VAR_33[VAR_29] * 65535.0);
    }


    for (VAR_29 = 0; VAR_29 < VAR_25 ->InputChannels; VAR_29++)
        FUNC_4(VAR_19, VAR_27[VAR_29]);


    VAR_34 = VAR_10;
    VAR_35 = VAR_10;
    for (VAR_29=0; (VAR_34 && (VAR_29 < VAR_25 ->InputChannels)); VAR_29++) {


        if (!FUNC_16(VAR_19, VAR_27[VAR_29]))
            VAR_35 = VAR_0;


        if (!FUNC_17(VAR_19, VAR_27[VAR_29]))
            VAR_34 = VAR_0;

        if (FUNC_1(VAR_27[VAR_29]))
            VAR_34 = VAR_0;
    }


    if (!VAR_34) goto Error;


    for (VAR_29 = 0; VAR_29 < VAR_25 ->InputChannels; VAR_29++) {
        VAR_28[VAR_29] = FUNC_25(VAR_19, VAR_2, VAR_27[VAR_29]);
        if (VAR_28[VAR_29] == ((void*)0)) goto Error;
    }


    VAR_37 = FUNC_19(VAR_19, VAR_25);
    if (VAR_37 == ((void*)0)) goto Error;

    if (!FUNC_24(VAR_19, VAR_37, VAR_12, FUNC_27(VAR_19, VAR_25 ->InputChannels, VAR_28)))
        goto Error;


    VAR_36 = FUNC_18(VAR_19, VAR_25 ->InputChannels, VAR_25 ->OutputChannels);
    if (VAR_36 == ((void*)0)) goto Error;

    VAR_41 = FUNC_27(VAR_19, VAR_25 ->InputChannels, VAR_27);


    if (!FUNC_24(VAR_19, VAR_36, VAR_12, VAR_41))
        goto Error;


    VAR_38 = FUNC_26(VAR_19, VAR_26, VAR_25 ->InputChannels, VAR_25 ->OutputChannels, ((void*)0));


    if (!FUNC_24(VAR_19, VAR_36, VAR_13, VAR_38))
        goto Error;


    if (!FUNC_30(VAR_19, VAR_38, VAR_11, (void*) VAR_37, 0)) goto Error;


    for (VAR_29 = 0; VAR_29 < VAR_25 ->InputChannels; VAR_29++) {

        if (VAR_27[VAR_29]) FUNC_15(VAR_19, VAR_27[VAR_29]);
        if (VAR_28[VAR_29]) FUNC_15(VAR_19, VAR_28[VAR_29]);
    }

    FUNC_21(VAR_19, VAR_37);


    VAR_43 = FUNC_13(VAR_41);
    VAR_44 = (_cmsStageCLutData*) VAR_38 ->Data;


    if (FUNC_7(*VAR_22)) {

        Prelin8Data* VAR_47 = FUNC_3(VAR_19,
                                                VAR_44 ->Params,
                                                VAR_43);
        if (VAR_47 == ((void*)0)) return VAR_0;

        FUNC_10(VAR_19, VAR_36, VAR_8, (void*) VAR_47, VAR_6, VAR_5);

    }
    else
    {
        Prelin16Data* VAR_48 = FUNC_2(VAR_19,
            VAR_44 ->Params,
            3, VAR_43, 3, ((void*)0));
        if (VAR_48 == ((void*)0)) return VAR_0;

        FUNC_10(VAR_19, VAR_36, VAR_7, (void*) VAR_48, VAR_9, VAR_4);

    }


    if (VAR_21 == VAR_1)
        *VAR_24 |= VAR_15;

    if (!(*VAR_24 & VAR_15)) {

        if (!FUNC_0(VAR_19, VAR_36, VAR_39, VAR_40)) {

            return VAR_0;
        }
    }



    FUNC_21(VAR_19, VAR_25);
    *VAR_20 = VAR_36;
    return VAR_10;

Error:

    for (VAR_29 = 0; VAR_29 < VAR_25 ->InputChannels; VAR_29++) {

        if (VAR_27[VAR_29]) FUNC_15(VAR_19, VAR_27[VAR_29]);
        if (VAR_28[VAR_29]) FUNC_15(VAR_19, VAR_28[VAR_29]);
    }

    if (VAR_37 != ((void*)0)) FUNC_21(VAR_19, VAR_37);
    if (VAR_36 != ((void*)0)) FUNC_21(VAR_19, VAR_36);

    return VAR_0;

    FUNC_32(VAR_21);
    FUNC_32(VAR_35);
}
