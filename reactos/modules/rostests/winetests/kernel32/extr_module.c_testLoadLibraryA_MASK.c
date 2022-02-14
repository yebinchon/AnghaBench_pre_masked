
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HMODULE ;
typedef int * FARPROC ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    HMODULE VAR_0, VAR_1;
    FARPROC VAR_2;

    FUNC_4(0xdeadbeef);
    VAR_0 = FUNC_3("kernel32.dll");
    FUNC_5( VAR_0 != ((void*)0), "kernel32.dll should be loadable\n");
    FUNC_5( FUNC_1() == 0xdeadbeef, "GetLastError should be 0xdeadbeef but is %d\n", FUNC_1());

    VAR_2 = FUNC_2(VAR_0, "CreateFileA");
    FUNC_5( VAR_2 != ((void*)0), "CreateFileA should be there\n");
    FUNC_5( FUNC_1() == 0xdeadbeef, "GetLastError should be 0xdeadbeef but is %d\n", FUNC_1());

    FUNC_4(0xdeadbeef);
    VAR_1 = FUNC_3("kernel32   ");
    FUNC_5( VAR_1 != ((void*)0), "\"kernel32   \" should be loadable\n" );
    FUNC_5( FUNC_1() == 0xdeadbeef, "GetLastError should be 0xdeadbeef but is %d\n", FUNC_1() );
    FUNC_5( VAR_0 == VAR_1, "Loaded wrong module\n" );
    FUNC_0(VAR_1);
    FUNC_0(VAR_0);
}
