
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* PWSTR ;
typedef int DWORD ;



__attribute__((used)) static __inline void
FUNC_0(PWSTR VAR_0, DWORD VAR_1)
{
    const PWSTR VAR_2 = &VAR_0[VAR_1 / sizeof(WCHAR) - 1];
    PWSTR VAR_3 = VAR_0;

    while (*VAR_3)
    {
        if (VAR_3 == VAR_2)
        {
            *VAR_3 = 0;
            break;
        }

        VAR_3++;
    }
}
