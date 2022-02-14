
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int str ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,int ,int *) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    const char VAR_5[] = "123";
    char VAR_6[4];
    char *VAR_7, *VAR_8;
    DWORD VAR_9;

    VAR_7 = FUNC_0(((void*)0), sizeof(VAR_5), VAR_1, VAR_4);
    FUNC_5(VAR_7 != ((void*)0), "VirtualAlloc failed\n");
    FUNC_4(VAR_7, VAR_5, sizeof(VAR_5));
    FUNC_5(FUNC_2(VAR_7, sizeof(VAR_5), VAR_3, &VAR_9), "VirtualProtect failed\n");

    FUNC_8(VAR_6, "aBc");
    VAR_8 = FUNC_3(VAR_6);
    FUNC_5(VAR_8 == VAR_6, "_strupr returned %p\n", VAR_8);
    FUNC_5(!FUNC_7(VAR_6, "ABC"), "str2 = %s\n", VAR_6);

    VAR_8 = FUNC_3(VAR_7);
    FUNC_5(VAR_8 == VAR_7, "_strupr returned %p\n", VAR_8);
    FUNC_5(!FUNC_7(VAR_7, "123"), "mem = %s\n", VAR_7);

    if(!FUNC_6(VAR_0, "english")) {
        FUNC_1(VAR_7, sizeof(VAR_5), VAR_2);
        FUNC_9("English locale _strupr tests\n");
        return;
    }

    FUNC_8(VAR_6, "aBc");
    VAR_8 = FUNC_3(VAR_6);
    FUNC_5(VAR_8 == VAR_6, "_strupr returned %p\n", VAR_8);
    FUNC_5(!FUNC_7(VAR_6, "ABC"), "str2 = %s\n", VAR_6);

    if (0)
    {
        VAR_8 = FUNC_3(VAR_7);
        FUNC_5(VAR_8 == VAR_7, "_strupr returned %p\n", VAR_8);
        FUNC_5(!FUNC_7(VAR_7, "123"), "mem = %s\n", VAR_7);
    }

    FUNC_6(VAR_0, "C");
    FUNC_1(VAR_7, sizeof(VAR_5), VAR_2);
}
