
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WPARAM ;
typedef scalar_t__ UINT ;
typedef scalar_t__ LPARAM ;
typedef int LONG ;
typedef int HWND ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,scalar_t__,int ,int ) ;

__attribute__((used)) static void
FUNC_1(HWND VAR_10, UINT VAR_11, WPARAM VAR_12, LPARAM VAR_13)
{
    if (VAR_11 == VAR_3 || !VAR_5)
        return;

    FUNC_0("uMsg:0x%04X, wParam:0x%08lX, lParam:0x%08lX\n", VAR_11, (LONG)VAR_12, (LONG)VAR_13);

    if (VAR_11 == VAR_2)
    {
        ++VAR_8;
    }

    if (VAR_11 == VAR_1)
        ++VAR_7;

    if (VAR_11 == VAR_4)
        ++VAR_9;

    if (VAR_11 == VAR_0)
        ++VAR_6;
}
