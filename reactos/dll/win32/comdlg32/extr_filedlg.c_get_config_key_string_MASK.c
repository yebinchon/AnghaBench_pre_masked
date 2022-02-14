
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int const*,int ,scalar_t__*,int *,scalar_t__*) ;
 int VAR_3 ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3(HKEY VAR_4, const WCHAR *VAR_5, WCHAR **VAR_6)
{
    DWORD VAR_7, VAR_8;
    WCHAR *VAR_9;

    if (VAR_4 && !FUNC_0(VAR_4, VAR_5, 0, &VAR_7, ((void*)0), &VAR_8))
    {
        if (VAR_7 != VAR_2 && VAR_7 != VAR_1)
            return VAR_0;
    }

    VAR_9 = FUNC_1(VAR_8);
    if (FUNC_0(VAR_4, VAR_5, 0, &VAR_7, (BYTE *)VAR_9, &VAR_8))
    {
        FUNC_2(VAR_9);
        return VAR_0;
    }

    *VAR_6 = VAR_9;
    return VAR_3;
}
