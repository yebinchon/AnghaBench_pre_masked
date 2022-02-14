
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int windir ;
typedef scalar_t__ HRESULT ;
typedef char CHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int,char*,...) ;
 scalar_t__ FUNC_11 (char*,char*,char*,int ) ;
 int FUNC_12 (char*,char*,char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    BOOL VAR_9;
    HRESULT VAR_10;
    CHAR VAR_11[VAR_6];
    CHAR VAR_12[VAR_6];

    FUNC_9(VAR_11, VAR_2);
    FUNC_8(VAR_11, "\\backup\\basename.INI");




    VAR_10 = FUNC_11(((void*)0), "backup", "basename", VAR_0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    FUNC_10(!FUNC_1(VAR_11), "Expected path to not exist\n");

    FUNC_9(VAR_11, VAR_2);
    FUNC_8(VAR_11, "\\backup\\.INI");


    VAR_10 = FUNC_11("one\0two\0three\0", "backup", "", VAR_0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    FUNC_10(!FUNC_1(VAR_11), "Expected path to not exist\n");

    FUNC_9(VAR_11, VAR_2);
    FUNC_8(VAR_11, "\\basename.INI");


    VAR_10 = FUNC_11("one\0two\0three\0", ((void*)0), "basename", 0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    FUNC_10(!FUNC_1(VAR_11), "Expected path to not exist\n");

    FUNC_9(VAR_11, "c:\\basename.INI");


    VAR_10 = FUNC_11("one\0two\0three\0", "c:\\", "basename", VAR_0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    if (FUNC_2(VAR_11) != VAR_5)
    {
        FUNC_10(FUNC_7(VAR_11), "Expected ini file to be hidden\n");
        FUNC_10(FUNC_1(VAR_11), "Expected path to exist\n");
    }
    else
        FUNC_13("Test file could not be created\n");

    FUNC_9(VAR_11, VAR_2);
    FUNC_8(VAR_11, "\\backup\\basename.INI");


    FUNC_4("backup");
    VAR_10 = FUNC_11("one\0two\0three\0", "backup", "basename", VAR_0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    FUNC_10(!FUNC_7(VAR_11), "Expected ini file to not be hidden\n");
    FUNC_10(!FUNC_1(VAR_11), "Expected path to not exist\n");


    FUNC_0("backup", ((void*)0));
    VAR_10 = FUNC_11("one\0two\0three\0", "backup", "basename", VAR_0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    FUNC_10(FUNC_7(VAR_11), "Expected ini file to be hidden\n");
    FUNC_10(FUNC_1(VAR_11), "Expected path to exist\n");
    FUNC_4("backup");

    FUNC_3(VAR_12, sizeof(VAR_12));
    FUNC_12(VAR_11, "%s\\basename.INI", VAR_12);


    VAR_10 = FUNC_11("one\0two\0three\0", ((void*)0), "basename", VAR_0);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);


    FUNC_5(VAR_11, VAR_4);
    VAR_10 = FUNC_11("one\0three\0", ((void*)0), "basename", VAR_1);
    FUNC_5(VAR_11, VAR_4);
    FUNC_10(VAR_10 == VAR_7, "Expected S_OK, got %d\n", VAR_10);
    VAR_9 = FUNC_1(VAR_11);
    FUNC_10(VAR_9 == VAR_8 ||
       FUNC_6(VAR_9 == VAR_3),
       "Expected path to exist\n");
}
