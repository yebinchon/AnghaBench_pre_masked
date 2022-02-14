
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef int * HRSRC ;
typedef int * HBITMAP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    HBITMAP VAR_1;
    HRSRC VAR_2;

    VAR_1 = FUNC_3(FUNC_2(((void*)0)), FUNC_4(100));
    FUNC_5(VAR_1 != ((void*)0), "Could not load a bitmap resource\n");
    if (VAR_1) FUNC_0(VAR_1);

    VAR_2 = FUNC_1(FUNC_2(((void*)0)), "#100", (LPCSTR)VAR_0);
    FUNC_5(VAR_2 != ((void*)0), "Could not find a bitmap resource with a numeric string\n");

    VAR_1 = FUNC_3(FUNC_2(((void*)0)), "#100");
    FUNC_5(VAR_1 != ((void*)0), "Could not load a bitmap resource with a numeric string\n");
    if (VAR_1) FUNC_0(VAR_1);
}
