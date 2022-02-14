
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cliA ;
struct TYPE_4__ {int style; int cbClsExtra; int cbWndExtra; int lpszMenuName; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LONG_PTR ;
typedef scalar_t__ HWND ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int,char*,...) ;
 scalar_t__ FUNC_9 (int ,int *,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_10(void)
{
    WNDCLASSA VAR_4;
    char VAR_5[20];
    HWND VAR_6;
    LONG_PTR VAR_7;
    BOOL VAR_8;

    VAR_6 = FUNC_9(0, ((void*)0), 0, 0, 0, 0);
    FUNC_8(VAR_6 != 0, "expected window\n");

    FUNC_2(VAR_6, VAR_5, 20);
    FUNC_8(FUNC_6(VAR_5, "WorkerA") == 0, "expected WorkerA class, got %s\n", VAR_5);

    VAR_7 = FUNC_5(VAR_6, 0);
    FUNC_8(VAR_7 == 0, "got %ld\n", VAR_7);


    FUNC_7(&VAR_4, 0, sizeof(VAR_4));
    VAR_8 = FUNC_1(FUNC_3("shlwapi.dll"), "WorkerA", &VAR_4);
    FUNC_8(VAR_8, "failed to get class info\n");
    FUNC_8(VAR_4.style == 0, "got 0x%08x\n", VAR_4.style);
    FUNC_8(VAR_4.cbClsExtra == 0, "got %d\n", VAR_4.cbClsExtra);
    FUNC_8(VAR_4.cbWndExtra == sizeof(LONG_PTR), "got %d\n", VAR_4.cbWndExtra);
    FUNC_8(VAR_4.lpszMenuName == 0, "got %s\n", VAR_4.lpszMenuName);

    FUNC_0(VAR_6);


    VAR_6 = FUNC_9(0, ((void*)0), 0, 0, 0, 0xdeadbeef);
    FUNC_8(VAR_6 != 0, "expected window\n");

    FUNC_2(VAR_6, VAR_5, 20);
    FUNC_8(FUNC_6(VAR_5, "WorkerA") == 0, "expected WorkerA class, got %s\n", VAR_5);

    VAR_7 = FUNC_5(VAR_6, 0);
    FUNC_8(VAR_7 == 0xdeadbeef, "got %ld\n", VAR_7);


    VAR_7 = FUNC_4(VAR_6, VAR_0);
    FUNC_8(VAR_7 == VAR_3 ||
       VAR_7 == (VAR_3|VAR_1) , "0x%08lx\n", VAR_7);

    FUNC_0(VAR_6);

    VAR_6 = FUNC_9(0, ((void*)0), VAR_2, 0, 0, 0);
    VAR_7 = FUNC_4(VAR_6, VAR_0);
    FUNC_8(VAR_7 == (VAR_3|VAR_2) ||
       VAR_7 == (VAR_3|VAR_2|VAR_1) , "0x%08lx\n", VAR_7);
    FUNC_0(VAR_6);
}
