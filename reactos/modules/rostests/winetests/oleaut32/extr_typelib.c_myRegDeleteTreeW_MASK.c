
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int REGSAM ;
typedef scalar_t__ LSTATUS ;
typedef int * LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int ,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int *,int *,int *,int*,int *,int *,int*,int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int,int) ;
 scalar_t__ FUNC_12 (int ,int *,int,int ) ;

__attribute__((used)) static LSTATUS FUNC_13(HKEY VAR_6, LPCWSTR VAR_7, REGSAM VAR_8)
{
    LONG VAR_9;
    DWORD VAR_10, VAR_11;
    DWORD VAR_12, VAR_13;
    WCHAR VAR_14[VAR_4], *VAR_15 = VAR_14;
    HKEY VAR_16 = VAR_6;
    VAR_8 &= (VAR_3 | VAR_2);

    if(VAR_7)
    {
        VAR_9 = FUNC_9(VAR_6, VAR_7, 0, VAR_1 | VAR_8, &VAR_16);
        if (VAR_9) return VAR_9;
    }

    VAR_9 = FUNC_10(VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
            &VAR_10, ((void*)0), ((void*)0), &VAR_11, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_9) goto cleanup;

    VAR_10++;
    VAR_11++;
    VAR_12 = FUNC_11(VAR_10, VAR_11);
    if (VAR_12 > FUNC_0(VAR_14))
    {

        if (!(VAR_15 = FUNC_2( FUNC_1(), 0, VAR_12*sizeof(WCHAR))))
        {
            VAR_9 = VAR_0;
            goto cleanup;
        }
    }


    while (VAR_5)
    {
        VAR_13 = VAR_12;
        if (FUNC_7(VAR_16, 0, VAR_15, &VAR_13, ((void*)0),
                          ((void*)0), ((void*)0), ((void*)0))) break;

        VAR_9 = FUNC_13(VAR_16, VAR_15, VAR_8);
        if (VAR_9) goto cleanup;
    }

    if (VAR_7)
        if (&FUNC_12 && VAR_8 != 0)
            VAR_9 = FUNC_12(VAR_6, VAR_7, VAR_8, 0);
        else
            VAR_9 = FUNC_5(VAR_6, VAR_7);
    else
        while (VAR_5)
        {
            VAR_13 = VAR_12;
            if (FUNC_8(VAR_6, 0, VAR_15, &VAR_13,
                  ((void*)0), ((void*)0), ((void*)0), ((void*)0))) break;

            VAR_9 = FUNC_6(VAR_6, VAR_15);
            if (VAR_9) goto cleanup;
        }

cleanup:
    if (VAR_15 != VAR_14)
        FUNC_3(FUNC_1(), 0, VAR_15);
    if(VAR_7)
        FUNC_4(VAR_16);
    return VAR_9;
}
