
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;
 int VAR_0 ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_8 (int ,double) ;
 int FUNC_9 (int ,int *) ;
 int * FUNC_10 (int ,int ,int **) ;
 int FUNC_11 (int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static
cmsInt32Number FUNC_14(void)
{

    cmsHTRANSFORM VAR_5, VAR_6;
    cmsHPROFILE VAR_7, VAR_8, VAR_9;
    cmsToneCurve* VAR_10, *VAR_11, *VAR_12;
    cmsInt32Number VAR_13 = 1;


    VAR_10 = FUNC_8(FUNC_6(), 2.2);
    VAR_11 = FUNC_8(FUNC_6(), 1/2.2);
    VAR_12 = FUNC_8(FUNC_6(), 4.84);

    VAR_7 = FUNC_10(FUNC_6(), VAR_4, &VAR_10);
    VAR_8 = FUNC_10(FUNC_6(), VAR_4, &VAR_11);
    VAR_9 = FUNC_10(FUNC_6(), VAR_4, &VAR_12);

    FUNC_7("Gray float optimizeable transform");
    VAR_5 = FUNC_11(FUNC_6(), VAR_7, VAR_3, VAR_8, VAR_3, VAR_0, 0);
    VAR_13 &= FUNC_2(VAR_5, 1);
    FUNC_12(FUNC_6(), VAR_5);
    if (VAR_13 == 0) goto Error;

    FUNC_7("Gray 8 optimizeable transform");
    VAR_5 = FUNC_11(FUNC_6(), VAR_7, VAR_2, VAR_8, VAR_2, VAR_0, 0);
    VAR_13 &= FUNC_1(VAR_5, 1);
    FUNC_12(FUNC_6(), VAR_5);
    if (VAR_13 == 0) goto Error;

    FUNC_7("Gray 16 optimizeable transform");
    VAR_5 = FUNC_11(FUNC_6(), VAR_7, VAR_1, VAR_8, VAR_1, VAR_0, 0);
    VAR_13 &= FUNC_0(VAR_5, 1);
    FUNC_12(FUNC_6(), VAR_5);
    if (VAR_13 == 0) goto Error;

    FUNC_7("Gray float non-optimizeable transform");
    VAR_5 = FUNC_11(FUNC_6(), VAR_7, VAR_3, VAR_7, VAR_3, VAR_0, 0);
    VAR_6 = FUNC_11(FUNC_6(), VAR_9, VAR_3, ((void*)0), VAR_3, VAR_0, 0);

    VAR_13 &= FUNC_5(VAR_5, VAR_6, 1);
    FUNC_12(FUNC_6(), VAR_5);
    FUNC_12(FUNC_6(), VAR_6);
    if (VAR_13 == 0) goto Error;

    FUNC_7("Gray 8 non-optimizeable transform");
    VAR_5 = FUNC_11(FUNC_6(), VAR_7, VAR_2, VAR_7, VAR_2, VAR_0, 0);
    VAR_6 = FUNC_11(FUNC_6(), VAR_9, VAR_2, ((void*)0), VAR_2, VAR_0, 0);

    VAR_13 &= FUNC_4(VAR_5, VAR_6, 1);
    FUNC_12(FUNC_6(), VAR_5);
    FUNC_12(FUNC_6(), VAR_6);
    if (VAR_13 == 0) goto Error;


    FUNC_7("Gray 16 non-optimizeable transform");
    VAR_5 = FUNC_11(FUNC_6(), VAR_7, VAR_1, VAR_7, VAR_1, VAR_0, 0);
    VAR_6 = FUNC_11(FUNC_6(), VAR_9, VAR_1, ((void*)0), VAR_1, VAR_0, 0);

    VAR_13 &= FUNC_3(VAR_5, VAR_6, 1);
    FUNC_12(FUNC_6(), VAR_5);
    FUNC_12(FUNC_6(), VAR_6);
    if (VAR_13 == 0) goto Error;

Error:

    FUNC_9(FUNC_6(), VAR_7); FUNC_9(FUNC_6(), VAR_8); FUNC_9(FUNC_6(), VAR_9);
    FUNC_13(FUNC_6(), VAR_10); FUNC_13(FUNC_6(), VAR_11); FUNC_13(FUNC_6(), VAR_12);

    return VAR_13;
}
