
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int const*,int *,scalar_t__*,int *,scalar_t__*) ;

__attribute__((used)) static WCHAR *FUNC_3(HKEY VAR_1, const WCHAR *VAR_2, DWORD *VAR_3)
{
    DWORD VAR_4;
    WCHAR *VAR_5 = ((void*)0);

    if (!FUNC_2(VAR_1, VAR_2, ((void*)0), &VAR_4, ((void*)0), VAR_3) && VAR_4 == VAR_0)
    {
        if (!(VAR_5 = FUNC_1(FUNC_0(), 0, *VAR_3))) return ((void*)0);
        FUNC_2(VAR_1, VAR_2, 0, 0, (BYTE *)VAR_5, VAR_3);
    }

    return VAR_5;
}
