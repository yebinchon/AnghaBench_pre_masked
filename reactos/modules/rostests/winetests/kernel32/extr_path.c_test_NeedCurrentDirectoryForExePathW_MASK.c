
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    const WCHAR VAR_0[] = {'.', 0};
    const WCHAR VAR_1[] = {'c', ':', '\\', 0};
    const WCHAR VAR_2[] = {'c', 'm', 'd', '.', 'e', 'x', 'e', 0};

    if (!&FUNC_2)
    {
        FUNC_3("NeedCurrentDirectoryForExePathW is not available\n");
        return;
    }


    if (0)
        FUNC_2(((void*)0));

    FUNC_0("NoDefaultCurrentDirectoryInExePath", ((void*)0));
    FUNC_1(FUNC_2(VAR_0), "returned FALSE for \".\"\n");
    FUNC_1(FUNC_2(VAR_1), "returned FALSE for \"c:\\\"\n");
    FUNC_1(FUNC_2(VAR_2), "returned FALSE for \"cmd.exe\"\n");

    FUNC_0("NoDefaultCurrentDirectoryInExePath", "nya");
    FUNC_1(!FUNC_2(VAR_0), "returned TRUE for \".\"\n");
    FUNC_1(FUNC_2(VAR_1), "returned FALSE for \"c:\\\"\n");
    FUNC_1(!FUNC_2(VAR_2), "returned TRUE for \"cmd.exe\"\n");
}
