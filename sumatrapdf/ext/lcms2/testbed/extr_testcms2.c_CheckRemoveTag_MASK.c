
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsMLU ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *,char*,char*,char*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ,int ,int *) ;

__attribute__((used)) static
cmsInt32Number FUNC_7(void)
{
    cmsHPROFILE VAR_1;
    cmsMLU *VAR_2;
    int VAR_3;

    VAR_1 = FUNC_2(((void*)0));


    VAR_2 = FUNC_3 (((void*)0), 1);
    VAR_3 = FUNC_5(FUNC_0(), VAR_2, "en", "US", "bar");
    if (!VAR_3) return 0;

    VAR_3 = FUNC_6(FUNC_0(), VAR_1, VAR_0, VAR_2);
    if (!VAR_3) return 0;

    FUNC_4(FUNC_0(), VAR_2);


    VAR_3 = FUNC_6(FUNC_0(), VAR_1, VAR_0, ((void*)0));
    if (!VAR_3) return 0;


    FUNC_1(FUNC_0(), VAR_1);
    return 1;
}
