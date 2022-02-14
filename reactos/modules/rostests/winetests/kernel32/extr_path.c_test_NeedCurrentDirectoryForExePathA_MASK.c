
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    if (!&FUNC_2)
    {
        FUNC_3("NeedCurrentDirectoryForExePathA is not available\n");
        return;
    }


    if (0)
        FUNC_2(((void*)0));

    FUNC_0("NoDefaultCurrentDirectoryInExePath", ((void*)0));
    FUNC_1(FUNC_2("."), "returned FALSE for \".\"\n");
    FUNC_1(FUNC_2("c:\\"), "returned FALSE for \"c:\\\"\n");
    FUNC_1(FUNC_2("cmd.exe"), "returned FALSE for \"cmd.exe\"\n");

    FUNC_0("NoDefaultCurrentDirectoryInExePath", "nya");
    FUNC_1(!FUNC_2("."), "returned TRUE for \".\"\n");
    FUNC_1(FUNC_2("c:\\"), "returned FALSE for \"c:\\\"\n");
    FUNC_1(!FUNC_2("cmd.exe"), "returned TRUE for \"cmd.exe\"\n");
}
