
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (int ,char*,int) ;

__attribute__((used)) static
cmsInt32Number FUNC_4(void)
{
    cmsHPROFILE VAR_1;

    VAR_1 = FUNC_2(FUNC_0(), "IDoNotExist.icc", "r");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    VAR_1 = FUNC_2(FUNC_0(), "IAmIllFormed*.icc", "r");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }


    VAR_1 = FUNC_2(FUNC_0(), "", "r");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    VAR_1 = FUNC_2(FUNC_0(), "..", "r");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    VAR_1 = FUNC_2(FUNC_0(), "IHaveBadAccessMode.icc", "@");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    VAR_1 = FUNC_2(FUNC_0(), "bad.icc", "r");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

     VAR_1 = FUNC_2(FUNC_0(), "toosmall.icc", "r");
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    VAR_1 = FUNC_3(FUNC_0(), ((void*)0), 3);
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    VAR_1 = FUNC_3(FUNC_0(), "123", 3);
    if (VAR_1 != ((void*)0)) {
        FUNC_1(FUNC_0(), VAR_1);
        return 0;
    }

    if (VAR_0 != 9) return 0;

    return 1;
}
