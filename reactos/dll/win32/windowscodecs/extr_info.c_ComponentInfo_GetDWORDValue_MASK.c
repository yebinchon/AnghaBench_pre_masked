
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ,int *,int*,int*) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(HKEY VAR_4, LPCWSTR VAR_5,
    DWORD *VAR_6)
{
    LONG VAR_7;
    DWORD VAR_8 = sizeof(DWORD);

    if (!VAR_6)
        return VAR_1;

    VAR_7 = FUNC_1(VAR_4, ((void*)0), VAR_5, VAR_2, ((void*)0),
        VAR_6, &VAR_8);

    if (VAR_7 == VAR_0)
    {
        *VAR_6 = 0;
        return VAR_3;
    }

    return FUNC_0(VAR_7);
}
