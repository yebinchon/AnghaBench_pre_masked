
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szValue ;
typedef int szOptions ;
typedef int szName ;
typedef int WPARAM ;
typedef int WCHAR ;
struct TYPE_3__ {int * szOptions; int * szSectionName; int * szBootPath; scalar_t__ BootType; } ;
typedef TYPE_1__* PBOOTRECORD ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HWND ;
typedef int HINF ;
typedef scalar_t__ DWORD ;
typedef int BOOTRECORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,char*,int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int,int *,int,scalar_t__*) ;
 int VAR_12 ;
 int FUNC_8 (int *,char*,int) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static INT
FUNC_12(HINF VAR_13, HWND VAR_14)
{
    INFCONTEXT VAR_15;
    WCHAR VAR_16[VAR_11];
    WCHAR VAR_17[VAR_11];
    DWORD VAR_18;
    DWORD VAR_19 = 0;
    WCHAR VAR_20[VAR_11];
    WCHAR VAR_21[VAR_11];
    PBOOTRECORD VAR_22;
    LRESULT VAR_23;

    if(!FUNC_5(VAR_13,
                           L"boot loader",
                           ((void*)0),
                           &VAR_15))
    {
        return VAR_7;
    }

    do
    {
        if (!FUNC_7(&VAR_15,
                                 0,
                                 VAR_16,
                                 sizeof(VAR_16) / sizeof(WCHAR),
                                 &VAR_18))
        {
            return VAR_7;
        }

        if (!FUNC_7(&VAR_15,
                                 1,
                                 VAR_17,
                                 sizeof(VAR_17) / sizeof(WCHAR),
                                 &VAR_18))
        {
            return VAR_7;
        }

        if (!FUNC_8(VAR_16, L"timeout", 7))
        {
            VAR_19 = FUNC_9(VAR_17);
        }

        if (!FUNC_8(VAR_16, L"default", 7))
        {
            FUNC_11(VAR_20, VAR_17);
        }

    }
    while (FUNC_6(&VAR_15, &VAR_15));

    if (!FUNC_5(VAR_13,
                            L"operating systems",
                            ((void*)0),
                            &VAR_15))
    {

        return VAR_7;
    }

    do
    {
        if (!FUNC_7(&VAR_15,
                                 0,
                                 VAR_16,
                                 sizeof(VAR_16) / sizeof(WCHAR),
                                 &VAR_18))
        {
            return VAR_7;
        }

        if (!FUNC_7(&VAR_15,
                                 1,
                                 VAR_17,
                                 sizeof(VAR_17) / sizeof(WCHAR),
                                 &VAR_18))
        {
            return VAR_7;
        }

        FUNC_7(&VAR_15,
                            2,
                            VAR_21,
                            sizeof(VAR_21) / sizeof(WCHAR),
                            &VAR_18);

        VAR_22 = (PBOOTRECORD) FUNC_1(FUNC_0(), VAR_8, sizeof(BOOTRECORD));
        if (VAR_22)
        {
            VAR_22->BootType = 0;
            FUNC_11(VAR_22->szBootPath, VAR_16);
            FUNC_11(VAR_22->szSectionName, VAR_17);
            FUNC_11(VAR_22->szOptions, VAR_21);

            if (!FUNC_10(VAR_16, VAR_20))
            {

                FUNC_11(VAR_20, VAR_17);
            }

            VAR_23 = FUNC_3(VAR_14, VAR_10, VAR_2, (WPARAM)0, (LPARAM)VAR_17);
            if (VAR_23 != VAR_3)
            {
                FUNC_3(VAR_14, VAR_10, VAR_6, (WPARAM)VAR_23, (LPARAM)VAR_22);
            }
            else
            {
               FUNC_2(FUNC_0(), 0, VAR_22);
            }
        }

    }
    while (FUNC_6(&VAR_15, &VAR_15));


    VAR_23 = FUNC_3(VAR_14, VAR_10, VAR_4, (WPARAM)0, (LPARAM)VAR_20);
    if (VAR_23 != VAR_3)
    {

       FUNC_3(VAR_14, VAR_10, VAR_5, (WPARAM)VAR_23, (LPARAM)0);
    }

    if(VAR_19)
    {
        FUNC_3(VAR_14, VAR_9, VAR_0, (WPARAM)VAR_1, (LPARAM)0);
    }

    FUNC_4(VAR_14, VAR_19);

    return VAR_12;
}
