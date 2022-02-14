
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HINTERNET ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,scalar_t__*,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static BOOL FUNC_2(HINTERNET VAR_3, DWORD VAR_4, WCHAR *VAR_5, DWORD VAR_6)
{
    DWORD VAR_7, VAR_8 = 0;
    for (;;)
    {
        VAR_7 = VAR_6;
        if (!FUNC_0(VAR_3, VAR_1, VAR_5, &VAR_7, &VAR_8)) return VAR_0;
        if (FUNC_1(VAR_5) == VAR_4) break;
    }
    return VAR_2;
}
