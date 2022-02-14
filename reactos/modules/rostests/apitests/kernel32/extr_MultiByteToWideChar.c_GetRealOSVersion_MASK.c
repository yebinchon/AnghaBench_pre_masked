
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int osvi ;
struct TYPE_4__ {int dwOSVersionInfoSize; int member_0; } ;
typedef TYPE_1__ RTL_OSVERSIONINFOW ;
typedef scalar_t__ (* RTLGETVERSION ) (TYPE_1__*) ;
typedef scalar_t__ HINSTANCE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static RTL_OSVERSIONINFOW *FUNC_3(void)
{
    static RTL_OSVERSIONINFOW VAR_1 = { 0 };
    RTL_OSVERSIONINFOW *VAR_2 = ((void*)0);
    HINSTANCE VAR_3 = FUNC_2(L"ntdll.dll");
    RTLGETVERSION VAR_4;
    if (VAR_3)
    {
        VAR_4 = (RTLGETVERSION)FUNC_1(VAR_3, "RtlGetVersion");
        if (VAR_4)
        {
            VAR_1.dwOSVersionInfoSize = sizeof(VAR_1);
            if (VAR_4(&VAR_1) == VAR_0)
            {
                VAR_2 = &VAR_1;
            }
        }
        FUNC_0(VAR_3);
    }
    return VAR_2;
}
