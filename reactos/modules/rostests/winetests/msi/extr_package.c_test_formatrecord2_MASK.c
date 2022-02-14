
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int MSIHANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,char*,int*) ;
 int FUNC_4 (int,int,char*) ;
 int FUNC_5 (int,char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ,int*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    MSIHANDLE VAR_3, VAR_4 ;
    char VAR_5[0x100];
    DWORD VAR_6;
    UINT VAR_7;

    VAR_7 = FUNC_9(FUNC_7(), &VAR_3);
    if (VAR_7 == VAR_0)
    {
        FUNC_10("Not enough rights to perform tests\n");
        FUNC_0(VAR_2);
        return;
    }
    FUNC_8( VAR_7 == VAR_1, "failed to create package %u\n", VAR_7);

    VAR_7 = FUNC_5(VAR_3, "Manufacturer", " " );
    FUNC_8( VAR_7 == VAR_1, "set property failed\n");

    VAR_4 = FUNC_2(2);
    FUNC_8(VAR_4, "create record failed\n");

    VAR_7 = FUNC_4( VAR_4, 0, "[ProgramFilesFolder][Manufacturer]\\asdf");
    FUNC_8( VAR_7 == VAR_1, "format record failed\n");

    VAR_5[0] = 0;
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3( VAR_3, VAR_4, VAR_5, &VAR_6 );
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);

    VAR_7 = FUNC_4(VAR_4, 0, "[foo][1]");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_7 = FUNC_4(VAR_4, 1, "hoo");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6);
    FUNC_8( VAR_6 == 3, "size wrong\n");
    FUNC_8( 0 == FUNC_11(VAR_5,"hoo"), "wrong output %s\n",VAR_5);
    FUNC_8( VAR_7 == VAR_1, "format failed\n");

    VAR_7 = FUNC_4(VAR_4, 0, "x[~]x");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6);
    FUNC_8( VAR_6 == 3, "size wrong\n");
    FUNC_8( 0 == FUNC_11(VAR_5,"x"), "wrong output %s\n",VAR_5);
    FUNC_8( VAR_7 == VAR_1, "format failed\n");

    VAR_7 = FUNC_4(VAR_4, 0, "[foo.$%}][1]");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_7 = FUNC_4(VAR_4, 1, "hoo");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6);
    FUNC_8( VAR_6 == 3, "size wrong\n");
    FUNC_8( 0 == FUNC_11(VAR_5,"hoo"), "wrong output %s\n",VAR_5);
    FUNC_8( VAR_7 == VAR_1, "format failed\n");

    VAR_7 = FUNC_4(VAR_4, 0, "[\\[]");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6);
    FUNC_8( VAR_6 == 1, "size wrong\n");
    FUNC_8( 0 == FUNC_11(VAR_5,"["), "wrong output %s\n",VAR_5);
    FUNC_8( VAR_7 == VAR_1, "format failed\n");

    FUNC_6("FOO", "BAR");
    VAR_7 = FUNC_4(VAR_4, 0, "[%FOO]");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6);
    FUNC_8( VAR_6 == 3, "size wrong\n");
    FUNC_8( 0 == FUNC_11(VAR_5,"BAR"), "wrong output %s\n",VAR_5);
    FUNC_8( VAR_7 == VAR_1, "format failed\n");

    VAR_7 = FUNC_4(VAR_4, 0, "[[1]]");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_7 = FUNC_4(VAR_4, 1, "%FOO");
    FUNC_8( VAR_7 == VAR_1, "Expected ERROR_SUCCESS got %d\n", VAR_7);
    VAR_6 = sizeof VAR_5;
    VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_6);
    FUNC_8( VAR_6 == 3, "size wrong\n");
    FUNC_8( 0 == FUNC_11(VAR_5,"BAR"), "wrong output %s\n",VAR_5);
    FUNC_8( VAR_7 == VAR_1, "format failed\n");

    FUNC_1( VAR_4 );
    FUNC_1( VAR_3 );
    FUNC_0(VAR_2);
}
