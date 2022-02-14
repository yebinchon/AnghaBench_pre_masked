
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_PTR ;
typedef int * HWND ;
typedef int * DWORD ;


 int * FUNC_0 (int ,char*,int *,int,int ,int ,int ,int ,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*,int *) ;

__attribute__((used)) static void FUNC_5(void)
{
    HWND VAR_4;
    DWORD VAR_5;

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), 0, 0, 0, 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 != ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == 0, "error = %lu\n", VAR_5);
    FUNC_1(VAR_4);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), 0, 0, 0, 0, 0, (HWND)(LONG_PTR)-1, ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 == ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == VAR_0, "error = %lu\n", VAR_5);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), VAR_2, 0, 0, 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 == ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == VAR_1, "error = %lu\n", VAR_5);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), VAR_2, 0, 0, 0, 0, (HWND)(LONG_PTR)-1, ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 == ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == VAR_0, "error = %lu\n", VAR_5);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), VAR_3, 0, 0, 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 != ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == 0, "error = %lu\n", VAR_5);
    FUNC_1(VAR_4);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), VAR_3, 0, 0, 0, 0, (HWND)(LONG_PTR)-1, ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 == ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == VAR_0, "error = %lu\n", VAR_5);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), VAR_2|VAR_3, 0, 0, 0, 0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 != ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == 0, "error = %lu\n", VAR_5);
    FUNC_1(VAR_4);

    FUNC_3(0x1234);
    VAR_4 = FUNC_0(0, L"BUTTON", ((void*)0), VAR_2|VAR_3, 0, 0, 0, 0, (HWND)(LONG_PTR)-1, ((void*)0), ((void*)0), ((void*)0));
    VAR_5 = FUNC_2();
    FUNC_4(VAR_4 == ((void*)0), "hWnd = %p\n", VAR_4);
    FUNC_4(VAR_5 == VAR_0, "error = %lu\n", VAR_5);
}
