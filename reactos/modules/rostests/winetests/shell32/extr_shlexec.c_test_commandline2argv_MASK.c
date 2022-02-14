
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cmd; } ;
typedef TYPE_1__ cmdline_tests_t ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 char** FUNC_1 (char const*,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char**) ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (TYPE_1__ const*) ;
 char** FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    static const WCHAR VAR_3[] = {'e','x','e',0};
    const cmdline_tests_t* VAR_4;
    WCHAR VAR_5[VAR_1];
    LPWSTR *VAR_6;
    int VAR_7;
    DWORD VAR_8;

    VAR_4 = VAR_2;
    while (VAR_4->cmd)
    {
        if (!FUNC_9(VAR_4))
            return;
        VAR_4++;
    }

    FUNC_5(0xdeadbeef);
    VAR_6 = FUNC_1(VAR_3, ((void*)0));
    VAR_8 = FUNC_2();
    FUNC_8(VAR_6 == ((void*)0) && VAR_8 == VAR_0, "expected NULL with ERROR_INVALID_PARAMETER got %p with %u\n", VAR_6, VAR_8);

    FUNC_5(0xdeadbeef);
    VAR_6 = FUNC_1(((void*)0), ((void*)0));
    VAR_8 = FUNC_2();
    FUNC_8(VAR_6 == ((void*)0) && VAR_8 == VAR_0, "expected NULL with ERROR_INVALID_PARAMETER got %p with %u\n", VAR_6, VAR_8);

    *VAR_5 = 0;
    VAR_6 = FUNC_1(VAR_5, &VAR_7);
    FUNC_8(VAR_7 == 1 || FUNC_6(VAR_7 > 1), "expected 1 args, got %d\n", VAR_7);
    FUNC_8(!VAR_6 || (!VAR_6[VAR_7] || FUNC_6(VAR_6[VAR_7] != ((void*)0)) ),
       "expected NULL-terminated list of commandline arguments\n");
    if (VAR_7 == 1)
    {
        FUNC_3(((void*)0), VAR_5, FUNC_0(VAR_5));
        FUNC_8(!FUNC_7(VAR_6[0], VAR_5), "wrong path to the current executable: %s instead of %s\n", FUNC_10(VAR_6[0]), FUNC_10(VAR_5));
    }
    if (VAR_6) FUNC_4(VAR_6);
}
