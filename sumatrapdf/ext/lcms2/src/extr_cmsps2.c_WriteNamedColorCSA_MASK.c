
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsNAMEDCOLORLIST ;
typedef int cmsIOHANDLER ;
typedef int * cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;
struct TYPE_3__ {int b; int a; int L; } ;
typedef TYPE_1__ cmsCIELab ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,int ,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,scalar_t__*,TYPE_1__*,int) ;
 int * FUNC_6 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,scalar_t__,char*,int *,int *,int *,int *) ;

__attribute__((used)) static
int FUNC_9(cmsContext VAR_3, cmsIOHANDLER* VAR_4, cmsHPROFILE VAR_5, cmsUInt32Number VAR_6)
{
    cmsHTRANSFORM VAR_7;
    cmsHPROFILE VAR_8;
    cmsUInt32Number VAR_9, VAR_10;
    char VAR_11[VAR_2];
    cmsNAMEDCOLORLIST* VAR_12;

    VAR_8 = FUNC_2(VAR_3, ((void*)0));
    VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_1, VAR_8, VAR_0, VAR_6, 0);
    if (VAR_7 == ((void*)0)) return 0;

    VAR_12 = FUNC_6(VAR_7);
    if (VAR_12 == ((void*)0)) return 0;

    FUNC_0(VAR_3, VAR_4, "<<\n");
    FUNC_0(VAR_3, VAR_4, "(colorlistcomment) (%s)\n", "Named color CSA");
    FUNC_0(VAR_3, VAR_4, "(Prefix) [ (Pantone ) (PANTONE ) ]\n");
    FUNC_0(VAR_3, VAR_4, "(Suffix) [ ( CV) ( CVC) ( C) ]\n");

    VAR_10 = FUNC_7(VAR_3, VAR_12);


    for (VAR_9=0; VAR_9 < VAR_10; VAR_9++) {

        cmsUInt16Number VAR_13[1];
        cmsCIELab VAR_14;

        VAR_13[0] = (cmsUInt16Number) VAR_9;

        if (!FUNC_8(VAR_3, VAR_12, VAR_9, VAR_11, ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
                continue;

        FUNC_5(VAR_3, VAR_7, VAR_13, &VAR_14, 1);
        FUNC_0(VAR_3, VAR_4, "  (%s) [ %.3f %.3f %.3f ]\n", VAR_11, VAR_14.L, VAR_14.a, VAR_14.b);
    }



    FUNC_0(VAR_3, VAR_4, ">>\n");

    FUNC_4(VAR_3, VAR_7);
    FUNC_1(VAR_3, VAR_8);
    return 1;
}
