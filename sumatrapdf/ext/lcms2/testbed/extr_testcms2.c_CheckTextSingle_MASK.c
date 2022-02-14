
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsTagSignature ;
typedef int cmsMLU ;
typedef int cmsInt32Number ;
typedef int cmsHPROFILE ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *,int ,int ,char*,int) ;
 int FUNC_4 (int ,int *,int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static
cmsInt32Number FUNC_8(cmsInt32Number VAR_4, cmsHPROFILE VAR_5, cmsTagSignature VAR_6)
{
    cmsMLU *VAR_7, *VAR_8;
    cmsInt32Number VAR_9;
    char VAR_10[256];


    switch (VAR_4) {

    case 1:
        VAR_7 = FUNC_1(FUNC_0(), 0);
        FUNC_4(FUNC_0(), VAR_7, VAR_3, VAR_2, "Test test");
        VAR_9 = FUNC_6(FUNC_0(), VAR_5, VAR_6, VAR_7);
        FUNC_2(FUNC_0(), VAR_7);
        return VAR_9;

    case 2:
        VAR_8 = (cmsMLU *) FUNC_5(FUNC_0(), VAR_5, VAR_6);
        if (VAR_8 == ((void*)0)) return 0;
        FUNC_3(FUNC_0(), VAR_8, VAR_3, VAR_2, VAR_10, 256);
        if (FUNC_7(VAR_10, "Test test") != 0) return VAR_0;
        return VAR_1;

    default:
        return 0;
    }
}
