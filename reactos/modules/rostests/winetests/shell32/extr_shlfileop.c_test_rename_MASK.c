
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* pFrom; char* pTo; int fFlags; int * lpszProgressTitle; int * hNameMappings; int wFunc; int * hwnd; } ;
typedef TYPE_1__ SHFILEOPSTRUCTA ;
typedef int DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_6 (int,char*,...) ;
 scalar_t__ VAR_19 ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    SHFILEOPSTRUCTA VAR_20, VAR_21;
    CHAR VAR_22[5*VAR_18];
    CHAR VAR_23[5*VAR_18];
    DWORD VAR_24;

    VAR_20.hwnd = ((void*)0);
    VAR_20.wFunc = VAR_17;
    VAR_20.pFrom = VAR_22;
    VAR_20.pTo = VAR_23;
    VAR_20.fFlags = VAR_13 | VAR_16 | VAR_15;
    VAR_20.hNameMappings = ((void*)0);
    VAR_20.lpszProgressTitle = ((void*)0);

    FUNC_7(VAR_22, "test1.txt\0");
    FUNC_7(VAR_23, "test4.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_5 ||
       VAR_24 == VAR_1 ||
       FUNC_1(VAR_24 == VAR_9),
       "Expected ERROR_ALREADY_EXISTS or DE_FILEDESTISFLD, got %d\n", VAR_24);
    FUNC_6(FUNC_4("test1.txt"), "The file is renamed\n");

    FUNC_7(VAR_22, "test3.txt\0");
    FUNC_7(VAR_23, "test4.txt\\test1.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    if (VAR_24 == VAR_0)
    {

        FUNC_6(!FUNC_4("test4.txt\\test1.txt"), "The file is renamed\n");
    }
    else
    {
        FUNC_6(VAR_24 == VAR_11, "File is renamed moving to other directory\n");
        FUNC_6(FUNC_4("test4.txt\\test1.txt"), "The file is not renamed\n");
    }

    FUNC_7(VAR_22, "test1.txt\0test2.txt\0test4.txt\0");
    FUNC_7(VAR_23, "test6.txt\0test7.txt\0test8.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_8 ||
       VAR_24 == VAR_2 ||
       FUNC_1(VAR_24 == VAR_11),
       "Expected ERROR_GEN_FAILURE or DE_MANYSRC1DEST , got %d\n", VAR_24);
    FUNC_6(FUNC_4("test1.txt"), "The file is renamed - many files are specified\n");

    FUNC_5(&VAR_21, &VAR_20, sizeof(SHFILEOPSTRUCTA));
    VAR_21 |= VAR_12;

    FUNC_7(VAR_22, "test1.txt\0test2.txt\0test4.txt\0");
    FUNC_7(VAR_23, "test6.txt\0test7.txt\0test8.txt\0");
    VAR_24 = FUNC_0(&VAR_21);
    FUNC_6(VAR_24 == VAR_8 ||
       VAR_24 == VAR_2 ||
       FUNC_1(VAR_24 == VAR_11),
       "Expected ERROR_GEN_FAILURE or DE_MANYSRC1DEST files, got %d\n", VAR_24);
    FUNC_6(FUNC_4("test1.txt"), "The file is not renamed - many files are specified\n");

    FUNC_7(VAR_22, "test1.txt\0");
    FUNC_7(VAR_23, "test6.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_11, "Rename file failed, retval = %d\n", VAR_24);
    FUNC_6(!FUNC_4("test1.txt"), "The file is not renamed\n");
    FUNC_6(FUNC_4("test6.txt"), "The file is not renamed\n");

    FUNC_7(VAR_22, "test6.txt\0");
    FUNC_7(VAR_23, "test1.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_11, "Rename file back failed, retval = %d\n", VAR_24);

    FUNC_7(VAR_22, "test4.txt\0");
    FUNC_7(VAR_23, "test6.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_11, "Rename dir failed, retval = %d\n", VAR_24);
    FUNC_6(!FUNC_3("test4.txt"), "The dir is not renamed\n");
    FUNC_6(FUNC_3("test6.txt"), "The dir is not renamed\n");

    FUNC_7(VAR_22, "test6.txt\0");
    FUNC_7(VAR_23, "test4.txt\0");
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_11, "Rename dir back failed, retval = %d\n", VAR_24);
    FUNC_6(FUNC_3("test4.txt"), "The dir is not renamed\n");


    VAR_20.pFrom = "test1.txt\0test2.txt\0";
    VAR_20.pTo = "a.txt\0";
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_8 ||
       VAR_24 == VAR_2 ||
       FUNC_1(VAR_24 == VAR_11),
       "Expected ERROR_GEN_FAILURE or DE_MANYSRC1DEST, got %d\n", VAR_24);
    FUNC_6(FUNC_4("test1.txt"), "Expected test1.txt to exist\n");
    FUNC_6(FUNC_4("test2.txt"), "Expected test2.txt to exist\n");
    FUNC_6(!FUNC_4("a.txt"), "Expected a.txt to not exist\n");


    VAR_20.pFrom = "idontexist\0";
    VAR_20.pTo = "newfile\0";
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == 1026 ||
       VAR_24 == VAR_7 ||
       FUNC_1(VAR_24 == VAR_11),
       "Expected 1026 or ERROR_FILE_NOT_FOUND, got %d\n", VAR_24);
    FUNC_6(!FUNC_4("newfile"), "Expected newfile to not exist\n");


    VAR_20.pFrom = "test1.txt\0";
    VAR_20.pTo = "test2.txt\0";
    if (VAR_19)
        VAR_20.fFlags |= VAR_14;
    VAR_24 = FUNC_0(&VAR_20);
    if (VAR_24 == VAR_11)
    {

        FUNC_2("test1.txt");
    }
    else
    {
        FUNC_6(VAR_24 == VAR_5 ||
           FUNC_1(VAR_24 == VAR_3) ||
           FUNC_1(VAR_24 == VAR_9),
           "Expected ERROR_ALREADY_EXISTS, got %d\n", VAR_24);
    }


    VAR_20.pFrom = "test1.txt\0";
    VAR_20.pTo = "\0";
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_6 ||
       VAR_24 == VAR_0 ||
       VAR_24 == VAR_1 ||
       FUNC_1(VAR_24 == VAR_3) ||
       FUNC_1(VAR_24 == 65652),
       "Expected ERROR_CANCELLED or DE_DIFFDIR, got %u\n", VAR_24);
    FUNC_6(FUNC_4("test1.txt"), "Expected test1.txt to exist\n");


    VAR_20.pFrom = "\0";
    VAR_24 = FUNC_0(&VAR_20);
    FUNC_6(VAR_24 == VAR_4 ||
       VAR_24 == VAR_2 ||
       FUNC_1(VAR_24 == VAR_11),
       "Expected ERROR_ACCESS_DENIED or DE_MANYSRC1DEST, got %d\n", VAR_24);


    if (0)
    {
        VAR_20.pFrom = ((void*)0);
        VAR_24 = FUNC_0(&VAR_20);
        FUNC_6(VAR_24 == VAR_10, "Expected ERROR_INVALID_PARAMETER, got %d\n", VAR_24);
    }
}
