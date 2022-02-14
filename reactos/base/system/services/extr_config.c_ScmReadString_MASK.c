
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ,int ,scalar_t__*,int *,scalar_t__*) ;

DWORD
FUNC_6(HKEY VAR_4,
              LPCWSTR VAR_5,
              LPWSTR *VAR_6)
{
    DWORD VAR_7 = 0;
    DWORD VAR_8 = 0;
    DWORD VAR_9 = 0;
    LPWSTR VAR_10 = ((void*)0);
    LPWSTR VAR_11 = ((void*)0);

    *VAR_6 = ((void*)0);

    VAR_7 = FUNC_5(VAR_4,
                               VAR_5,
                               0,
                               &VAR_9,
                               ((void*)0),
                               &VAR_8);
    if (VAR_7 != VAR_1)
        return VAR_7;

    VAR_10 = FUNC_3(FUNC_2(), VAR_2, VAR_8);
    if (VAR_10 == ((void*)0))
        return VAR_0;

    VAR_7 = FUNC_5(VAR_4,
                               VAR_5,
                               0,
                               &VAR_9,
                               (LPBYTE)VAR_10,
                               &VAR_8);
    if (VAR_7 != VAR_1)
    {
        FUNC_4(FUNC_2(), 0, VAR_10);
        return VAR_7;
    }

    if (VAR_9 == VAR_3)
    {

        VAR_8 = FUNC_0(VAR_10, ((void*)0), 0);
        if (VAR_8 > 0)
        {
            VAR_11 = FUNC_3(FUNC_2(), VAR_2, VAR_8 * sizeof(WCHAR));
            if (VAR_11)
            {
                if (VAR_8 == FUNC_0(VAR_10, VAR_11, VAR_8))
                {
                    *VAR_6 = VAR_11;
                    VAR_7 = VAR_1;
                }
                else
                {
                    VAR_7 = FUNC_1();
                    FUNC_4(FUNC_2(), 0, VAR_11);
                }
            }
            else
            {
                VAR_7 = VAR_0;
            }
        }
        else
        {
            VAR_7 = FUNC_1();
        }

        FUNC_4(FUNC_2(), 0, VAR_10);
    }
    else
    {
        *VAR_6 = VAR_10;
    }

    return VAR_7;
}
