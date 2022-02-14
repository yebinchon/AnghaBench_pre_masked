
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bufW ;
typedef int bufA ;
typedef char WCHAR ;
typedef int * HMODULE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (char const*) ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,char*,int,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char,int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(const char* VAR_3)
{
    HMODULE VAR_4;
    char VAR_5[VAR_1];
    WCHAR VAR_6[VAR_1];
    DWORD VAR_7, VAR_8 = 0, VAR_9, VAR_10 = 0;

    VAR_4 = (VAR_3) ? FUNC_3(VAR_3) : ((void*)0);


    FUNC_9(VAR_5, '-', sizeof(VAR_5));
    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5));
    FUNC_10(FUNC_0() == VAR_0 ||
       FUNC_5(FUNC_0() == 0xdeadbeef),
       "LastError was not reset: %u\n", FUNC_0());
    FUNC_10(VAR_7 > 0, "Getting module filename for handle %p\n", VAR_4);

    if (VAR_2)
    {
        FUNC_9(VAR_6, '-', sizeof(VAR_6));
        FUNC_4(0xdeadbeef);
        VAR_8 = FUNC_2(VAR_4, VAR_6, sizeof(VAR_6) / sizeof(WCHAR));
        FUNC_10(FUNC_0() == VAR_0 ||
           FUNC_5(FUNC_0() == 0xdeadbeef),
           "LastError was not reset: %u\n", FUNC_0());
        FUNC_10(VAR_8 > 0, "Getting module filename for handle %p\n", VAR_4);
    }

    FUNC_10(VAR_7 == FUNC_11(VAR_5), "Unexpected length of GetModuleFilenameA (%d/%d)\n", VAR_7, FUNC_7(VAR_5));

    if (VAR_2)
    {
        FUNC_10(VAR_8 == FUNC_8(VAR_6), "Unexpected length of GetModuleFilenameW (%d/%d)\n", VAR_8, FUNC_8(VAR_6));
        FUNC_10(FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8), "Comparing GetModuleFilenameAW results\n");
    }


    FUNC_9(VAR_5, '-', sizeof(VAR_5));
    VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_7 / 2);
    FUNC_10(VAR_9 > 0, "Getting module filename for handle %p\n", VAR_4);

    if (VAR_2)
    {
        FUNC_9(VAR_6, '-', sizeof(VAR_6));
        VAR_10 = FUNC_2(VAR_4, VAR_6, VAR_8 / 2);
        FUNC_10(VAR_10 > 0, "Getting module filename for handle %p\n", VAR_4);
        FUNC_10(FUNC_6(VAR_5, VAR_6, VAR_9, VAR_10), "Comparing GetModuleFilenameAW results with buffer too small\n" );
        FUNC_10(VAR_8 / 2 == VAR_10, "Correct length in GetModuleFilenameW with buffer too small (%d/%d)\n", VAR_8 / 2, VAR_10);
    }

    FUNC_10(VAR_7 / 2 == VAR_9,
       "Correct length in GetModuleFilenameA with buffer too small (%d/%d)\n", VAR_7 / 2, VAR_9);
}
