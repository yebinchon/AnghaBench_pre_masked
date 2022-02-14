
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PWSTR ;
typedef int * PCWSTR ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int ,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *,int ,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int *,int *,int *,int *,scalar_t__*,int *,int *,scalar_t__*,int *,int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

DWORD
FUNC_11(
    HKEY VAR_4,
    PCWSTR VAR_5)
{
    DWORD VAR_6, VAR_7;
    DWORD VAR_8, VAR_9;
    PWSTR VAR_10 = ((void*)0);
    HKEY VAR_11 = ((void*)0);
    DWORD VAR_12;

    if (VAR_5 != ((void*)0))
    {
        VAR_12 = FUNC_8(VAR_4, VAR_5, 0, VAR_2, &VAR_11);
        if (VAR_12 != VAR_1)
            return VAR_12;
    }
    else
    {
         VAR_11 = VAR_4;
    }


    VAR_12 = FUNC_9(VAR_11,
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               &VAR_6,
                               ((void*)0),
                               ((void*)0),
                               &VAR_7,
                               ((void*)0),
                               ((void*)0),
                               ((void*)0));
    if (VAR_12 != VAR_1)
        goto done;

    VAR_6++;
    VAR_7++;
    VAR_8 = FUNC_10(VAR_6, VAR_7);


    VAR_10 = FUNC_1(FUNC_0(),
                         0,
                         VAR_8 * sizeof(WCHAR));
    if (VAR_10 == ((void*)0))
    {
        VAR_12 = VAR_0;
        goto done;
    }


    while (VAR_3)
    {
        VAR_9 = VAR_8;
        if (FUNC_6(VAR_11,
                          0,
                          VAR_10,
                          &VAR_9,
                          ((void*)0),
                          ((void*)0),
                          ((void*)0),
                          ((void*)0)))
            break;

        VAR_12 = FUNC_11(VAR_11, VAR_10);
        if (VAR_12 != VAR_1)
            goto done;
    }

    if (VAR_5 != ((void*)0))
    {
        VAR_12 = FUNC_4(VAR_4, VAR_5);
    }
    else
    {
        while (VAR_3)
        {
            VAR_9 = VAR_8;
            if (FUNC_7(VAR_4,
                              0,
                              VAR_10,
                              &VAR_9,
                              ((void*)0),
                              ((void*)0),
                              ((void*)0),
                              ((void*)0)))
                break;

            VAR_12 = FUNC_5(VAR_4, VAR_10);
            if (VAR_12 != VAR_1)
                goto done;
        }
    }

done:
    if (VAR_10 != ((void*)0))
        FUNC_2(FUNC_0(), 0, VAR_10);

    if (VAR_5 != ((void*)0))
        FUNC_3(VAR_11);

    return VAR_12;
}
