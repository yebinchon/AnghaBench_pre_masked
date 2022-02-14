
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGLONG ;
typedef int UINT ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__* LPTSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int VAR_2 ;

INT
FUNC_2(ULONGLONG VAR_3, LPTSTR VAR_4, UINT VAR_5, BOOL VAR_6)
{
    TCHAR VAR_7[39];
    UINT VAR_8, VAR_9;

    if (VAR_5 <= 1)
        return 0;

    VAR_8 = 0;
    VAR_9 = VAR_2;
    if (!VAR_2)
        VAR_6 = VAR_0;

    do
    {
        if (VAR_9 == VAR_8 && VAR_6)
        {
            VAR_9 += VAR_2 + 1;
            VAR_7[38 - VAR_8++] = VAR_1;
        }
        VAR_7[38 - VAR_8++] = (TCHAR)(VAR_3 % 10) + FUNC_0('0');
        VAR_3 /= 10;
    } while (VAR_3 > 0);
    if (VAR_8 > VAR_5-1)
        VAR_8 = VAR_5-1;

    FUNC_1(VAR_4, VAR_7 + 39 - VAR_8, VAR_8 * sizeof(TCHAR));
    VAR_4[VAR_8] = FUNC_0('\0');

    return VAR_8;
}
