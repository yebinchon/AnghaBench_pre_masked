
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int,char*,scalar_t__) ;

void FUNC_2(HWND VAR_2)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_0(0, ((void*)0), ((void*)0));
    FUNC_1 (VAR_3 == VAR_0, "Expected E_HANDLE got 0x%lx error\n", VAR_3);

    VAR_3 = FUNC_0((HWND)(ULONG_PTR)0xdeaddeaddeaddeadULL, ((void*)0), ((void*)0));
    FUNC_1 (VAR_3 == VAR_0, "Expected E_HANDLE got 0x%lx error\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, ((void*)0), ((void*)0));
    FUNC_1 (VAR_3 == VAR_1, "Expected S_OK got 0x%lx error\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, L"none", L"none");
    FUNC_1 (VAR_3 == VAR_1, "Expected S_OK got 0x%lx error\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, ((void*)0), L"none");
    FUNC_1 (VAR_3 == VAR_1, "Expected S_OK got 0x%lx error\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, L"none", ((void*)0));
    FUNC_1 (VAR_3 == VAR_1, "Expected S_OK got 0x%lx error\n", VAR_3);

    VAR_3 = FUNC_0(VAR_2, L"", L"");
    FUNC_1 (VAR_3 == VAR_1, "Expected S_OK got 0x%lx error\n", VAR_3);
}
