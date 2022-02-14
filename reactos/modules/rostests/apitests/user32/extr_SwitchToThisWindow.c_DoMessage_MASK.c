
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WPARAM ;
typedef scalar_t__ UINT ;
typedef scalar_t__ LPARAM ;
typedef int LONG ;
typedef int HWND ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (char*,char*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(HWND VAR_13, UINT VAR_14, WPARAM VAR_15, LPARAM VAR_16)
{
    if (VAR_14 == VAR_5 || !VAR_7)
        return;

    FUNC_4("%s: uMsg:0x%04X, wParam:0x%08lX, lParam:0x%08lX, ISMEX_:%s\n",
          (FUNC_1() ? "S" : "P"), VAR_14, (LONG)VAR_15, (LONG)VAR_16,
           FUNC_0());

    if (VAR_14 == VAR_4)
    {
        FUNC_3(FUNC_2(((void*)0)) == VAR_0,
           "InSendMessageEx(NULL) was 0x%08lX\n", FUNC_2(((void*)0)));
        if (VAR_15 == VAR_1)
            ++VAR_11;
        else
            ++VAR_10;
    }

    if (VAR_14 == VAR_3)
    {
        FUNC_3(FUNC_2(((void*)0)) == VAR_0,
           "InSendMessageEx(NULL) was 0x%08lX\n", FUNC_2(((void*)0)));
        ++VAR_9;
    }

    if (VAR_14 == VAR_6)
    {
        FUNC_3(FUNC_2(((void*)0)) == VAR_0,
           "InSendMessageEx(NULL) was 0x%08lX\n", FUNC_2(((void*)0)));
        ++VAR_12;
    }

    if (VAR_14 == VAR_2)
    {
        FUNC_3(FUNC_2(((void*)0)) == VAR_0,
           "InSendMessageEx(NULL) was 0x%08lX\n", FUNC_2(((void*)0)));
        ++VAR_8;
    }
}
