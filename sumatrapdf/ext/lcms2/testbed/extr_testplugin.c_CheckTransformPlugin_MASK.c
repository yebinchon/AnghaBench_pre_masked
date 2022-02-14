
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
    cmsUInt8Number VAR_7[]= { 10, 20, 30, 40 };
    cmsUInt8Number VAR_8[4];
    cmsToneCurve* VAR_9;
    cmsHPROFILE VAR_10;
    int VAR_11;

    FUNC_10(VAR_4, &VAR_0);

    VAR_5 = FUNC_0(VAR_4, ((void*)0));

    VAR_9 = FUNC_2(VAR_5, 1.0);
    VAR_10 = FUNC_4(VAR_5, VAR_3, &VAR_9);
    FUNC_9(VAR_5, VAR_9);

    VAR_6 = FUNC_5(VAR_5, VAR_10, VAR_2, VAR_10, VAR_2, VAR_1, 0);
    FUNC_3(VAR_5, VAR_10);

    FUNC_8(VAR_5, VAR_6, VAR_7, VAR_8, 4);

    FUNC_7(VAR_5, VAR_6);
    FUNC_6(VAR_4);
    FUNC_6(VAR_5);

    for (VAR_11=0; VAR_11 < 4; VAR_11++)
        if (VAR_8[VAR_11] != 0x42) return 0;

    return 1;
}
