
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef scalar_t__ HANDLE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int*,int,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,char const**) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,int,int *) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 scalar_t__* VAR_8 ;
 int FUNC_12 (int,char*,int) ;
 int FUNC_13 (int,int ) ;
 int FUNC_14 (char*,char*,int) ;
 int FUNC_15 (char*,char*) ;
 scalar_t__ FUNC_16 (char*,char*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (int,char*,int) ;

__attribute__((used)) static void FUNC_20(const char* VAR_9)
{
    int VAR_10[2];
    char VAR_11[12], VAR_12[12];
    FILE* VAR_13;
    const char* VAR_14[6];
    char VAR_15[4096];
    char VAR_16[4096];
    int VAR_17;
    int VAR_18;


    if (FUNC_1(VAR_10, 1024, VAR_1) < 0)
    {
        FUNC_11(0, "pipe failed with errno %d\n", VAR_5);
        return;
    }

    VAR_14[0] = FUNC_9(VAR_9);
    VAR_14[1] = "tests/file.c";
    VAR_14[2] = "pipes";
    VAR_14[3] = VAR_11; FUNC_14(VAR_11, "%d", VAR_10[0]);
    VAR_14[4] = VAR_12; FUNC_14(VAR_12, "%d", VAR_10[1]);
    VAR_14[5] = ((void*)0);
    VAR_8[0] = (HANDLE)FUNC_2(VAR_4, VAR_9, VAR_14);
    VAR_18=FUNC_3(VAR_10[1]);
    FUNC_11(!VAR_18, "unable to close %d: %d\n", VAR_10[1], VAR_5);

    for (VAR_18=0; VAR_18<VAR_0; VAR_18++) {
       VAR_17=FUNC_12(VAR_10[0], VAR_15, sizeof(VAR_15)-1);
       FUNC_11(VAR_17 == FUNC_17(VAR_7), "i %d, got %d\n", VAR_18, VAR_17);
       if (VAR_17 > 0)
           VAR_15[VAR_17]='\0';
       FUNC_11(FUNC_16(VAR_15, VAR_7) == 0, "expected to read '%s', got '%s'\n", VAR_7, VAR_15);
   }

    VAR_17=FUNC_12(VAR_10[0], VAR_15, sizeof(VAR_15)-1);
    FUNC_11(VAR_17 == 0, "expected to read 0 bytes, got %d\n", VAR_17);
    VAR_18=FUNC_3(VAR_10[0]);
    FUNC_11(!VAR_18, "unable to close %d: %d\n", VAR_10[0], VAR_5);


    if (FUNC_1(VAR_10, 1024, VAR_1) < 0)
    {
        FUNC_11(0, "pipe failed with errno %d\n", VAR_5);
        return;
    }

    VAR_14[1] = "tests/file.c";
    VAR_14[2] = "pipes";
    VAR_14[3] = VAR_11; FUNC_14(VAR_11, "%d", VAR_10[0]);
    VAR_14[4] = VAR_12; FUNC_14(VAR_12, "%d", VAR_10[1]);
    VAR_14[5] = ((void*)0);
    VAR_8[1] = (HANDLE)FUNC_2(VAR_4, VAR_9, VAR_14);
    VAR_18=FUNC_3(VAR_10[1]);
    FUNC_11(!VAR_18, "unable to close %d: %d\n", VAR_10[1], VAR_5);
    VAR_13=FUNC_5(VAR_10[0], "r");





    VAR_16[0] = 0;
    for (VAR_18=0; VAR_18<VAR_0; VAR_18++)
       FUNC_15(VAR_16, VAR_7);
    VAR_17=FUNC_8(VAR_15, 1, sizeof(VAR_15)-1, VAR_13);
    FUNC_11(VAR_17 == FUNC_17(VAR_16), "fread() returned %d: ferror=%d\n", VAR_17, FUNC_7(VAR_13));
    if (VAR_17 > 0)
       VAR_15[VAR_17]='\0';
    FUNC_11(FUNC_16(VAR_15, VAR_16) == 0, "got '%s' expected '%s'\n", VAR_15, VAR_16);


    FUNC_0(100);
    VAR_17=FUNC_8(VAR_15, 1, sizeof(VAR_15)-1, VAR_13);
    FUNC_11(VAR_17 == 0, "fread() returned %d instead of 0\n", VAR_17);
    FUNC_11(FUNC_7(VAR_13) == 0, "got ferror() = %d\n", FUNC_7(VAR_13));
    FUNC_11(FUNC_6(VAR_13), "feof() is false!\n");

    VAR_18=FUNC_4(VAR_13);
    FUNC_11(!VAR_18, "unable to close the pipe: %d\n", VAR_5);


    if (FUNC_1(VAR_10, 1024, VAR_1) < 0)
    {
        FUNC_11(0, "pipe failed with errno %d\n", VAR_5);
        return;
    }
    VAR_17 = FUNC_19(VAR_10[1], "\r\n\rab\r\n", 7);
    FUNC_11(VAR_17 == 7, "write returned %d, errno = %d\n", VAR_17, VAR_5);
    FUNC_13(VAR_10[0], VAR_2);
    VAR_17 = FUNC_12(VAR_10[0], VAR_15, 1);
    FUNC_11(VAR_17 == 1, "read returned %d, expected 1\n", VAR_17);
    FUNC_11(VAR_15[0] == '\n', "buf[0] = %x, expected '\\n'\n", VAR_15[0]);
    VAR_17 = FUNC_12(VAR_10[0], VAR_15, 1);
    FUNC_11(VAR_17 == 1, "read returned %d, expected 1\n", VAR_17);
    FUNC_11(VAR_15[0] == '\r', "buf[0] = %x, expected '\\r'\n", VAR_15[0]);
    VAR_17 = FUNC_12(VAR_10[0], VAR_15, 1);
    FUNC_11(VAR_17 == 1, "read returned %d, expected 1\n", VAR_17);
    FUNC_11(VAR_15[0] == 'a', "buf[0] = %x, expected 'a'\n", VAR_15[0]);
    VAR_17 = FUNC_12(VAR_10[0], VAR_15, 2);
    FUNC_11(VAR_17 == 2, "read returned %d, expected 1\n", VAR_17);
    FUNC_11(VAR_15[0] == 'b', "buf[0] = %x, expected 'b'\n", VAR_15[0]);
    FUNC_11(VAR_15[1] == '\n', "buf[1] = %x, expected '\\n'\n", VAR_15[1]);

    if (VAR_6)
    {

        VAR_17 = FUNC_19(VAR_10[1], "a\0b", 3);
        FUNC_11(VAR_17 == 3, "write returned %d, errno = %d\n", VAR_17, VAR_5);
        VAR_15[2] = 'z';
        VAR_15[3] = 'z';
        FUNC_13(VAR_10[0], VAR_3);
        VAR_17 = FUNC_12(VAR_10[0], VAR_15, 4);
        FUNC_11(VAR_17 == 2, "read returned %d, expected 2\n", VAR_17);
        FUNC_11(!FUNC_10(VAR_15, "a\0bz", 4), "read returned incorrect data\n");
        VAR_17 = FUNC_19(VAR_10[1], "\0", 1);
        FUNC_11(VAR_17 == 1, "write returned %d, errno = %d\n", VAR_17, VAR_5);
        VAR_15[0] = 'z';
        VAR_15[1] = 'z';
        VAR_17 = FUNC_12(VAR_10[0], VAR_15, 2);
        FUNC_11(VAR_17 == 0, "read returned %d, expected 0\n", VAR_17);
        FUNC_11(!FUNC_10(VAR_15, "\0z", 2), "read returned incorrect data\n");
    }
    else
    {
        FUNC_18("unicode mode tests on pipe\n");
    }

    FUNC_3(VAR_10[1]);
    FUNC_3(VAR_10[0]);
}
