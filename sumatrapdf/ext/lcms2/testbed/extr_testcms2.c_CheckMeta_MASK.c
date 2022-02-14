
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef int cmsInt32Number ;
typedef int * cmsHPROFILE ;
typedef int * cmsHANDLE ;
typedef int FILE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,char*,char*) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ,int *,char*,int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int,int ,int *) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static
cmsInt32Number FUNC_10(void)
{
    char *VAR_1;
    cmsHANDLE VAR_2;
    cmsHPROFILE VAR_3;
    cmsUInt32Number VAR_4;
    FILE *VAR_5;
    int VAR_6;


    VAR_3 = FUNC_2(FUNC_0(), "ibm-t61.icc", "r");
    if (VAR_3 == ((void*)0)) return 0;



    VAR_2 = FUNC_3(FUNC_0(), VAR_3, VAR_0);
    if (VAR_2 == ((void*)0)) return 0;


    VAR_6 = FUNC_4(FUNC_0(), VAR_3, ((void*)0), &VAR_4);
    if (!VAR_6) return 0;

    VAR_1 = (char*) FUNC_9(VAR_4);
    VAR_6 = FUNC_4(FUNC_0(), VAR_3, VAR_1, &VAR_4);
    if (!VAR_6) return 0;



    VAR_5 = FUNC_6("new.icc", "wb");
    FUNC_8(VAR_1, 1, VAR_4, VAR_5);
    FUNC_5(VAR_5);
    FUNC_7(VAR_1);

    FUNC_1(FUNC_0(), VAR_3);


    VAR_3 = FUNC_2(FUNC_0(), "new.icc", "r");



    VAR_2 = FUNC_3(FUNC_0(), VAR_3, VAR_0);
   if (VAR_2 == ((void*)0)) return 0;

   FUNC_1(FUNC_0(), VAR_3);
    return 1;
}
