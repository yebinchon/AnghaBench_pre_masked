
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PWCHAR ;
typedef int * PVOID ;
typedef scalar_t__* LPDWORD ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ VAR_3 ;

PVOID FUNC_4(HANDLE VAR_4, PWCHAR VAR_5, LPDWORD VAR_6, LPDWORD VAR_7)
{
    PVOID VAR_8 = ((void*)0);
    DWORD VAR_9;

    *VAR_7 = 0;
    *VAR_6 = VAR_2;

    while (VAR_3)
    {
        VAR_9 = FUNC_3(VAR_4, VAR_5, ((void*)0), VAR_6, VAR_8, VAR_7);
        if (VAR_9 == VAR_1)
        {
            if (VAR_8) break;
        }
        else if (VAR_9 == VAR_0)
        {
            FUNC_2(FUNC_0(), 0, VAR_8);
        }
        else break;

        VAR_8 = FUNC_1(FUNC_0(), 0, *VAR_7);
        if (!VAR_8) return ((void*)0);
    }

    if (VAR_9 != VAR_1)
    {
        if (VAR_8) FUNC_2(FUNC_0(), 0, VAR_8);

        *VAR_7 = 0;
        *VAR_6 = VAR_2;
        VAR_8 = ((void*)0);
    }

    return VAR_8;
}
