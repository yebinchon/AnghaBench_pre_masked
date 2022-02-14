
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int,int *,int *,int*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static HRESULT FUNC_2(HKEY VAR_7, LPCWSTR VAR_8,
    UINT VAR_9, WCHAR *VAR_10, UINT *VAR_11)
{
    LONG VAR_12;
    DWORD VAR_13=VAR_9 * sizeof(WCHAR);

    if (!VAR_11)
        return VAR_2;

    VAR_12 = FUNC_1(VAR_7, ((void*)0), VAR_8, VAR_4|VAR_3, ((void*)0),
        VAR_10, &VAR_13);

    if (VAR_12 == VAR_0)
    {
        *VAR_11 = 0;
        return VAR_5;
    }

    if (VAR_12 == 0 || VAR_12 == VAR_1)
        *VAR_11 = VAR_13/sizeof(WCHAR);

    if (!VAR_10 && VAR_9 != 0)

        return VAR_2;

    if (VAR_12 == VAR_1)
        return VAR_6;

    return FUNC_0(VAR_12);
}
