
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static BOOL FUNC_4(LPWSTR *VAR_2, DWORD *VAR_3, LPCWSTR VAR_4, DWORD VAR_5)
{
    LPWSTR VAR_6;

    if (VAR_5 > 0)
    {
        if (*VAR_2)
        {
            VAR_6 = (LPWSTR) FUNC_2(FUNC_0(), 0, *VAR_2, (*VAR_3 + VAR_5) * sizeof(WCHAR));
        }
        else
        {
            VAR_6 = (LPWSTR) FUNC_1(FUNC_0(), 0, VAR_5 * sizeof(WCHAR));
        }

        if (!VAR_6)
            return VAR_0;

        FUNC_3(VAR_6 + *VAR_3, VAR_4, VAR_5 * sizeof(WCHAR));
        *VAR_2 = VAR_6;
        *VAR_3 += VAR_5;
    }
    return VAR_1;
}
