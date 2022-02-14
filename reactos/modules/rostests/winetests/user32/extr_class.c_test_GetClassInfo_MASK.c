
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wcx ;
struct TYPE_3__ {int cbSize; int * lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSEXA ;
typedef int WNDCLASSA ;
typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int ,char const*,int *) ;
 int FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_2[] = {'s','t','a','t','i','c',0};
    WNDCLASSA VAR_3;
    WNDCLASSEXA VAR_4;
    BOOL VAR_5;

    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_0(0, "static", &VAR_3);
    FUNC_7(VAR_5, "GetClassInfoA() error %d\n", FUNC_4());

if (0) {
    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_0(0, "static", ((void*)0));
    FUNC_7(VAR_5, "GetClassInfoA() error %d\n", FUNC_4());

    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_3(0, VAR_2, ((void*)0));
    FUNC_7(VAR_5, "GetClassInfoW() error %d\n", FUNC_4());
}

    VAR_4.cbSize = sizeof(VAR_4);
    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_1(0, "static", &VAR_4);
    FUNC_7(VAR_5, "GetClassInfoExA() error %d\n", FUNC_4());

    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_1(0, "static", ((void*)0));
    FUNC_7(!VAR_5, "GetClassInfoExA() should fail\n");
    FUNC_7(FUNC_4() == VAR_1 ||
       FUNC_6(FUNC_4() == 0xdeadbeef),
       "expected ERROR_NOACCESS, got %d\n", FUNC_4());

    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_2(0, VAR_2, ((void*)0));
    FUNC_7(!VAR_5, "GetClassInfoExW() should fail\n");
    FUNC_7(FUNC_4() == VAR_1 ||
       FUNC_6(FUNC_4() == 0xdeadbeef) ||
       FUNC_6(FUNC_4() == VAR_0),
       "expected ERROR_NOACCESS, got %d\n", FUNC_4());

    VAR_4.cbSize = 0;
    VAR_4.lpfnWndProc = ((void*)0);
    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_1(0, "static", &VAR_4);
    FUNC_7(VAR_5, "GetClassInfoExA() error %d\n", FUNC_4());
    FUNC_7(VAR_4.cbSize == 0, "expected 0, got %u\n", VAR_4.cbSize);
    FUNC_7(VAR_4.lpfnWndProc != ((void*)0), "got null proc\n");

    VAR_4.cbSize = sizeof(VAR_4) - 1;
    VAR_4.lpfnWndProc = ((void*)0);
    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_1(0, "static", &VAR_4);
    FUNC_7(VAR_5, "GetClassInfoExA() error %d\n", FUNC_4());
    FUNC_7(VAR_4.cbSize == sizeof(VAR_4) - 1, "expected sizeof(wcx)-1, got %u\n", VAR_4.cbSize);
    FUNC_7(VAR_4.lpfnWndProc != ((void*)0), "got null proc\n");

    VAR_4.cbSize = sizeof(VAR_4) + 1;
    VAR_4.lpfnWndProc = ((void*)0);
    FUNC_5(0xdeadbeef);
    VAR_5 = FUNC_1(0, "static", &VAR_4);
    FUNC_7(VAR_5, "GetClassInfoExA() error %d\n", FUNC_4());
    FUNC_7(VAR_4.cbSize == sizeof(VAR_4) + 1, "expected sizeof(wcx)+1, got %u\n", VAR_4.cbSize);
    FUNC_7(VAR_4.lpfnWndProc != ((void*)0), "got null proc\n");
}
