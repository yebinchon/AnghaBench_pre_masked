
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPTSTR ;
typedef scalar_t__ LPCTSTR ;
typedef int LPBYTE ;
typedef int LONG ;
typedef int * HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int **) ;
 int FUNC_2 (int *,scalar_t__,int *,int*,int ,int*) ;
 int FUNC_3 (char) ;

LONG FUNC_4(HKEY VAR_2, LPCTSTR VAR_3, LPCTSTR VAR_4, LPTSTR VAR_5, DWORD VAR_6)
{
    LONG VAR_7;
    HKEY VAR_8 = ((void*)0);
    DWORD VAR_9, VAR_10;

    if (VAR_3)
    {
        VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_8);
        if (VAR_7 != VAR_0)
            goto done;
        VAR_2 = VAR_8;
    }

    VAR_9 = (VAR_6 - 1) * sizeof(*VAR_5);
    VAR_7 = FUNC_2(VAR_2, VAR_4, ((void*)0), &VAR_10, (LPBYTE) VAR_5, &VAR_9);
    if (VAR_7 != VAR_0)
        goto done;
    if (VAR_10 != VAR_1)
    {
        VAR_7 = -1;
        goto done;
    }

    VAR_5[VAR_9 / sizeof(*VAR_5)] = FUNC_3('\0');

done:
    if (VAR_7 != VAR_0)
        VAR_5[0] = FUNC_3('\0');
    if (VAR_8)
        FUNC_0(VAR_8);
    return VAR_7;
}
