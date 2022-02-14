
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int cChildren; int cchTextMax; int* pszText; void* hItem; int mask; } ;
typedef TYPE_1__ TVITEMW ;
typedef int* LPWSTR ;
typedef int* LPCWSTR ;
typedef int LPARAM ;
typedef int HWND ;
typedef void* HTREEITEM ;
typedef int HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,void*,int*,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int* FUNC_1 (int ,void*,int *) ;
 int FUNC_2 () ;
 int* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int*) ;
 scalar_t__ FUNC_5 (int ,int ,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int,int*,int*,int ,int ,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int*,int ,int ,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int*,int*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_11 (int ,void*) ;
 void* FUNC_12 (int ,void*) ;
 int FUNC_13 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int ,void*,int ) ;
 void* FUNC_15 (int ,void*) ;
 int FUNC_16 (int ,TYPE_1__*) ;
 int FUNC_17 (int*,int*) ;
 scalar_t__ FUNC_18 (int*) ;

BOOL FUNC_19(HWND VAR_9, HTREEITEM VAR_10)
{
    HKEY VAR_11, VAR_12, VAR_13;
    HTREEITEM VAR_14;
    LPCWSTR VAR_15;
    DWORD VAR_16, VAR_17, VAR_18;
    LPWSTR VAR_19 = ((void*)0);
    TVITEMW VAR_20;
    LPWSTR VAR_21 = ((void*)0);
    BOOL VAR_22 = VAR_1;
    LPWSTR VAR_23;
    BOOL VAR_24;

    VAR_15 = FUNC_1(VAR_9, VAR_10, &VAR_11);

    if (*VAR_15)
    {
        if (FUNC_8(VAR_11, VAR_15, 0, VAR_3, &VAR_12) != VAR_0)
        {
            goto done;
        }
    }
    else
    {
        VAR_12 = VAR_11;
    }

    if (FUNC_9(VAR_12, 0, 0, 0, &VAR_16, &VAR_18, 0, 0, 0, 0, 0, 0) != VAR_0)
    {
        goto done;
    }


    VAR_20.mask = VAR_5;
    VAR_20.hItem = VAR_10;
    VAR_20.cChildren = VAR_16;
    if (!FUNC_16(VAR_9, &VAR_20))
    {
        goto done;
    }


    if (FUNC_14(VAR_9, VAR_10, VAR_7) == 0)
    {
        FUNC_6(VAR_12);
        VAR_22 = VAR_4;
        goto done;
    }

    VAR_18++;
    if (!(VAR_19 = FUNC_3(FUNC_2(), 0, VAR_18 * sizeof(WCHAR))))
    {
        goto done;
    }
    VAR_20.cchTextMax = VAR_18;





    {
        DWORD VAR_25 = 0;
        DWORD VAR_26 = 0;
        DWORD VAR_27;
        LPWSTR VAR_28;
        DWORD VAR_29 = 10000;

        for (VAR_14 = FUNC_12(VAR_9, VAR_10); VAR_14;
                VAR_14 = FUNC_15(VAR_9, VAR_14))
        {

            if (VAR_26 + VAR_18 + 1 > VAR_25)
            {
                VAR_27 = VAR_26 + VAR_18 + 1 + VAR_29;

                if (VAR_21)
                    VAR_28 = (LPWSTR) FUNC_5(FUNC_2(), 0, VAR_21, VAR_27 * sizeof(WCHAR));
                else
                    VAR_28 = (LPWSTR) FUNC_3(FUNC_2(), 0, VAR_27 * sizeof(WCHAR));
                if (!VAR_28)
                    goto done;

                VAR_25 = VAR_27;
                VAR_21 = VAR_28;
            }

            VAR_20.mask = VAR_6;
            VAR_20.hItem = VAR_14;
            VAR_20.pszText = &VAR_21[VAR_26];
            VAR_20.cchTextMax = VAR_25 - VAR_26;
            if (!FUNC_13(VAR_9, &VAR_20))
                goto done;

            VAR_26 += (DWORD) FUNC_18(&VAR_21[VAR_26]) + 1;
        }

        if (VAR_21)
            VAR_21[VAR_26] = L'\0';
    }


    VAR_14 = FUNC_12(VAR_9, VAR_10);
    while (VAR_14)
    {
        HTREEITEM VAR_30 = FUNC_15(VAR_9, VAR_14);
        if (FUNC_19(VAR_9, VAR_14) == VAR_1)
        {
            (void)FUNC_11(VAR_9, VAR_14);
        }
        VAR_14 = VAR_30;
    }


    VAR_24 = VAR_1;
    for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++)
    {
        DWORD VAR_31 = VAR_18, VAR_32;
        BOOL VAR_33;

        VAR_33 = VAR_1;
        if (FUNC_7(VAR_12, VAR_17, VAR_19, &VAR_31, 0, 0, 0, ((void*)0)) != VAR_0)
        {
            continue;
        }


        if (VAR_21)
        {
            for (VAR_23 = VAR_21; *VAR_23; VAR_23 += FUNC_18(VAR_23) + 1)
            {
                if (!FUNC_17(VAR_23, VAR_19))
                {
                    VAR_33 = VAR_4;
                    break;
                }
            }
        }

        if (VAR_33 == VAR_1)
        {

            VAR_32 = 0;
            if (FUNC_8(VAR_12, VAR_19, 0, VAR_2, &VAR_13) == VAR_0)
            {
                if (FUNC_9(VAR_13, 0, 0, 0, &VAR_32, 0, 0, 0, 0, 0, 0, 0) != VAR_0)
                {
                    VAR_32 = 0;
                }
                FUNC_6(VAR_13);
            }

            FUNC_0(VAR_9, VAR_10, VAR_19, ((void*)0), VAR_32);
            VAR_24 = VAR_4;
        }
    }
    FUNC_6(VAR_12);

    if (VAR_24)
        FUNC_10(VAR_9, VAR_8, 0, (LPARAM) VAR_10);

    VAR_22 = VAR_4;

done:
    if (VAR_21)
        FUNC_4(FUNC_2(), 0, VAR_21);
    if (VAR_19)
        FUNC_4(FUNC_2(), 0, VAR_19);
    return VAR_22;
}
