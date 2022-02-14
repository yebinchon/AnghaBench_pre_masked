
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_10__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
typedef scalar_t__ NTSTATUS ;
typedef int Buf2 ;
typedef int Buf1 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,int *,int) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_2[VAR_0];
    WCHAR VAR_3[VAR_0];

    UNICODE_STRING VAR_4, VAR_5;
    UNICODE_STRING VAR_6;
    NTSTATUS VAR_7;

    FUNC_1(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_1(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"kernel32.dll");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.dll");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));


    FUNC_2(&VAR_6, L"kernel32");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.DLL");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"kernel32.dll.dll");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.dll.dll");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"kernel32.dll.exe");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.dll.exe");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"kernel32.");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L".kernel32");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L".kernel32.DLL");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"..kernel32");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"..kernel32");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L".kernel32.");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L".kernel32.");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));


    FUNC_2(&VAR_6, L"test\\kernel32.dll");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.dll");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"test/kernel32.dll");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.dll");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"test.dll/kernel32");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.DLL");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"test.dll\\kernel32");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L"kernel32.DLL");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"//");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L".DLL");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));


    FUNC_2(&VAR_6, L"\\");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    if (FUNC_7(VAR_4, L"\\\\"))
    {
        FUNC_6("Allowing bug found in windows' implementation\n");
        FUNC_5(&VAR_4, &VAR_5, L"\\.DLL");
    }
    else
    {
        FUNC_5(&VAR_4, &VAR_5, L".DLL");
    }
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));

    FUNC_2(&VAR_6, L"");
    VAR_7 = FUNC_0(&VAR_6, &VAR_4, &VAR_5);
    FUNC_4(VAR_7 == VAR_1, "0x%lx\n", VAR_7);
    FUNC_5(&VAR_4, &VAR_5, L".DLL");
    FUNC_3(&VAR_4, VAR_2, sizeof(VAR_2));
    FUNC_3(&VAR_5, VAR_3, sizeof(VAR_3));
}
