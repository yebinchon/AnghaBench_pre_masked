
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szNameBuf ;
typedef int WCHAR ;
typedef int REGSAM ;
typedef scalar_t__ LSTATUS ;
typedef int * LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *,int *,int *,int *,int*,int *,int *,int*,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (int,int) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int ) ;

__attribute__((used)) static LSTATUS FUNC_12(HKEY VAR_3, LPCWSTR VAR_4, REGSAM VAR_5)
{
    LONG VAR_6;
    DWORD VAR_7, VAR_8;
    DWORD VAR_9, VAR_10;
    WCHAR VAR_11[VAR_1], *VAR_12 = VAR_11;
    HKEY VAR_13 = VAR_3;

    if(VAR_4)
    {
        VAR_6 = FUNC_8(VAR_3, VAR_4, 0, VAR_5, &VAR_13);
        if (VAR_6) return VAR_6;
    }

    VAR_6 = FUNC_9(VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0),
            &VAR_7, ((void*)0), ((void*)0), &VAR_8, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_6) goto cleanup;

    VAR_7++;
    VAR_8++;
    VAR_9 = FUNC_10(VAR_7, VAR_8);
    if (VAR_9 > sizeof(VAR_11)/sizeof(WCHAR))
    {

        if (!(VAR_12 = FUNC_1( FUNC_0(), 0, VAR_9*sizeof(WCHAR))))
        {
            VAR_6 = VAR_0;
            goto cleanup;
        }
    }


    while (VAR_2)
    {
        VAR_10 = VAR_9;
        if (FUNC_6(VAR_13, 0, VAR_12, &VAR_10, ((void*)0),
                          ((void*)0), ((void*)0), ((void*)0))) break;

        VAR_6 = FUNC_12(VAR_13, VAR_12, VAR_5);
        if (VAR_6) goto cleanup;
    }

    if (VAR_4)
    {
        if (&FUNC_11)
            VAR_6 = FUNC_11(VAR_3, VAR_4, VAR_5, 0);
        else
            VAR_6 = FUNC_4(VAR_3, VAR_4);
    }
    else
        while (VAR_2)
        {
            VAR_10 = VAR_9;
            if (FUNC_7(VAR_3, 0, VAR_12, &VAR_10,
                  ((void*)0), ((void*)0), ((void*)0), ((void*)0))) break;

            VAR_6 = FUNC_5(VAR_3, VAR_12);
            if (VAR_6) goto cleanup;
        }

cleanup:
    if (VAR_12 != VAR_11)
        FUNC_2(FUNC_0(), 0, VAR_12);
    if(VAR_4)
        FUNC_3(VAR_13);
    return VAR_6;
}
