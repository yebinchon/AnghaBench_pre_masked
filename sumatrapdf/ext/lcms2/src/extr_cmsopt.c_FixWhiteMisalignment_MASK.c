
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsToneCurve ;
typedef int cmsStage ;
struct TYPE_5__ {scalar_t__ InputChannels; scalar_t__ OutputChannels; } ;
typedef TYPE_1__ cmsPipeline ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int *) ;
 int FUNC_2 (int ,int **,int *,scalar_t__*) ;
 int ** FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int FUNC_6 (int ,TYPE_1__*,int,int ,int **,...) ;
 int FUNC_7 (int ,int *,int *,TYPE_1__*) ;
 int * FUNC_8 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
cmsBool FUNC_9(cmsContext VAR_5, cmsPipeline* VAR_6, cmsColorSpaceSignature VAR_7, cmsColorSpaceSignature VAR_8)
{
    cmsUInt16Number *VAR_9, *VAR_10;
    cmsUInt16Number VAR_11[VAR_2], VAR_12[VAR_2], VAR_13[VAR_2];
    cmsUInt32Number VAR_14, VAR_15, VAR_16;
    cmsStage *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

    if (!FUNC_2(VAR_7,
        &VAR_9, ((void*)0), &VAR_16)) return VAR_0;

    if (!FUNC_2(VAR_8,
        &VAR_10, ((void*)0), &VAR_15)) return VAR_0;


    if (VAR_6 ->InputChannels != VAR_16) return VAR_0;
    if (VAR_6 ->OutputChannels != VAR_15) return VAR_0;

    FUNC_7(VAR_5, VAR_9, VAR_13, VAR_6);

    if (FUNC_1(VAR_15, VAR_10, VAR_13)) return VAR_1;


    if (!FUNC_6(VAR_5, VAR_6, 3, VAR_4, VAR_3, VAR_4, &VAR_17, &VAR_18, &VAR_19))
        if (!FUNC_6(VAR_5, VAR_6, 2, VAR_4, VAR_3, &VAR_17, &VAR_18))
            if (!FUNC_6(VAR_5, VAR_6, 2, VAR_3, VAR_4, &VAR_18, &VAR_19))
                if (!FUNC_6(VAR_5, VAR_6, 1, VAR_3, &VAR_18))
                    return VAR_0;


    if (VAR_17) {

        cmsToneCurve** VAR_20 = FUNC_3(VAR_17);

        for (VAR_14=0; VAR_14 < VAR_16; VAR_14++) {
            VAR_11[VAR_14] = FUNC_4(VAR_5, VAR_20[VAR_14], VAR_9[VAR_14]);
        }
    }
    else {
        for (VAR_14=0; VAR_14 < VAR_16; VAR_14++)
            VAR_11[VAR_14] = VAR_9[VAR_14];
    }



    if (VAR_19) {

        cmsToneCurve** VAR_21 = FUNC_3(VAR_19);

        for (VAR_14=0; VAR_14 < VAR_15; VAR_14++) {

            cmsToneCurve* VAR_22 = FUNC_8(VAR_5, VAR_21[VAR_14]);
            if (VAR_22 == ((void*)0)) {
                VAR_12[VAR_14] = VAR_10[VAR_14];

            } else {

                VAR_12[VAR_14] = FUNC_4(VAR_5, VAR_22, VAR_10[VAR_14]);
                FUNC_5(VAR_5, VAR_22);
            }
        }
    }
    else {
        for (VAR_14=0; VAR_14 < VAR_15; VAR_14++)
            VAR_12[VAR_14] = VAR_10[VAR_14];
    }


    FUNC_0(VAR_5, VAR_18, VAR_11, VAR_12, VAR_15, VAR_16);

    return VAR_1;
}
