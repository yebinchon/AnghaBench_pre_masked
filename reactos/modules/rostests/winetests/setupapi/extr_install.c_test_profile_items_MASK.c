
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int *,int ,int *,int ,char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,char const*) ;
 char* VAR_7 ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 (char*,int,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    char VAR_8[VAR_4], VAR_9[VAR_4];

    static const char *VAR_10 =
        "[Version]\n"
        "Signature=\"$Chicago$\"\n"
        "[DefaultInstall]\n"
        "ProfileItems=TestItem,TestItem2,TestGroup\n"
        "[TestItem]\n"
        "Name=TestItem\n"
        "CmdLine=11,,notepad.exe\n"
        "[TestItem2]\n"
        "Name=TestItem2\n"
        "CmdLine=11,,notepad.exe\n"
        "SubDir=TestDir\n"
        "[TestGroup]\n"
        "Name=TestGroup,4\n"
        ;

    if (VAR_6 != FUNC_5(((void*)0), VAR_0, ((void*)0), VAR_5, VAR_9))
    {
        FUNC_9("No common program files directory exists\n");
        goto cleanup;
    }

    FUNC_10(VAR_8, VAR_4, "%s\\TestDir", VAR_9);
    if (!FUNC_0(VAR_8, ((void*)0)) && FUNC_3() == VAR_2)
    {
        FUNC_9("need admin rights\n");
        return;
    }
    FUNC_4(VAR_8);

    FUNC_6(VAR_7, VAR_10);
    FUNC_11(VAR_8, "%s\\%s", VAR_1, VAR_7);
    FUNC_8("DefaultInstall", 128, VAR_8);

    FUNC_10(VAR_8, VAR_4, "%s\\TestItem.lnk", VAR_9);
    FUNC_10(VAR_8, VAR_4, "%s\\TestDir", VAR_9);
    FUNC_7(VAR_3 != FUNC_2(VAR_8), "directory not created\n");
    FUNC_10(VAR_8, VAR_4, "%s\\TestDir\\TestItem2.lnk", VAR_9);
    FUNC_7(VAR_3 != FUNC_2(VAR_8), "link not created\n");
    FUNC_10(VAR_8, VAR_4, "%s\\TestGroup", VAR_9);
    FUNC_7(VAR_3 != FUNC_2(VAR_8), "group not created\n");

    FUNC_10(VAR_8, VAR_4, "%s\\TestItem.lnk", VAR_9);
    FUNC_1(VAR_8);
    FUNC_10(VAR_8, VAR_4, "%s\\TestDir\\TestItem2.lnk", VAR_9);
    FUNC_1(VAR_8);
    FUNC_10(VAR_8, VAR_4, "%s\\TestItem2.lnk", VAR_9);
    FUNC_1(VAR_8);
    FUNC_10(VAR_8, VAR_4, "%s\\TestDir", VAR_9);
    FUNC_4(VAR_8);
    FUNC_10(VAR_8, VAR_4, "%s\\TestGroup", VAR_9);
    FUNC_4(VAR_8);

cleanup:
    FUNC_1(VAR_7);
}
