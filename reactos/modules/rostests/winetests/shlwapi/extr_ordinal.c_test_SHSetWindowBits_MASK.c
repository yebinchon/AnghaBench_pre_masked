
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* lpszClassName; int * lpszMenuName; int * hbrBackground; int hCursor; scalar_t__ hIcon; int hInstance; scalar_t__ cbWndExtra; scalar_t__ cbClsExtra; int lpfnWndProc; scalar_t__ style; } ;
typedef TYPE_1__ WNDCLASSA ;
typedef int LPSTR ;
typedef int * HWND ;
typedef int DWORD ;


 int * FUNC_0 (char*,char*,int,int ,int ,int,int,int *,int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,int ) ;
 int VAR_4 ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (int *,int ,int,int) ;

__attribute__((used)) static void FUNC_12(void)
{
    HWND VAR_5;
    DWORD VAR_6, VAR_7;
    WNDCLASSA VAR_8;

    VAR_8.style = 0;
    VAR_8.lpfnWndProc = VAR_0;
    VAR_8.cbClsExtra = 0;
    VAR_8.cbWndExtra = 0;
    VAR_8.hInstance = FUNC_3(((void*)0));
    VAR_8.hIcon = 0;
    VAR_8.hCursor = FUNC_6(0, (LPSTR)VAR_3);
    VAR_8.hbrBackground = ((void*)0);
    VAR_8.lpszMenuName = ((void*)0);
    VAR_8.lpszClassName = "Shlwapi test class";
    FUNC_7(&VAR_8);

    VAR_5 = FUNC_0("Shlwapi test class", "Test", VAR_4, 0, 0, 100, 100,
                          ((void*)0), ((void*)0), FUNC_3(((void*)0)), 0);
    FUNC_10(FUNC_5(VAR_5), "failed to create window\n");


    FUNC_8(0xdeadbeef);
    VAR_6 = FUNC_11(((void*)0), VAR_2, 0, 0);
    FUNC_10(VAR_6 == 0, "expected 0 retval, got %d\n", VAR_6);
    FUNC_10(FUNC_2() == VAR_1,
        "expected ERROR_INVALID_WINDOW_HANDLE, got %d\n", FUNC_2());


    VAR_7 = FUNC_4(VAR_5, VAR_2);
    VAR_6 = FUNC_11(VAR_5, VAR_2, 0, 0);
    FUNC_10(VAR_7 == VAR_6, "expected old style\n");
    FUNC_10(VAR_7 == FUNC_4(VAR_5, VAR_2), "expected to keep old style\n");


    VAR_7 = FUNC_4(VAR_5, VAR_2);
    FUNC_10(VAR_7 & VAR_4, "expected WS_VISIBLE\n");
    VAR_6 = FUNC_11(VAR_5, VAR_2, VAR_4, 0);

    FUNC_10(VAR_6 == VAR_7, "expected previous style, got %x\n", VAR_6);
    FUNC_10((FUNC_4(VAR_5, VAR_2) & VAR_4) == 0, "expected updated style\n");


    VAR_7 = FUNC_4(VAR_5, VAR_2);
    VAR_6 = FUNC_11(VAR_5, VAR_2, VAR_4, 0);
    FUNC_10(VAR_6 == VAR_7, "expected previous style, got %x\n", VAR_6);
    FUNC_10(VAR_7 == FUNC_4(VAR_5, VAR_2), "expected to keep old style\n");


    VAR_7 = FUNC_4(VAR_5, VAR_2);
    VAR_6 = FUNC_11(VAR_5, VAR_2, VAR_4, VAR_4);
    FUNC_10(VAR_6 == VAR_7, "expected previous style, got %x\n", VAR_6);
    FUNC_10(FUNC_4(VAR_5, VAR_2) & VAR_4, "expected updated style\n");


    FUNC_11(VAR_5, VAR_2, VAR_4, 0);
    FUNC_10((FUNC_4(VAR_5, VAR_2) & VAR_4) == 0, "expected updated style\n");
    VAR_7 = FUNC_4(VAR_5, VAR_2);
    VAR_6 = FUNC_11(VAR_5, VAR_2, 0, VAR_4);
    FUNC_10(VAR_6 == VAR_7, "expected previous style, got %x\n", VAR_6);
    FUNC_10((FUNC_4(VAR_5, VAR_2) & VAR_4) == 0, "expected updated style\n");

    FUNC_1(VAR_5);

    FUNC_9("Shlwapi test class", FUNC_3(((void*)0)));
}
