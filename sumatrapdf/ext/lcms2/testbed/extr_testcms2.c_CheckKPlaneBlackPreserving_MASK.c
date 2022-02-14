
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef double cmsFloat64Number ;
typedef int cmsFloat32Number ;
typedef int cmsCIELab ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 double FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int ,int*,int*,int) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsHPROFILE VAR_4 = FUNC_7(FUNC_0(), "test1.icc", "r");
    cmsHPROFILE VAR_5 = FUNC_7(FUNC_0(), "test2.icc", "r");
    cmsHTRANSFORM VAR_6, VAR_7, VAR_8;
    cmsFloat32Number VAR_9[4], VAR_10[4];
    cmsCIELab VAR_11, VAR_12;
    cmsHPROFILE VAR_13;
    cmsFloat64Number VAR_14, VAR_15;
    cmsInt32Number VAR_16;

    VAR_13 = FUNC_2(FUNC_0(), ((void*)0));

    VAR_6 = FUNC_3(FUNC_0(), VAR_4, VAR_2, VAR_5, VAR_2, VAR_0, 0);

    VAR_7 = FUNC_3(FUNC_0(), VAR_4, VAR_2, VAR_13, VAR_3, VAR_0, 0);
    VAR_8 = FUNC_3(FUNC_0(), VAR_5, VAR_2, VAR_13, VAR_3, VAR_0, 0);

    VAR_15 = 0;

    for (VAR_16=0; VAR_16 <= 100; VAR_16++) {
        VAR_9[0] = 0;
        VAR_9[1] = 0;
        VAR_9[2] = 0;
        VAR_9[3] = (cmsFloat32Number) VAR_16;

        FUNC_6(FUNC_0(), VAR_7, VAR_9, &VAR_11, 1);
        FUNC_6(FUNC_0(), VAR_6, VAR_9, VAR_10, 1);
        FUNC_6(FUNC_0(), VAR_8, VAR_10, &VAR_12, 1);

        VAR_14 = FUNC_5(FUNC_0(), &VAR_11, &VAR_12);

        if (VAR_14 > VAR_15) VAR_15 = VAR_14;
    }


    FUNC_4(FUNC_0(), VAR_6);

    VAR_6 = FUNC_3(FUNC_0(), VAR_5, VAR_2, VAR_4, VAR_2, VAR_1, 0);

    for (VAR_16=0; VAR_16 <= 100; VAR_16++) {
        VAR_9[0] = 30;
        VAR_9[1] = 20;
        VAR_9[2] = 10;
        VAR_9[3] = (cmsFloat32Number) VAR_16;

        FUNC_6(FUNC_0(), VAR_8, VAR_9, &VAR_11, 1);
        FUNC_6(FUNC_0(), VAR_6, VAR_9, VAR_10, 1);
        FUNC_6(FUNC_0(), VAR_7, VAR_10, &VAR_12, 1);

        VAR_14 = FUNC_5(FUNC_0(), &VAR_11, &VAR_12);

        if (VAR_14 > VAR_15) VAR_15 = VAR_14;
    }

    FUNC_4(FUNC_0(), VAR_6);



    FUNC_1(FUNC_0(), VAR_4);
    FUNC_1(FUNC_0(), VAR_5);
    FUNC_1(FUNC_0(), VAR_13);


    FUNC_4(FUNC_0(), VAR_7);
    FUNC_4(FUNC_0(), VAR_8);

    return VAR_15 < 30.0;
}
