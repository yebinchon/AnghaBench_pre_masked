
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int TCHAR ;
typedef int * LPTSTR ;
typedef int LPCTSTR ;


 int FUNC_0 (int ,int *,int) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *) ;

LPTSTR
FUNC_3(LPCTSTR VAR_0)
{
    static LPTSTR VAR_1 = ((void*)0);
    UINT VAR_2;

    FUNC_2(VAR_1);
    VAR_1 = ((void*)0);
    VAR_2 = FUNC_0(VAR_0, ((void*)0), 0);
    if (VAR_2 > 0)
    {
        VAR_1 = FUNC_1(VAR_2 * sizeof(TCHAR));
        if (VAR_1 != ((void*)0))
            FUNC_0(VAR_0, VAR_1, VAR_2 + 1);
    }
    return VAR_1;
}
