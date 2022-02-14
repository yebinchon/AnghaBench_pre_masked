
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef double cmsFloat64Number ;
typedef int * cmsContext ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,int ,double,double) ;
 double VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_2 (int *) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 int * FUNC_5 (int *,int ,double*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,float) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,int *) ;
 double FUNC_11 (double) ;
 double FUNC_12 (double) ;
 double FUNC_13 (double) ;

cmsInt32Number FUNC_14(void)
{
    cmsContext VAR_6 = ((void*)0);
    cmsContext VAR_7 = ((void*)0);
    cmsToneCurve* VAR_8;
    cmsToneCurve* VAR_9;
    cmsToneCurve* VAR_10;
    cmsToneCurve* VAR_11;
    cmsToneCurve* VAR_12;
    cmsFloat64Number VAR_13 = 1.0;

    VAR_6 = FUNC_2(((void*)0));

    FUNC_9(VAR_6, &VAR_0);

    VAR_7 = FUNC_0(VAR_6, ((void*)0));

    FUNC_9(VAR_7, &VAR_1);

    VAR_8 = FUNC_5(VAR_7, VAR_4, &VAR_13);
    VAR_9 = FUNC_5(VAR_7, VAR_3, &VAR_13);
    VAR_10 = FUNC_5(VAR_7, VAR_5, &VAR_13);
    VAR_11 = FUNC_10(VAR_7, VAR_8);
    VAR_12 = FUNC_10(VAR_7, VAR_9);


     if (!FUNC_1("0.10", FUNC_7(VAR_7, VAR_8, 0.10f), FUNC_12(0.10 * VAR_2) , 0.001)) goto Error;
     if (!FUNC_1("0.60", FUNC_7(VAR_7, VAR_8, 0.60f), FUNC_12(0.60* VAR_2), 0.001)) goto Error;
     if (!FUNC_1("0.90", FUNC_7(VAR_7, VAR_8, 0.90f), FUNC_12(0.90* VAR_2), 0.001)) goto Error;

     if (!FUNC_1("0.10", FUNC_7(VAR_7, VAR_9, 0.10f), FUNC_11(0.10* VAR_2), 0.001)) goto Error;
     if (!FUNC_1("0.60", FUNC_7(VAR_7, VAR_9, 0.60f), FUNC_11(0.60* VAR_2), 0.001)) goto Error;
     if (!FUNC_1("0.90", FUNC_7(VAR_7, VAR_9, 0.90f), FUNC_11(0.90* VAR_2), 0.001)) goto Error;

     if (!FUNC_1("0.10", FUNC_7(VAR_7, VAR_10, 0.10f), FUNC_13(0.10* VAR_2), 0.001)) goto Error;
     if (!FUNC_1("0.60", FUNC_7(VAR_7, VAR_10, 0.60f), FUNC_13(0.60* VAR_2), 0.001)) goto Error;
     if (!FUNC_1("0.90", FUNC_7(VAR_7, VAR_10, 0.90f), FUNC_13(0.90* VAR_2), 0.001)) goto Error;


     if (!FUNC_1("0.10", FUNC_7(VAR_7, VAR_11, 0.10f), FUNC_4(0.10)/VAR_2, 0.001)) goto Error;
     if (!FUNC_1("0.60", FUNC_7(VAR_7, VAR_11, 0.60f), FUNC_4(0.60)/VAR_2, 0.001)) goto Error;
     if (!FUNC_1("0.90", FUNC_7(VAR_7, VAR_11, 0.90f), FUNC_4(0.90)/VAR_2, 0.001)) goto Error;

     if (!FUNC_1("0.10", FUNC_7(VAR_7, VAR_12, 0.10f), FUNC_3(0.10)/VAR_2, 0.001)) goto Error;
     if (!FUNC_1("0.60", FUNC_7(VAR_7, VAR_12, 0.60f), FUNC_3(0.60)/VAR_2, 0.001)) goto Error;
     if (!FUNC_1("0.90", FUNC_7(VAR_7, VAR_12, 0.90f), FUNC_3(0.90)/VAR_2, 0.001)) goto Error;

     FUNC_8(VAR_7, VAR_8);
     FUNC_8(VAR_7, VAR_9);
     FUNC_8(VAR_7, VAR_10);
     FUNC_8(VAR_7, VAR_11);
     FUNC_8(VAR_7, VAR_12);

     FUNC_6(VAR_6);
     FUNC_6(VAR_7);

     return 1;

Error:

     FUNC_8(VAR_7, VAR_8);
     FUNC_8(VAR_7, VAR_11);
     FUNC_8(VAR_7, VAR_9);
     FUNC_8(VAR_7, VAR_12);

     if (VAR_6 != ((void*)0)) FUNC_6(VAR_6);
     if (VAR_7 != ((void*)0)) FUNC_6(VAR_7);
     return 0;
}
