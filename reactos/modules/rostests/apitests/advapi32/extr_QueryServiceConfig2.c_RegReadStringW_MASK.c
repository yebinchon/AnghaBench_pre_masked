
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPWSTR ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,scalar_t__*,int *,scalar_t__*) ;

__attribute__((used)) static DWORD
FUNC_4(HKEY VAR_2,
               LPWSTR VAR_3,
               LPWSTR *VAR_4)
{
    DWORD VAR_5;
    DWORD VAR_6;
    DWORD VAR_7;

    *VAR_4 = ((void*)0);

    VAR_6 = 0;
    VAR_5 = FUNC_3(VAR_2,
                               VAR_3,
                               0,
                               &VAR_7,
                               ((void*)0),
                               &VAR_6);
    if (VAR_5 != VAR_1)
        return VAR_5;

    *VAR_4 = FUNC_1(FUNC_0(), 0, VAR_6);
    if (*VAR_4 == ((void*)0))
        return VAR_0;

    VAR_5 = FUNC_3(VAR_2,
                               VAR_3,
                               0,
                               &VAR_7,
                               (LPBYTE)*VAR_4,
                               &VAR_6);
    if (VAR_5 != VAR_1)
    {
        FUNC_2(FUNC_0(), 0, *VAR_4);
        *VAR_4 = ((void*)0);
    }

    return VAR_5;
}
