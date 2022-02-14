
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HWND ;
typedef int BOOL ;


 int FUNC_0 () ;
 int * FUNC_1 (char*,char*,int ,int,int,int,int,int *,int *,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int FUNC_6 (int,char*) ;

void FUNC_7()
{
    BOOL VAR_1;
    HWND VAR_2, VAR_3;

    VAR_1 = FUNC_5(((void*)0));
    FUNC_6 (VAR_1, "OpenClipboard failed\n");

    VAR_1 = FUNC_3();
    FUNC_6 (VAR_1, "EmptyClipboard failed\n");

    VAR_1 = FUNC_0();
    FUNC_6 (VAR_1, "CloseClipboard failed\n");

    VAR_3 = FUNC_4();
    FUNC_6 (VAR_3 == ((void*)0), "Expected NULL owner\n");

    VAR_2 = FUNC_1(L"static", L"static", VAR_0, 20, 20, 300, 300, ((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_6 (VAR_2 != 0 , "CreateWindowW failed\n");

    VAR_1 = FUNC_5(VAR_2);
    FUNC_6 (VAR_1, "OpenClipboard failed\n");

    VAR_3 = FUNC_4();
    FUNC_6 (VAR_3 == ((void*)0), "Expected NULL owner\n");

    VAR_1 = FUNC_3();
    FUNC_6 (VAR_1, "EmptyClipboard failed\n");

    VAR_1 = FUNC_0();
    FUNC_6 (VAR_1, "CloseClipboard failed\n");

    VAR_3 = FUNC_4();
    FUNC_6 (VAR_3 == VAR_2, "Expected hWnd owner\n");

    FUNC_2(VAR_2);
}
