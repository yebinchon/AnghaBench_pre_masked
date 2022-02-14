
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int UINT ;
typedef scalar_t__* LPWSTR ;



WCHAR* FUNC_0(WCHAR* VAR_0, const WCHAR* VAR_1, int VAR_2)
{
    LPWSTR VAR_3 = VAR_0;
    const WCHAR* VAR_4 = VAR_1;
    UINT VAR_5 = VAR_2;

    while ((VAR_5 > 1) && *VAR_4)
    {
        VAR_5--;
        *VAR_3++ = *VAR_4++;
    }

    if (VAR_5)
        *VAR_3 = 0;

    return VAR_0;
}
