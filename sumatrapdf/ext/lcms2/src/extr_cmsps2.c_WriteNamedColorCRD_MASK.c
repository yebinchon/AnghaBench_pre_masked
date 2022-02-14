
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsIOHANDLER ;
typedef int * cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 int FUNC_0 (char*,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *,char*,...) ;
 int * FUNC_3 (int ,int ,int ,int *,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,scalar_t__*,scalar_t__*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_6 (int ,int ,int,int ) ;
 int * FUNC_7 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,scalar_t__,char*,int *,int *,int *,int *) ;

__attribute__((used)) static
int FUNC_10(cmsContext VAR_5, cmsIOHANDLER* VAR_6, cmsHPROFILE VAR_7, cmsUInt32Number VAR_8, cmsUInt32Number VAR_9)
{
    cmsHTRANSFORM VAR_10;
    cmsUInt32Number VAR_11, VAR_12, VAR_13;
    cmsUInt32Number VAR_14;
    char VAR_15[VAR_4];
    char VAR_16[128];
    cmsNAMEDCOLORLIST* VAR_17;


    VAR_14 = FUNC_6(VAR_5, VAR_7, 2, VAR_0);
    VAR_13 = FUNC_1(VAR_14);


    VAR_10 = FUNC_3(VAR_5, VAR_7, VAR_1, ((void*)0), VAR_14, VAR_8, VAR_9);
    if (VAR_10 == ((void*)0)) return 0;


    VAR_17 = FUNC_7(VAR_10);
    if (VAR_17 == ((void*)0)) return 0;

    FUNC_2(VAR_5, VAR_6, "<<\n");
    FUNC_2(VAR_5, VAR_6, "(colorlistcomment) (%s) \n", "Named profile");
    FUNC_2(VAR_5, VAR_6, "(Prefix) [ (Pantone ) (PANTONE ) ]\n");
    FUNC_2(VAR_5, VAR_6, "(Suffix) [ ( CV) ( CVC) ( C) ]\n");

    VAR_12 = FUNC_8(VAR_5, VAR_17);

    for (VAR_11=0; VAR_11 < VAR_12; VAR_11++) {

        cmsUInt16Number VAR_18[1];
        cmsUInt16Number VAR_19[VAR_3];

        VAR_18[0] = (cmsUInt16Number) VAR_11;

        if (!FUNC_9(VAR_5, VAR_17, VAR_11, VAR_15, ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
                continue;

        FUNC_5(VAR_5, VAR_10, VAR_18, VAR_19, 1);
        FUNC_0(VAR_16, VAR_13, VAR_19);
        FUNC_2(VAR_5, VAR_6, "  (%s) [ %s ]\n", VAR_15, VAR_16);
    }

    FUNC_2(VAR_5, VAR_6, "   >>");

    if (!(VAR_9 & VAR_2)) {

    FUNC_2(VAR_5, VAR_6, " /Current exch /HPSpotTable defineresource pop\n");
    }

    FUNC_4(VAR_5, VAR_10);
    return 1;
}
