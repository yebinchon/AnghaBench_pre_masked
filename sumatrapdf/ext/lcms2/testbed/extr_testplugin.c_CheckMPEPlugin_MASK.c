
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsPipeline ;
typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;
typedef double cmsFloat32Number ;
typedef int * cmsContext ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,double,double,double) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int VAR_1 ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,char*,int) ;
 int * FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,double*,double*,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *,int ,int ) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *,int *,char*,int*) ;
 int FUNC_17 (int *,int *) ;
 int VAR_2 ;
 int FUNC_18 (int *,int *,int ,int *) ;
 int FUNC_19 (char*) ;
 scalar_t__ FUNC_20 (int) ;

cmsInt32Number FUNC_21(void)
{
    cmsContext VAR_3 = ((void*)0);
    cmsContext VAR_4 = ((void*)0);
    cmsHPROFILE VAR_5 = ((void*)0);
    cmsUInt32Number VAR_6 = 1234;
    cmsUInt32Number VAR_7 = 0;
    char* VAR_8 = ((void*)0);
    cmsUInt32Number VAR_9 = 0;
    cmsFloat32Number VAR_10[3], VAR_11[3];
    cmsPipeline* VAR_12;

    VAR_3 = FUNC_5(((void*)0));
    FUNC_14(VAR_3, &VAR_0);

    VAR_4 = FUNC_0(VAR_3, ((void*)0));

    VAR_5 = FUNC_7(VAR_4);
    if (VAR_5 == ((void*)0)) {
        FUNC_1("Create placeholder failed");
        goto Error;
    }

    VAR_12 = FUNC_10(VAR_4, 3, 3);
    FUNC_13(VAR_4, VAR_12, VAR_1, FUNC_4(VAR_4));


    VAR_10[0] = 0.3f; VAR_10[1] = 0.2f; VAR_10[2] = 0.9f;
    FUNC_11(VAR_4, VAR_10, VAR_11, VAR_12);

    VAR_7 = (FUNC_2("0", VAR_11[0], 1.0-VAR_10[0], 0.001) &&
           FUNC_2("1", VAR_11[1], 1.0-VAR_10[1], 0.001) &&
           FUNC_2("2", VAR_11[2], 1.0-VAR_10[2], 0.001));

    if (!VAR_7) {
        FUNC_1("Pipeline failed");
        goto Error;
    }

    if (!FUNC_18(VAR_4, VAR_5, VAR_2, VAR_12)) {
        FUNC_1("Plug-in failed");
        goto Error;
    }


    FUNC_12(VAR_4, VAR_12);

    VAR_7 = FUNC_16(VAR_4, VAR_5, ((void*)0), &VAR_9);
    if (!VAR_7) {
        FUNC_1("Fetch mem size failed");
        goto Error;
    }


    VAR_8 = (char*) FUNC_20(VAR_9);
    if (VAR_8 == ((void*)0)) {
        FUNC_1("malloc failed ?!?");
        goto Error;
    }


    VAR_7 = FUNC_16(VAR_4, VAR_5, VAR_8, &VAR_9);
    if (!VAR_7) {
        FUNC_1("Save to mem failed");
        goto Error;
    }

    FUNC_6(VAR_4, VAR_5);

    FUNC_17(VAR_4, ((void*)0));
    VAR_5 = FUNC_9(VAR_4, VAR_8, VAR_9);
    if (VAR_5 == ((void*)0)) {
        FUNC_1("Open profile failed");
        goto Error;
    }

    VAR_12 = (cmsPipeline*) FUNC_15(VAR_4, VAR_5, VAR_2);
    if (VAR_12 != ((void*)0)) {


        FUNC_1("read tag/context switching failed");
        goto Error;
    }

    FUNC_6(VAR_4, VAR_5);

    FUNC_3(VAR_4);

    VAR_5 = FUNC_9(VAR_4, VAR_8, VAR_9);
    if (VAR_5 == ((void*)0)) {
        FUNC_1("Open profile from mem failed");
        goto Error;
    }


    FUNC_19(VAR_8); VAR_8 = ((void*)0);

    VAR_12 = (cmsPipeline*) FUNC_15(VAR_4, VAR_5, VAR_2);
    if (VAR_12 == ((void*)0)) {
        FUNC_1("Read tag/conext switching failed (2)");
        return 0;
    }


    VAR_10[0] = 0.3f; VAR_10[1] = 0.2f; VAR_10[2] = 0.9f;
    FUNC_11(VAR_4, VAR_10, VAR_11, VAR_12);

     VAR_7 = (FUNC_2("0", VAR_11[0], 1.0-VAR_10[0], 0.001) &&
           FUNC_2("1", VAR_11[1], 1.0-VAR_10[1], 0.001) &&
           FUNC_2("2", VAR_11[2], 1.0-VAR_10[2], 0.001));

    FUNC_6(VAR_4, VAR_5);
    FUNC_8(VAR_3);
    FUNC_8(VAR_4);
    return VAR_7;

Error:

    if (VAR_5 != ((void*)0)) FUNC_6(VAR_3, VAR_5);
    if (VAR_3 != ((void*)0)) FUNC_8(VAR_3);
    if (VAR_4 != ((void*)0)) FUNC_8(VAR_4);
    if (VAR_8) FUNC_19(VAR_8);

    return 0;
}
