
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;
typedef int * HTHEME ;
typedef scalar_t__ HRESULT ;


 int * FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int,char*,...) ;

void FUNC_3(HWND VAR_1)
{
    HRESULT VAR_2;
    HTHEME VAR_3, VAR_4;

    VAR_2 = FUNC_1(VAR_1, ((void*)0), ((void*)0));
    FUNC_2 (VAR_2 == VAR_0, "Expected S_OK got 0x%lx error\n", VAR_2);

    VAR_3 = FUNC_0(VAR_1, L"Toolbar");
    FUNC_2 (VAR_3 != ((void*)0), "OpenThemeData failed\n");

    VAR_2 = FUNC_1(VAR_1, L"", L"");
    FUNC_2 (VAR_2 == VAR_0, "Expected S_OK got 0x%lx error\n", VAR_2);

    VAR_4 = FUNC_0(VAR_1, L"Toolbar");
    FUNC_2 (VAR_4 == ((void*)0), "Expected OpenThemeData to fail\n");

    VAR_2 = FUNC_1(VAR_1, L"TrayNotify", L"");
    FUNC_2 (VAR_2 == VAR_0, "Expected S_OK got 0x%lx error\n", VAR_2);

    VAR_4 = FUNC_0(VAR_1, L"Toolbar");
    FUNC_2 (VAR_4 == ((void*)0), "Expected OpenThemeData to fail\n");

    VAR_2 = FUNC_1(VAR_1, L"TrayNotify", ((void*)0));
    FUNC_2 (VAR_2 == VAR_0, "Expected S_OK got 0x%lx error\n", VAR_2);

    VAR_4 = FUNC_0(VAR_1, L"Toolbar");
    FUNC_2 (VAR_4 != ((void*)0), "OpenThemeData failed\n");

    FUNC_2(VAR_3 != VAR_4, "Expected different theme data\n");
}
