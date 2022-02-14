
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int cmsUInt32Number ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int * cmsHPROFILE ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef scalar_t__ cmsBool ;
struct TYPE_3__ {void* hIlimit; void* sRGB2Lab; void* hLab2sRGB; } ;
typedef TYPE_1__ FakeCMYKParams ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_5 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int ,int ) ;
 int * FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ) ;
 void* FUNC_10 (int ,int *,int,int *,int,int ,int) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ,void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int ,int *,int ,int ) ;
 int * FUNC_14 (int ,int,int) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,int *,int ,int *) ;
 int FUNC_17 (int ,int *,int ) ;
 int FUNC_18 (int ,int *,int ) ;
 int FUNC_19 (int ,int *,int ) ;
 int FUNC_20 (int ,int *,double) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int * FUNC_21 (int ,int,int,int,int *) ;
 int FUNC_22 (int ,int *,int ,TYPE_1__*,int ) ;
 int FUNC_23 (int ,int *,int ,void*) ;

__attribute__((used)) static
cmsHPROFILE FUNC_24(cmsFloat64Number VAR_19, cmsBool VAR_20)
{
    cmsHPROFILE VAR_21;
    cmsPipeline* VAR_22, *VAR_23;
    cmsStage* VAR_24;
    cmsContext VAR_25;
    FakeCMYKParams VAR_26;
    cmsHPROFILE VAR_27, VAR_28, VAR_29;
    cmsUInt32Number VAR_30;

    VAR_25 = FUNC_3();

    if (VAR_20)
        VAR_28 = FUNC_2();
    else
       VAR_28 = FUNC_11(VAR_25);

    VAR_27 = FUNC_8(VAR_25, ((void*)0));
    VAR_29 = FUNC_7(VAR_25, VAR_16, VAR_19);

    VAR_30 = FUNC_4(1) | FUNC_0(0)|FUNC_1(4);
    VAR_26.hLab2sRGB = FUNC_10(VAR_25, VAR_27, VAR_4, VAR_28, VAR_5, VAR_1, VAR_9|VAR_8);
    VAR_26.sRGB2Lab = FUNC_10(VAR_25, VAR_28, VAR_5, VAR_27, VAR_4, VAR_1, VAR_9|VAR_8);
    VAR_26.hIlimit = FUNC_10(VAR_25, VAR_29, VAR_30, ((void*)0), VAR_3, VAR_1, VAR_9|VAR_8);

    FUNC_6(VAR_25, VAR_27); FUNC_6(VAR_25, VAR_28); FUNC_6(VAR_25, VAR_29);

    VAR_21 = FUNC_9(VAR_25);
    if (!VAR_21) return ((void*)0);

    FUNC_20(VAR_25, VAR_21, 4.3);

    FUNC_18(VAR_25, VAR_21, VAR_18);
    FUNC_17(VAR_25, VAR_21, VAR_16);
    FUNC_19(VAR_25, VAR_21, VAR_17);

    VAR_23 = FUNC_14(VAR_25, 3, 4);
    if (VAR_23 == ((void*)0)) return 0;
    VAR_24 = FUNC_21(VAR_25, 17, 3, 4, ((void*)0));
    if (VAR_24 == ((void*)0)) return 0;
    if (!FUNC_22(VAR_25, VAR_24, VAR_0, &VAR_26, 0)) return 0;

    FUNC_16(VAR_25, VAR_23, VAR_6, FUNC_5(VAR_25, 3));
    FUNC_16(VAR_25, VAR_23, VAR_7, VAR_24);
    FUNC_16(VAR_25, VAR_23, VAR_7, FUNC_5(VAR_25, 4));

    if (!FUNC_23(VAR_25, VAR_21, VAR_13, (void*) VAR_23)) return 0;
    FUNC_15(VAR_25, VAR_23);

    VAR_22 = FUNC_14(VAR_25, 4, 3);
    if (VAR_22 == ((void*)0)) return 0;
    VAR_24 = FUNC_21(VAR_25, 17, 4, 3, ((void*)0));
    if (VAR_24 == ((void*)0)) return 0;
    if (!FUNC_22(VAR_25, VAR_24, VAR_2, &VAR_26, 0)) return 0;

    FUNC_16(VAR_25, VAR_22, VAR_6, FUNC_5(VAR_25, 4));
    FUNC_16(VAR_25, VAR_22, VAR_7, VAR_24);
    FUNC_16(VAR_25, VAR_22, VAR_7, FUNC_5(VAR_25, 3));

    if (!FUNC_23(VAR_25, VAR_21, VAR_10, (void*) VAR_22)) return 0;
    FUNC_15(VAR_25, VAR_22);

    FUNC_12(VAR_25, VAR_26.hLab2sRGB);
    FUNC_12(VAR_25, VAR_26.sRGB2Lab);
    FUNC_12(VAR_25, VAR_26.hIlimit);

    FUNC_13(VAR_25, VAR_21, VAR_11, VAR_10);
    FUNC_13(VAR_25, VAR_21, VAR_12, VAR_10);
    FUNC_13(VAR_25, VAR_21, VAR_14, VAR_13);
    FUNC_13(VAR_25, VAR_21, VAR_15, VAR_13);

    return VAR_21;
}
