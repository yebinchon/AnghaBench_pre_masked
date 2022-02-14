
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int module_name ;
typedef int mbi ;
struct TYPE_7__ {int lpfnWndProc; } ;
typedef TYPE_1__ WNDCLASSW ;
struct TYPE_8__ {int lpfnWndProc; } ;
typedef TYPE_2__ WNDCLASSA ;
typedef char WCHAR ;
struct TYPE_9__ {int AllocationBase; } ;
typedef int SIZE_T ;
typedef TYPE_3__ MEMORY_BASIC_INFORMATION ;
typedef int BOOL ;


 int FUNC_0 (int *,char*,TYPE_2__*) ;
 int FUNC_1 (int *,char const*,TYPE_1__*) ;
 char* FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,char*) ;
 int VAR_0 ;
 int FUNC_6 (int ,TYPE_3__*,int) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const WCHAR VAR_1[] = {'I','M','E',0};

    char VAR_2[VAR_0], *VAR_3;
    MEMORY_BASIC_INFORMATION VAR_4;
    WNDCLASSW VAR_5;
    WNDCLASSA VAR_6;
    SIZE_T VAR_7;
    BOOL VAR_8;

    if (!FUNC_5(FUNC_4("user32.dll"), "BroadcastSystemMessageExA"))
    {
        FUNC_9("BroadcastSystemMessageExA not available, skipping IME class test\n");
        return;
    }

    FUNC_8(FUNC_4("imm32") != 0, "imm32.dll is not loaded\n");

    VAR_8 = FUNC_0(((void*)0), "IME", &VAR_6);
    FUNC_8(VAR_8, "GetClassInfo failed: %d\n", FUNC_2());

    VAR_7 = FUNC_6(VAR_6.lpfnWndProc, &VAR_4, sizeof(VAR_4));
    FUNC_8(VAR_7 == sizeof(VAR_4), "VirtualQuery returned %ld\n", VAR_7);
    if (VAR_7 == sizeof(VAR_4)) {
        VAR_7 = FUNC_3(VAR_4.AllocationBase, VAR_2, sizeof(VAR_2));
        FUNC_8(VAR_7, "GetModuleFileName failed\n");
        for (VAR_3 = VAR_2+VAR_7-1; VAR_3 > VAR_2; VAR_3--)
            if (*VAR_3 == '\\' || *VAR_3 == '/') break;
        if (*VAR_3 == '\\' || *VAR_3=='/') VAR_3++;
        FUNC_8(!FUNC_7(VAR_3, "user32.dll") || !FUNC_7(VAR_3, "ntdll.dll"), "IME window proc implemented in %s\n", VAR_3);
    }

    VAR_8 = FUNC_1(((void*)0), VAR_1, &VAR_5);
    FUNC_8(VAR_8, "GetClassInfo failed: %d\n", FUNC_2());

    VAR_7 = FUNC_6(VAR_5.lpfnWndProc, &VAR_4, sizeof(VAR_4));
    FUNC_8(VAR_7 == sizeof(VAR_4), "VirtualQuery returned %ld\n", VAR_7);
    VAR_7 = FUNC_3(VAR_4.AllocationBase, VAR_2, sizeof(VAR_2));
    FUNC_8(VAR_7, "GetModuleFileName failed\n");
    for (VAR_3 = VAR_2+VAR_7-1; VAR_3 > VAR_2; VAR_3--)
        if (*VAR_3 == '\\' || *VAR_3 == '/') break;
    if (*VAR_3 == '\\' || *VAR_3=='/') VAR_3++;
    FUNC_8(!FUNC_7(VAR_3, "user32.dll") || !FUNC_7(VAR_3, "ntdll.dll"), "IME window proc implemented in %s\n", VAR_3);
}
