
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_5__ {size_t dwFlags; size_t nInputs; size_t nOutputs; size_t* nSamples; size_t* Domain; size_t* opta; void const* Table; } ;
typedef TYPE_1__ cmsInterpParams ;
typedef int cmsContext ;


 size_t VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,char*,size_t,size_t) ;

cmsInterpParams* FUNC_4(cmsContext VAR_3,
                                           const cmsUInt32Number VAR_4[],
                                           cmsUInt32Number VAR_5, cmsUInt32Number VAR_6,
                                           const void *VAR_7,
                                           cmsUInt32Number VAR_8)
{
    cmsInterpParams* VAR_9;
    cmsUInt32Number VAR_10;


    if (VAR_5 > VAR_0) {
             FUNC_3(VAR_3, VAR_1, "Too many input channels (%d channels, max=%d)", VAR_5, VAR_0);
            return ((void*)0);
    }


    VAR_9 = (cmsInterpParams*) FUNC_1(VAR_3, sizeof(cmsInterpParams));
    if (VAR_9 == ((void*)0)) return ((void*)0);


    VAR_9 -> dwFlags = VAR_8;
    VAR_9 -> nInputs = VAR_5;
    VAR_9 -> nOutputs = VAR_6;
    VAR_9 ->Table = VAR_7;


    for (VAR_10=0; VAR_10 < VAR_5; VAR_10++) {

        VAR_9 -> nSamples[VAR_10] = VAR_4[VAR_10];
        VAR_9 -> Domain[VAR_10] = VAR_4[VAR_10] - 1;
    }


    VAR_9 -> opta[0] = VAR_9 -> nOutputs;
    for (VAR_10=1; VAR_10 < VAR_5; VAR_10++)
        VAR_9 ->opta[VAR_10] = VAR_9 ->opta[VAR_10-1] * VAR_4[VAR_5-VAR_10];


    if (!FUNC_2(VAR_3, VAR_9)) {
         FUNC_3(VAR_3, VAR_2, "Unsupported interpolation (%d->%d channels)", VAR_5, VAR_6);
        FUNC_0(VAR_3, VAR_9);
        return ((void*)0);
    }


    return VAR_9;
}
