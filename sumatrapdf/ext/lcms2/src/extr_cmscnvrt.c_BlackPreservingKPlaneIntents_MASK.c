
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int bp ;
struct TYPE_3__ {double MaxTAC; int * LabK2cmyk; int * KTone; int * hProofOutput; int * cmyk2Lab; int * cmyk2cmyk; scalar_t__ MaxError; } ;
typedef TYPE_1__ PreserveKPlaneParams ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int,int*,int *,int *,int *,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int ,int,int,int*,int *,int *,int *,int) ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int *) ;
 void* FUNC_10 (int ,int ,int,int ,int,int ,int) ;
 int FUNC_11 (int ,int *) ;
 double FUNC_12 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;
 int * FUNC_16 (int ,int,int) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int *,int ,int *) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int * FUNC_19 (int ,int,int,int,int *) ;
 int FUNC_20 (int ,int *,int ,void*,int ) ;
 int FUNC_21 (TYPE_1__*,int ,int) ;

__attribute__((used)) static
cmsPipeline* FUNC_22(cmsContext VAR_8,
                                          cmsUInt32Number VAR_9,
                                          cmsUInt32Number VAR_10[],
                                          cmsHPROFILE VAR_11[],
                                          cmsBool VAR_12[],
                                          cmsFloat64Number VAR_13[],
                                          cmsUInt32Number VAR_14)
{
    PreserveKPlaneParams VAR_15;
    cmsPipeline* VAR_16 = ((void*)0);
    cmsUInt32Number VAR_17[256];
    cmsStage* VAR_18;
    cmsUInt32Number VAR_19, VAR_20;
    cmsHPROFILE VAR_21;


    if (VAR_9 < 1 || VAR_9 > 255) return ((void*)0);


    for (VAR_19=0; VAR_19 < VAR_9; VAR_19++)
        VAR_17[VAR_19] = FUNC_4(VAR_10[VAR_19]);


    if (FUNC_14(VAR_8, VAR_11[0]) != VAR_6 ||
        !(FUNC_14(VAR_8, VAR_11[VAR_9-1]) == VAR_6 ||
        FUNC_15(VAR_8, VAR_11[VAR_9-1]) == VAR_7))
           return FUNC_2(VAR_8, VAR_9, VAR_17, VAR_11, VAR_12, VAR_13, VAR_14);


    VAR_16 = FUNC_16(VAR_8, 4, 4);
    if (VAR_16 == ((void*)0)) return ((void*)0);


    FUNC_21(&VAR_15, 0, sizeof(VAR_15));



    VAR_15.LabK2cmyk = FUNC_6(VAR_8, VAR_11[VAR_9-1], VAR_1);
    if (VAR_15.LabK2cmyk == ((void*)0)) goto Cleanup;


    VAR_15.MaxTAC = FUNC_12(VAR_8, VAR_11[VAR_9-1]) / 100.0;
    if (VAR_15.MaxTAC <= 0) goto Cleanup;



    VAR_15.cmyk2cmyk = FUNC_2(VAR_8,
                                         VAR_9,
                                         VAR_17,
                                         VAR_11,
                                         VAR_12,
                                         VAR_13,
                                         VAR_14);
    if (VAR_15.cmyk2cmyk == ((void*)0)) goto Cleanup;


    VAR_15.KTone = FUNC_5(VAR_8, 4096, VAR_9,
                                   VAR_17,
                                   VAR_11,
                                   VAR_12,
                                   VAR_13,
                                   VAR_14);
    if (VAR_15.KTone == ((void*)0)) goto Cleanup;


    VAR_21 = FUNC_9(VAR_8, ((void*)0));
    VAR_15.hProofOutput = FUNC_10(VAR_8, VAR_11[VAR_9-1],
                                         FUNC_1(4)|FUNC_0(2), VAR_21, VAR_2,
                                         VAR_1,
                                         VAR_4|VAR_5);
    if ( VAR_15.hProofOutput == ((void*)0)) goto Cleanup;


    VAR_15.cmyk2Lab = FUNC_10(VAR_8, VAR_11[VAR_9-1],
                                         FUNC_3(1)|FUNC_1(4)|FUNC_0(4), VAR_21,
                                         FUNC_3(1)|FUNC_1(3)|FUNC_0(4),
                                         VAR_1,
                                         VAR_4|VAR_5);
    if (VAR_15.cmyk2Lab == ((void*)0)) goto Cleanup;
    FUNC_8(VAR_8, VAR_21);


    VAR_15.MaxError = 0;


    VAR_20 = FUNC_7(VAR_8, VAR_6, VAR_14);


    VAR_18 = FUNC_19(VAR_8, VAR_20, 4, 4, ((void*)0));
    if (VAR_18 == ((void*)0)) goto Cleanup;

    if (!FUNC_18(VAR_8, VAR_16, VAR_3, VAR_18))
        goto Cleanup;

    FUNC_20(VAR_8, VAR_18, VAR_0, (void*) &VAR_15, 0);

Cleanup:

    if (VAR_15.cmyk2cmyk) FUNC_17(VAR_8, VAR_15.cmyk2cmyk);
    if (VAR_15.cmyk2Lab) FUNC_11(VAR_8, VAR_15.cmyk2Lab);
    if (VAR_15.hProofOutput) FUNC_11(VAR_8, VAR_15.hProofOutput);

    if (VAR_15.KTone) FUNC_13(VAR_8, VAR_15.KTone);
    if (VAR_15.LabK2cmyk) FUNC_17(VAR_8, VAR_15.LabK2cmyk);

    return VAR_16;
}
