
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int LPARAM ;
typedef int * HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (char*,char*,int ,int,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int,int,int,int) ;
 int FUNC_4 (int *,char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int,int,int,int) ;

void FUNC_7()
{
    RECT VAR_4;
    BOOL VAR_5;
    HWND VAR_6;

    VAR_6 = FUNC_0(L"Button", L"Test1", 0, 10, 10, 100, 100, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_5 (VAR_6 != ((void*)0), "Expected CreateWindowW to succeed\n");
    FUNC_4(VAR_6, L"", L"");

    VAR_5 = FUNC_2(VAR_6, VAR_0, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_GETTEXTMARGIN to succeed\n");
    FUNC_6(VAR_4, 1, 1, 1, 1);

    FUNC_3(&VAR_4, 0,0,0,0);
    VAR_5 = FUNC_2(VAR_6, VAR_1, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_SETTEXTMARGIN to succeed\n");

    VAR_5 = FUNC_2(VAR_6, VAR_0, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_GETTEXTMARGIN to succeed\n");
    FUNC_6(VAR_4, 0, 0, 0, 0);

    FUNC_3(&VAR_4, -1,-1,-1,-1);
    VAR_5 = FUNC_2(VAR_6, VAR_1, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_SETTEXTMARGIN to succeed\n");

    VAR_5 = FUNC_2(VAR_6, VAR_0, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_GETTEXTMARGIN to succeed\n");
    FUNC_6(VAR_4, -1, -1, -1, -1);

    FUNC_3(&VAR_4, 1000,1000,1000,1000);
    VAR_5 = FUNC_2(VAR_6, VAR_1, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_SETTEXTMARGIN to succeed\n");

    VAR_5 = FUNC_2(VAR_6, VAR_0, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_GETTEXTMARGIN to succeed\n");
    FUNC_6(VAR_4, 1000, 1000, 1000, 1000);

    FUNC_1(VAR_6);

    VAR_6 = FUNC_0(L"Button", L"Test1", VAR_2, 10, 10, 100, 100, 0, ((void*)0), ((void*)0), ((void*)0));
    FUNC_5 (VAR_6 != ((void*)0), "Expected CreateWindowW to succeed\n");
    FUNC_4(VAR_6, L"", L"");

    VAR_5 = FUNC_2(VAR_6, VAR_0, 0, (LPARAM)&VAR_4);
    FUNC_5 (VAR_5 == VAR_3, "Expected BCM_GETTEXTMARGIN to succeed\n");
    FUNC_6(VAR_4, 1, 1, 1, 1);

    FUNC_1(VAR_6);

}
