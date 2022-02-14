
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int * cmsHPROFILE ;
typedef double cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef scalar_t__ cmsBool ;
struct TYPE_3__ {double Thereshold; void* hReverse; void* hForward; void* hInput; } ;
typedef TYPE_1__ GAMUTCHAIN ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *) ;
 void* FUNC_5 (int ,int,int **,scalar_t__*,int*,double*,int *,int ,int,int,int ) ;
 int * FUNC_6 (int ,int *) ;
 void* FUNC_7 (int ,int *,int,int *,int,int,int ) ;
 int FUNC_8 (int ,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int * FUNC_11 (int ,int,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *,int ,int *) ;
 int FUNC_14 (int ,int ,char*,int) ;
 int * FUNC_15 (int ,int,int,int,int *) ;
 int FUNC_16 (int ,int *,int ,void*,int ) ;
 int FUNC_17 (TYPE_1__*,int ,int) ;

cmsPipeline* FUNC_18(cmsContext VAR_8,
                                          cmsHPROFILE VAR_9[],
                                          cmsBool VAR_10[],
                                          cmsUInt32Number VAR_11[],
                                          cmsFloat64Number VAR_12[],
                                          cmsUInt32Number VAR_13,
                                          cmsHPROFILE VAR_14)
{
    cmsHPROFILE VAR_15;
    cmsPipeline* VAR_16;
    cmsStage* VAR_17;
    cmsUInt32Number VAR_18;
    GAMUTCHAIN VAR_19;
    cmsUInt32Number VAR_20, VAR_21;
    cmsColorSpaceSignature VAR_22;
    cmsUInt32Number VAR_23;
    cmsHPROFILE VAR_24[256];
    cmsBool VAR_25[256];
    cmsFloat64Number VAR_26[256];
    cmsUInt32Number VAR_27[256];

    FUNC_17(&VAR_19, 0, sizeof(GAMUTCHAIN));


    if (VAR_13 <= 0 || VAR_13 > 255) {
        FUNC_14(VAR_8, VAR_5, "Wrong position of PCS. 1..255 expected, %d found.", VAR_13);
        return ((void*)0);
    }

    VAR_15 = FUNC_6(VAR_8, ((void*)0));
    if (VAR_15 == ((void*)0)) return ((void*)0);






    if (FUNC_10(VAR_8, VAR_14)) {

        VAR_19.Thereshold = 1.0;
    }
    else {
        VAR_19.Thereshold = VAR_0;
    }



    for (VAR_23=0; VAR_23 < VAR_13; VAR_23++) {
        VAR_24[VAR_23] = VAR_9[VAR_23];
        VAR_25[VAR_23] = VAR_10[VAR_23];
        VAR_26[VAR_23] = VAR_12[VAR_23];
        VAR_27[VAR_23] = VAR_11[VAR_23];
    }


    VAR_24[VAR_13] = VAR_15;
    VAR_25[VAR_13] = 0;
    VAR_26[VAR_13] = 1.0;
    VAR_27[VAR_13] = VAR_2;


    VAR_22 = FUNC_9(VAR_8, VAR_14);

    VAR_20 = FUNC_3(VAR_8, VAR_22);
    VAR_21 = FUNC_2(VAR_8, VAR_22, VAR_6);
    VAR_18 = (FUNC_1(VAR_20)|FUNC_0(2));


    VAR_19.hInput = FUNC_5(VAR_8,
        VAR_13 + 1,
        VAR_24,
        VAR_25,
        VAR_27,
        VAR_26,
        ((void*)0), 0,
        VAR_18, VAR_3,
        VAR_7);



    VAR_18 = (FUNC_1(VAR_20)|FUNC_0(2));
    VAR_19.hForward = FUNC_7(VAR_8,
        VAR_15, VAR_3,
        VAR_14, VAR_18,
        VAR_2,
        VAR_7);


    VAR_19.hReverse = FUNC_7(VAR_8, VAR_14, VAR_18,
        VAR_15, VAR_3,
        VAR_2,
        VAR_7);



    if (VAR_19.hInput && VAR_19.hForward && VAR_19.hReverse) {




        VAR_16 = FUNC_11(VAR_8, 3, 1);
        if (VAR_16 != ((void*)0)) {

            VAR_17 = FUNC_15(VAR_8, VAR_21, VAR_20, 1, ((void*)0));
            if (!FUNC_13(VAR_8, VAR_16, VAR_4, VAR_17)) {
                FUNC_12(VAR_8, VAR_16);
                VAR_16 = ((void*)0);
            }
            else {
                FUNC_16(VAR_8, VAR_17, VAR_1, (void*) &VAR_19, 0);
            }
        }
    }
    else
        VAR_16 = ((void*)0);


    if (VAR_19.hInput) FUNC_8(VAR_8, VAR_19.hInput);
    if (VAR_19.hForward) FUNC_8(VAR_8, VAR_19.hForward);
    if (VAR_19.hReverse) FUNC_8(VAR_8, VAR_19.hReverse);
    if (VAR_15) FUNC_4(VAR_8, VAR_15);


    return VAR_16;
}
