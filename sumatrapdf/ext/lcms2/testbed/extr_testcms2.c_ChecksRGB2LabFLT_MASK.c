
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int cmsHPROFILE ;
typedef int cmsFloat32Number ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int*,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
cmsInt32Number FUNC_8(void)
{
    cmsHPROFILE VAR_5 = FUNC_5(FUNC_0());
    cmsHPROFILE VAR_6 = FUNC_3(FUNC_0(), ((void*)0));

    cmsHTRANSFORM VAR_7 = FUNC_4(FUNC_0(), VAR_5, VAR_2, VAR_6, VAR_1, 0, VAR_3|VAR_4);
    cmsHTRANSFORM VAR_8 = FUNC_4(FUNC_0(), VAR_6, VAR_1, VAR_5, VAR_2, 0, VAR_3|VAR_4);

    cmsFloat32Number VAR_9[4], VAR_10[4], VAR_11[4];
    int VAR_12;


    for (VAR_12 = 0; VAR_12 <= 100; VAR_12++)
    {
        VAR_9[0] = VAR_12 / 100.0F;
        VAR_9[1] = VAR_12 / 100.0F;
        VAR_9[2] = VAR_12 / 100.0F;
        VAR_9[3] = 0;

        FUNC_7(FUNC_0(), VAR_7, VAR_9, VAR_11, 1);
        FUNC_7(FUNC_0(), VAR_8, VAR_11, VAR_10, 1);

        if (!FUNC_1("Float RGB->RGB", VAR_9[0], VAR_10[0], VAR_0) ||
            !FUNC_1("Float RGB->RGB", VAR_9[1], VAR_10[1], VAR_0) ||
            !FUNC_1("Float RGB->RGB", VAR_9[2], VAR_10[2], VAR_0))
            return 0;
    }


    FUNC_6(FUNC_0(), VAR_7);
    FUNC_6(FUNC_0(), VAR_8);
    FUNC_2(FUNC_0(), VAR_5);
    FUNC_2(FUNC_0(), VAR_6);

    return 1;
}
