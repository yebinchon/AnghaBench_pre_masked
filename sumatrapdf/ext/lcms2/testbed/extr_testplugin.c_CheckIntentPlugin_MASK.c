
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsToneCurve ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int cmsContext ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,double) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int **) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int*,int*,int) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int VAR_3 ;

cmsInt32Number FUNC_11(void)
{
    cmsContext VAR_4 = FUNC_1(((void*)0));
    cmsContext VAR_5;
    cmsHTRANSFORM VAR_6;
    cmsHPROFILE VAR_7, VAR_8;
    cmsToneCurve* VAR_9;
    cmsToneCurve* VAR_10;
    cmsUInt8Number VAR_11[]= { 10, 20, 30, 40 };
    cmsUInt8Number VAR_12[4];
    int VAR_13;

    FUNC_10(VAR_4, &VAR_1);

    VAR_5 = FUNC_0(VAR_4, ((void*)0));

    VAR_9 = FUNC_2(VAR_5, 3.0);
    VAR_10 = FUNC_2(VAR_5, 0.1);
    VAR_7 = FUNC_4(VAR_5, VAR_3, &VAR_9);
    VAR_8 = FUNC_4(VAR_5, VAR_3, &VAR_10);

    FUNC_9(VAR_5, VAR_9);
    FUNC_9(VAR_5, VAR_10);

    VAR_6 = FUNC_5(VAR_5, VAR_7, VAR_2, VAR_8, VAR_2, VAR_0, 0);
    FUNC_3(VAR_5,VAR_7); FUNC_3(VAR_5, VAR_8);

    FUNC_8(VAR_5, VAR_6, VAR_11, VAR_12, 4);

    FUNC_7(VAR_5, VAR_6);
    FUNC_6(VAR_5);
    FUNC_6(VAR_4);

    for (VAR_13=0; VAR_13 < 4; VAR_13++)
        if (VAR_12[VAR_13] != VAR_11[VAR_13]) return 0;

    return 1;
}
