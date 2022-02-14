
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ,char const*,char*) ;
 int FUNC_4 (int ,int *,char const*) ;

__attribute__((used)) static
cmsInt32Number FUNC_5(cmsHPROFILE VAR_0, const char* VAR_1, const char* VAR_2)
{
    FUNC_1(VAR_1);
    if (VAR_0 == ((void*)0)) return 0;

    if (!FUNC_4(FUNC_0(), VAR_0, VAR_2)) return 0;
    FUNC_2(FUNC_0(), VAR_0);

    VAR_0 = FUNC_3(FUNC_0(), VAR_2, "r");
    if (VAR_0 == ((void*)0)) return 0;

    FUNC_2(FUNC_0(), VAR_0);
    return 1;
}
