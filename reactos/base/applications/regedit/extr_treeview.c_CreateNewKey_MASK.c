
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int* LPCWSTR ;
typedef int LONG ;
typedef int HWND ;
typedef int HTREEITEM ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (int ,int ,int **) ;
 int VAR_2 ;
 int FUNC_2 (int ,int,int *,char*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int *,int ,int ,int *,int **,scalar_t__*) ;
 scalar_t__ FUNC_7 (int *,int*,int **) ;
 int VAR_8 ;
 int FUNC_8 (int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *,int *,int ) ;

BOOL FUNC_10(HWND VAR_11, HTREEITEM VAR_12)
{
    WCHAR VAR_13[128];
    WCHAR VAR_14[128];
    LPCWSTR VAR_15;
    int VAR_16 = 1;
    LONG VAR_17;
    HKEY VAR_18 = ((void*)0), VAR_19 = ((void*)0), VAR_20 = ((void*)0);
    BOOL VAR_21 = VAR_1;
    DWORD VAR_22;
    HTREEITEM VAR_23;

    VAR_15 = FUNC_1(VAR_11, VAR_12, &VAR_18);
    if (VAR_15[0] == L'\0')
        VAR_19 = VAR_18;
    else if (FUNC_7(VAR_18, VAR_15, &VAR_19) != VAR_0)
        goto done;

    if (FUNC_4(VAR_10, VAR_2, VAR_13, FUNC_0(VAR_13)) <= 0)
        goto done;


    do
    {
        FUNC_9(VAR_14, VAR_13, VAR_16++);
        VAR_17 = FUNC_6(VAR_19, VAR_14, 0, ((void*)0), VAR_7, VAR_3, ((void*)0), &VAR_20, &VAR_22);
        if (VAR_20 && VAR_22 == VAR_6)
        {
            FUNC_5(VAR_20);
            VAR_20 = ((void*)0);
        }
        else if (!VAR_20)
        {
            FUNC_2(VAR_9, VAR_5 | VAR_4, ((void*)0), L"Cannot create new key!\n\nError Code: %d", VAR_17);
            goto done;
        }
    }
    while(!VAR_20);


    VAR_23 = FUNC_3(VAR_11, VAR_12, VAR_14);
    if (!VAR_23)
        goto done;


    (void)FUNC_8(VAR_11, VAR_23);

    VAR_21 = VAR_8;

done:
    if (VAR_19 != VAR_18 && VAR_19)
        FUNC_5(VAR_19);
    if (VAR_20)
        FUNC_5(VAR_20);
    return VAR_21;
}
