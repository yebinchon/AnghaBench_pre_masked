
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int REGSAM ;
typedef int * LPCSTR ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef int CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int *,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static UINT FUNC_8(HKEY VAR_5, LPCSTR VAR_6, LPCSTR VAR_7, REGSAM VAR_8, HKEY *VAR_9)
{
    UINT VAR_10;
    CHAR *VAR_11 = ((void*)0);
    int VAR_12 = 0;
    HKEY VAR_13;
    DWORD VAR_14;
    BOOL VAR_15 = VAR_3;

    *VAR_9 = 0;

    VAR_10 = FUNC_5(VAR_5, VAR_6, 0, VAR_8, &VAR_13);
    if (VAR_10 != VAR_2) return VAR_10;
    VAR_10 = FUNC_6(VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_14, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_10 != VAR_2) return VAR_10;
    if (!(VAR_11 = FUNC_1(FUNC_0(), 0, ++VAR_14))) return VAR_1;

    while (!VAR_15 &&
           FUNC_4(VAR_13, VAR_12++, VAR_11, VAR_14) == VAR_2)
    {
        if (!FUNC_7(VAR_11, VAR_7))
        {
            *VAR_9 = VAR_13;
            VAR_15 = VAR_4;
        }
        else if (FUNC_8(VAR_13, VAR_11, VAR_7, VAR_8, VAR_9) == VAR_2) VAR_15 = VAR_4;
    }

    if (*VAR_9 != VAR_13) FUNC_3(VAR_13);
    FUNC_2(FUNC_0(), 0, VAR_11);
    return (VAR_15 ? VAR_2 : VAR_0);
}
