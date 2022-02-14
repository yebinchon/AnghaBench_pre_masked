
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef float cmsFloat32Number ;
typedef int * cmsContext ;


 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,double,double) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *,int,float const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,float) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;

cmsInt32Number FUNC_9(void)
{
    cmsToneCurve* VAR_1 = ((void*)0);
    cmsContext VAR_2 = ((void*)0);
    cmsContext VAR_3 = ((void*)0);
    const cmsFloat32Number VAR_4[] = { 0.0f, 0.10f, 0.20f, 0.30f, 0.40f, 0.50f, 0.60f, 0.70f, 0.80f, 0.90f, 1.00f };


    VAR_2 = FUNC_3(((void*)0));
    if (VAR_2 == ((void*)0)) {
        FUNC_1("Cannot create context");
        goto Error;
    }

    FUNC_8(VAR_2, &VAR_0);

    VAR_3 = FUNC_0(VAR_2, ((void*)0));
     if (VAR_3 == ((void*)0)) {
        FUNC_1("Cannot create context (2)");
        goto Error;
    }

    VAR_1 = FUNC_4(VAR_3, 11, VAR_4);
    if (VAR_1 == ((void*)0)) {
        FUNC_1("Cannot create tone curve (1)");
        goto Error;
    }


    if (!FUNC_2("0.10", FUNC_6(VAR_3, VAR_1, 0.10f), 0.10, 0.01)) goto Error;
    if (!FUNC_2("0.13", FUNC_6(VAR_3, VAR_1, 0.13f), 0.10, 0.01)) goto Error;
    if (!FUNC_2("0.55", FUNC_6(VAR_3, VAR_1, 0.55f), 0.50, 0.01)) goto Error;
    if (!FUNC_2("0.9999", FUNC_6(VAR_3, VAR_1, 0.9999f), 0.90, 0.01)) goto Error;

    FUNC_7(VAR_3, VAR_1);
    FUNC_5(VAR_2);
    FUNC_5(VAR_3);


    VAR_1 = FUNC_4(((void*)0), 11, VAR_4);
    if (VAR_1 == ((void*)0)) {
        FUNC_1("Cannot create tone curve (2)");
        goto Error;
    }


    if (!FUNC_2("0.10", FUNC_6(((void*)0), VAR_1, 0.10f), 0.10, 0.001)) goto Error;
    if (!FUNC_2("0.13", FUNC_6(((void*)0), VAR_1, 0.13f), 0.13, 0.001)) goto Error;
    if (!FUNC_2("0.55", FUNC_6(((void*)0), VAR_1, 0.55f), 0.55, 0.001)) goto Error;
    if (!FUNC_2("0.9999", FUNC_6(((void*)0), VAR_1, 0.9999f), 0.9999, 0.001)) goto Error;

    FUNC_7(((void*)0), VAR_1);
    return 1;

Error:
    if (VAR_2 != ((void*)0)) FUNC_5(VAR_2);
     if (VAR_3 != ((void*)0)) FUNC_5(VAR_2);
    if (VAR_1 != ((void*)0)) FUNC_7(((void*)0), VAR_1);
    return 0;

}
