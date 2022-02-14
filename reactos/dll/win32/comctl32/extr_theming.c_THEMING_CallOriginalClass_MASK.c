
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int WNDPROC ;
typedef int UINT ;
typedef int LRESULT ;
typedef int LPCWSTR ;
typedef int LPARAM ;
typedef size_t INT_PTR ;
typedef int HWND ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;

LRESULT FUNC_3 (HWND VAR_2, UINT VAR_3, WPARAM VAR_4, LPARAM VAR_5)
{
    INT_PTR VAR_6 = (INT_PTR)FUNC_1 (VAR_2, (LPCWSTR)FUNC_2(VAR_0));
    WNDPROC VAR_7 = VAR_1[VAR_6];
    return FUNC_0 (VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
}
