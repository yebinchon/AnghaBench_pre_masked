
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
struct TYPE_3__ {int * KTone; int * cmyk2cmyk; } ;
typedef TYPE_1__ GrayOnlyParams ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,int*,int *,int *,int *,int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int ,int,int,int*,int *,int *,int *,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,int ,int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_9 (int ,int,int,int,int *) ;
 int FUNC_10 (int ,int *,int ,void*,int ) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static
cmsPipeline* FUNC_12(cmsContext VAR_3,
                                          cmsUInt32Number VAR_4,
                                          cmsUInt32Number VAR_5[],
                                          cmsHPROFILE VAR_6[],
                                          cmsBool VAR_7[],
                                          cmsFloat64Number VAR_8[],
                                          cmsUInt32Number VAR_9)
{
    GrayOnlyParams VAR_10;
    cmsPipeline* VAR_11;
    cmsUInt32Number VAR_12[256];
    cmsStage* VAR_13;
    cmsUInt32Number VAR_14, VAR_15;



    if (VAR_4 < 1 || VAR_4 > 255) return ((void*)0);


    for (VAR_14=0; VAR_14 < VAR_4; VAR_14++)
        VAR_12[VAR_14] = FUNC_1(VAR_5[VAR_14]);


    if (FUNC_5(VAR_3, VAR_6[0]) != VAR_2 ||
        FUNC_5(VAR_3, VAR_6[VAR_4-1]) != VAR_2)
           return FUNC_0(VAR_3, VAR_4, VAR_12, VAR_6, VAR_7, VAR_8, VAR_9);

    FUNC_11(&VAR_10, 0, sizeof(VAR_10));


    VAR_11 = FUNC_6(VAR_3, 4, 4);
    if (VAR_11 == ((void*)0)) return ((void*)0);


    VAR_10.cmyk2cmyk = FUNC_0(VAR_3,
        VAR_4,
        VAR_12,
        VAR_6,
        VAR_7,
        VAR_8,
        VAR_9);

    if (VAR_10.cmyk2cmyk == ((void*)0)) goto Error;


    VAR_10.KTone = FUNC_2(VAR_3,
        4096,
        VAR_4,
        VAR_12,
        VAR_6,
        VAR_7,
        VAR_8,
        VAR_9);

    if (VAR_10.KTone == ((void*)0)) goto Error;



    VAR_15 = FUNC_3(VAR_3, VAR_2, VAR_9);


    VAR_13 = FUNC_9(VAR_3, VAR_15, 4, 4, ((void*)0));
    if (VAR_13 == ((void*)0)) goto Error;


    if (!FUNC_8(VAR_3, VAR_11, VAR_1, VAR_13))
        goto Error;


    if (!FUNC_10(VAR_3, VAR_13, VAR_0, (void*) &VAR_10, 0))
        goto Error;


    FUNC_7(VAR_3, VAR_10.cmyk2cmyk);
    FUNC_4(VAR_3, VAR_10.KTone);

    return VAR_11;

Error:

    if (VAR_10.cmyk2cmyk != ((void*)0)) FUNC_7(VAR_3, VAR_10.cmyk2cmyk);
    if (VAR_10.KTone != ((void*)0)) FUNC_4(VAR_3, VAR_10.KTone);
    if (VAR_11 != ((void*)0)) FUNC_7(VAR_3, VAR_11);
    return ((void*)0);

}
