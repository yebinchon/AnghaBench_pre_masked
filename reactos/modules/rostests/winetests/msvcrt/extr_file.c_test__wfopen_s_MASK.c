
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef char WCHAR ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,int,int,int *) ;
 int FUNC_4 (char const*,int,int,int *) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int **,char const*,char const*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9( void )
{
    const char VAR_1[] = "empty1";
    const WCHAR VAR_2[] = {
       'e','m','p','t','y','1',0
    };
    const WCHAR VAR_3[] = {
       'w',0
    };
    char VAR_4[16];
    FILE *VAR_5;
    int VAR_6;
    int VAR_7;

    if (!&FUNC_6)
    {
        FUNC_8("Skipping _wfopen_s test\n");
        return;
    }

    VAR_6 = FUNC_6(&VAR_5, VAR_2, VAR_3);
    FUNC_5(VAR_6 == 0, "_wfopen_s failed with %d\n", VAR_6);
    FUNC_5(VAR_5 != 0, "_wfopen_s failed to return value\n");
    FUNC_4(VAR_1, sizeof(VAR_1), 1, VAR_5);

    VAR_6 = FUNC_1(VAR_5);
    FUNC_5(VAR_6 != VAR_0, "File failed to close\n");

    VAR_5 = FUNC_2(VAR_1, "r");
    FUNC_5(VAR_5 != 0, "fopen failed\n");
    VAR_7 = FUNC_3(VAR_4, 1, sizeof(VAR_1), VAR_5);
    FUNC_5(VAR_7 == sizeof(VAR_1), "File length is %d\n", VAR_7);
    VAR_4[sizeof(VAR_1)] = '\0';
    FUNC_5(FUNC_7(VAR_1, VAR_4) == 0, "File content mismatch! Got %s, expected %s\n", VAR_4, VAR_1);

    VAR_6 = FUNC_1(VAR_5);
    FUNC_5(VAR_6 != VAR_0, "File failed to close\n");

    FUNC_5(FUNC_0(VAR_1) == 0, "Couldn't unlink file named '%s'\n", VAR_1);
}
