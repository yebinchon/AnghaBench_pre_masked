
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (int ,int *,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
cmsInt32Number FUNC_6(void)
{
    cmsInt32Number VAR_2, VAR_3;
    char VAR_4[4];
    cmsHPROFILE VAR_5;


    FUNC_1("RAW read on on-disk");
    VAR_5 = FUNC_4(FUNC_0(), "test1.icc", "r");

    if (VAR_5 == ((void*)0))
        return 0;

    VAR_2 = FUNC_5(FUNC_0(), VAR_5, VAR_0, VAR_4, 4);
    VAR_3 = FUNC_5(FUNC_0(), VAR_5, VAR_0, ((void*)0), 0);

    FUNC_2(FUNC_0(), VAR_5);

    if (VAR_2 != 4)
        return 0;

    if (VAR_3 != 37009)
        return 0;

    FUNC_1("RAW read on in-memory created profiles");
    VAR_5 = FUNC_3(FUNC_0());
    VAR_2 = FUNC_5(FUNC_0(), VAR_5, VAR_1, VAR_4, 4);
    VAR_3 = FUNC_5(FUNC_0(), VAR_5, VAR_1, ((void*)0), 0);

    FUNC_2(FUNC_0(), VAR_5);

    if (VAR_2 != 4)
        return 0;
    if (VAR_3 != 20)
        return 0;

    return 1;
}
