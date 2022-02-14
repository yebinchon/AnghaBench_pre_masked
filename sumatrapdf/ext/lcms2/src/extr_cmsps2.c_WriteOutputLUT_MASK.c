
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef int cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
typedef int cmsCIEXYZ ;
typedef int cmsBool ;
struct TYPE_4__ {TYPE_1__* core; } ;
typedef TYPE_2__ _cmsTRANSFORM ;
struct TYPE_3__ {int Lut; } ;


 int FUNC_0 (int ,int *,scalar_t__) ;
 int FUNC_1 (int ,int *,int *,int ,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *,int ,char*,char*,char*,char*,int ,int ) ;
 int FUNC_6 (int ,int *,char*,...) ;
 int FUNC_7 (int ,int **,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (int ,int *) ;
 int * FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int **,int,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int ,int *,int *,scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_13 (int ,int *,int,int ) ;
 int FUNC_14 (int ,int *) ;
 int * FUNC_15 (int ,int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ,char*) ;

__attribute__((used)) static
int FUNC_19(cmsContext VAR_10, cmsIOHANDLER* VAR_11, cmsHPROFILE VAR_12, cmsUInt32Number VAR_13, cmsUInt32Number VAR_14)
{
    cmsHPROFILE VAR_15;
    cmsHTRANSFORM VAR_16;
    cmsUInt32Number VAR_17, VAR_18;
    cmsUInt32Number VAR_19;
    _cmsTRANSFORM* VAR_20;
    cmsPipeline* VAR_21;
    cmsHPROFILE VAR_22[3];
    cmsCIEXYZ VAR_23;
    cmsBool VAR_24 = (cmsBool) (VAR_14 & VAR_6);
    cmsBool VAR_25 = (cmsBool) !(VAR_14 & VAR_9);
    cmsUInt32Number VAR_26 = VAR_3;
    cmsUInt32Number VAR_27;
    cmsColorSpaceSignature VAR_28;


    VAR_15 = FUNC_9(VAR_10, ((void*)0));
    if (VAR_15 == ((void*)0)) return 0;

    VAR_19 = FUNC_13(VAR_10, VAR_12, 2, VAR_0);
    VAR_18 = FUNC_4(VAR_19);

    VAR_28 = FUNC_14(VAR_10, VAR_12);



    VAR_27 = VAR_13;
    if (VAR_27 == VAR_1)
        VAR_27 = VAR_2;



    VAR_22[0] = VAR_15;
    VAR_22[1] = VAR_12;

    VAR_16 = FUNC_10(VAR_10,
                                              VAR_22, 2, VAR_4,
                                              VAR_19, VAR_27, 0);
    FUNC_8(VAR_10, VAR_15);

    if (VAR_16 == ((void*)0)) {

        FUNC_18(VAR_10, VAR_5, "Cannot create transform Lab -> Profile in CRD creation");
        return 0;
    }


    VAR_20 = (_cmsTRANSFORM*) VAR_16;
    VAR_21 = FUNC_15(VAR_10, VAR_20 ->core->Lut);
    if (VAR_21 == ((void*)0)) return 0;



    VAR_14 |= VAR_7;
    FUNC_7(VAR_10, &VAR_21, VAR_27, &VAR_26, &VAR_19, &VAR_14);

    FUNC_6(VAR_10, VAR_11, "<<\n");
    FUNC_6(VAR_10, VAR_11, "/ColorRenderingType 1\n");


    FUNC_12(VAR_10, &VAR_23, VAR_12, VAR_13, 0);


    FUNC_2(VAR_10, VAR_11, &VAR_23);
    FUNC_1(VAR_10, VAR_11, VAR_12, VAR_24, VAR_13 == VAR_1);
    FUNC_3(VAR_10, VAR_11);
    if (VAR_13 == VAR_1)
            VAR_25 = VAR_0;

    FUNC_6(VAR_10, VAR_11, "/RenderTable ");


    FUNC_5(VAR_10, VAR_11, FUNC_17(VAR_10, VAR_21), "<", ">\n", "", "", VAR_25, VAR_28);

    FUNC_6(VAR_10, VAR_11, " %d {} bind ", VAR_18);

    for (VAR_17=1; VAR_17 < VAR_18; VAR_17++)
            FUNC_6(VAR_10, VAR_11, "dup ");

    FUNC_6(VAR_10, VAR_11, "]\n");


    FUNC_0(VAR_10, VAR_11, VAR_13);

    FUNC_6(VAR_10, VAR_11, ">>\n");

    if (!(VAR_14 & VAR_8)) {

        FUNC_6(VAR_10, VAR_11, "/Current exch /ColorRendering defineresource pop\n");
    }

    FUNC_16(VAR_10, VAR_21);
    FUNC_11(VAR_10, VAR_16);

    return 1;
}
