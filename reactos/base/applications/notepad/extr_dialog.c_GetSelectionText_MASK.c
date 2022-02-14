
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int TCHAR ;
typedef scalar_t__ LPTSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,scalar_t__) ;


 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (scalar_t__,int,scalar_t__,scalar_t__) ;

int FUNC_7(HWND VAR_1, LPTSTR VAR_2, int VAR_3)
{
    DWORD VAR_4 = 0;
    DWORD VAR_5 = 0;
    DWORD VAR_6;
    HRESULT VAR_7;
    LPTSTR VAR_8;

    if (!VAR_2)
    {
        return 0;
    }

    FUNC_5(VAR_1, VAR_0, (WPARAM)&VAR_4, (LPARAM)&VAR_5);

    if (VAR_4 == VAR_5)
    {
        return 0;
    }

    VAR_6 = FUNC_2(VAR_1) + 1;
    VAR_8 = FUNC_3(FUNC_0(), 0, VAR_6 * sizeof(TCHAR));
    if (!VAR_8)
    {
        return 0;
    }

    VAR_6 = FUNC_1(VAR_1, VAR_8, VAR_6);

    if (!VAR_6)
    {
        FUNC_4(FUNC_0(), 0, VAR_8);
        return 0;
    }

    VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_8 + VAR_4, VAR_5 - VAR_4);
    FUNC_4(FUNC_0(), 0, VAR_8);

    switch (VAR_7)
    {
        case 128:
        {
            return VAR_5 - VAR_4;
        }

        case 129:
        {
            return VAR_3 - 1;
        }

        default:
        {
            return 0;
        }
    }
}
