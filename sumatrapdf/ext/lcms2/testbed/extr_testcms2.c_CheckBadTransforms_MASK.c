
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,int *,int ,int *,int ,int,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int * FUNC_5 (int ,char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsHPROFILE VAR_5 = FUNC_3(FUNC_0());
    cmsHTRANSFORM VAR_6;

    VAR_6 = FUNC_2(FUNC_0(), ((void*)0), 0, ((void*)0), 0, 0, 0);
    if (VAR_6 != ((void*)0)) {
        FUNC_4(FUNC_0(), VAR_6);
        return 0;
    }



    VAR_6 = FUNC_2(FUNC_0(), VAR_5, VAR_4, VAR_5, VAR_4, 12345, 0);
    if (VAR_6 != ((void*)0)) {
        FUNC_4(FUNC_0(), VAR_6);
        return 0;
    }

    VAR_6 = FUNC_2(FUNC_0(), VAR_5, VAR_2, VAR_5, VAR_4, 0, 0);
    if (VAR_6 != ((void*)0)) {
        FUNC_4(FUNC_0(), VAR_6);
        return 0;
    }

    VAR_6 = FUNC_2(FUNC_0(), VAR_5, VAR_4, VAR_5, VAR_2, 1, 0);
    if (VAR_6 != ((void*)0)) {
        FUNC_4(FUNC_0(), VAR_6);
        return 0;
    }


    VAR_6 = FUNC_2(FUNC_0(), VAR_5, VAR_4, ((void*)0), VAR_3, 1, 0);
    if (VAR_6 != ((void*)0)) {
        FUNC_4(FUNC_0(), VAR_6);
        return 0;
    }

    FUNC_1(FUNC_0(), VAR_5);


    {

    cmsHPROFILE VAR_7 = FUNC_5(FUNC_0(), "test1.icc", "r");
    cmsHPROFILE VAR_8 = FUNC_3(FUNC_0());

    VAR_6 = FUNC_2(FUNC_0(), VAR_7, VAR_1, VAR_8, VAR_1, VAR_0, 0);

    FUNC_1(FUNC_0(), VAR_7); FUNC_1(FUNC_0(), VAR_8);
    if (VAR_6 != ((void*)0)) {
        FUNC_4(FUNC_0(), VAR_6);
        return 0;
    }
    }

    return 1;

}
