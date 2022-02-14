
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * cmsHPROFILE ;
typedef int cmsFloat64Number ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 (char*,char*,int) ;

int FUNC_10(int VAR_1, char *VAR_2[])
{
       cmsHPROFILE VAR_3;
    char* VAR_4;
    cmsFloat64Number VAR_5;

    if (VAR_1 != 3) return FUNC_0();

    VAR_4 = VAR_2[1];
    if (FUNC_9(VAR_4, "--r", 3) != 0) return FUNC_0();
    VAR_4 += 3;
    if (!*VAR_4) { FUNC_6(VAR_0, "Wrong version number\n"); return 1; }

    VAR_5 = FUNC_1(VAR_4);

    VAR_3 = FUNC_3(VAR_2[2], "r");
    if (VAR_3 == ((void*)0)) { FUNC_6(VAR_0, "'%s': cannot open\n", VAR_2[2]); return 1; }

    FUNC_5(VAR_3, VAR_5);
    FUNC_4(VAR_3, "$$tmp.icc");
    FUNC_2(VAR_3);

    FUNC_7(VAR_2[2]);
    FUNC_8("$$tmp.icc", VAR_2[2]);
    return 0;


}
