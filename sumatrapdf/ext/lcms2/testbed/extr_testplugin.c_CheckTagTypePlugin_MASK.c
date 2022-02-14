
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;
typedef int * cmsContext ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int *,int *,char*,int*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int ,int*) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int) ;

cmsInt32Number FUNC_15(void)
{
    cmsContext VAR_2 = ((void*)0);
    cmsContext VAR_3 = ((void*)0);
    cmsHPROFILE VAR_4 = ((void*)0);
    cmsUInt32Number VAR_5 = 1234;
    cmsUInt32Number VAR_6 = 0;
    char* VAR_7 = ((void*)0);
    cmsUInt32Number *VAR_8 = ((void*)0);
    cmsUInt32Number VAR_9 = 0;

    VAR_2 = FUNC_3(((void*)0));
    FUNC_8(VAR_2, &VAR_1);

    VAR_3 = FUNC_0(VAR_2, ((void*)0));

    VAR_4 = FUNC_5(VAR_3);
    if (VAR_4 == ((void*)0)) {
        FUNC_1("Create placeholder failed");
        goto Error;
    }


    if (!FUNC_12(VAR_3, VAR_4, VAR_0, &VAR_5)) {
        FUNC_1("Plug-in failed");
        goto Error;
    }

    VAR_6 = FUNC_10(VAR_3, VAR_4, ((void*)0), &VAR_9);
    if (!VAR_6) {
        FUNC_1("Fetch mem size failed");
        goto Error;
    }


    VAR_7 = (char*) FUNC_14(VAR_9);
    if (VAR_7 == ((void*)0)) {
        FUNC_1("malloc failed ?!?");
        goto Error;
    }


    VAR_6 = FUNC_10(VAR_3, VAR_4, VAR_7, &VAR_9);
    if (!VAR_6) {
        FUNC_1("Save to mem failed");
        goto Error;
    }

    FUNC_4(VAR_3, VAR_4);

    FUNC_11(VAR_3, ((void*)0));
    VAR_4 = FUNC_7(VAR_3, VAR_7, VAR_9);
    if (VAR_4 == ((void*)0)) {
        FUNC_1("Open profile failed");
        goto Error;
    }

    VAR_8 = (cmsUInt32Number*) FUNC_9(VAR_3, VAR_4, VAR_0);
    if (VAR_8 != ((void*)0)) {

        FUNC_1("read tag/context switching failed");
        goto Error;
    }

    FUNC_4(VAR_3, VAR_4);
    FUNC_2(VAR_3);

    VAR_4 = FUNC_7(VAR_3, VAR_7, VAR_9);
    if (VAR_4 == ((void*)0)) {
        FUNC_1("Open profile from mem failed");
        goto Error;
    }


    FUNC_13(VAR_7); VAR_7 = ((void*)0);

    VAR_8 = (cmsUInt32Number*) FUNC_9(VAR_3, VAR_4, VAR_0);
    if (VAR_8 == ((void*)0)) {
        FUNC_1("Read tag/conext switching failed (2)");
        return 0;
    }

    VAR_6 = (*VAR_8 == 1234);

    FUNC_4(VAR_3, VAR_4);
    FUNC_6(VAR_2);
    FUNC_6(VAR_3);

    return VAR_6;

Error:

    if (VAR_4 != ((void*)0)) FUNC_4(VAR_3, VAR_4);
    if (VAR_2 != ((void*)0)) FUNC_6(VAR_2);
    if (VAR_3 != ((void*)0)) FUNC_6(VAR_3);
    if (VAR_7) FUNC_13(VAR_7);

    return 0;
}
