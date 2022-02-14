
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szValue ;
typedef int szName ;
typedef int szDefaultOs ;
typedef int WPARAM ;
typedef int WCHAR ;
typedef int PINT ;
typedef scalar_t__ PBOOTRECORD ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int INT ;
typedef int INFCONTEXT ;
typedef int HWND ;
typedef int HINF ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ,char*,char*,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int,int *,int,scalar_t__*) ;
 int VAR_11 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;

__attribute__((used)) static INT
FUNC_11(HINF VAR_12, HWND VAR_13)
{
    INFCONTEXT VAR_14;
    PBOOTRECORD VAR_15;
    WCHAR VAR_16[VAR_10];
    WCHAR VAR_17[VAR_10];
    WCHAR VAR_18[VAR_10];
    DWORD VAR_19;
    DWORD VAR_20;
    LRESULT VAR_21;

    if (!FUNC_5(VAR_12,
                           L"FREELOADER",
                           L"DefaultOS",
                           &VAR_14))
    {

        return VAR_7;
    }

    if (!FUNC_8(&VAR_14,
                             1,
                             VAR_16,
                             sizeof(VAR_16) / sizeof(WCHAR),
                             &VAR_19))
    {

        return VAR_7;
    }

    if (!FUNC_5(VAR_12,
                           L"FREELOADER",
                           L"TimeOut",
                           &VAR_14))
    {

        return VAR_7;
    }


    if (!FUNC_7(&VAR_14,
                          1,
                          (PINT)&VAR_20))
    {

        return VAR_7;
    }

    if (!FUNC_5(VAR_12,
                           L"Operating Systems",
                           ((void*)0),
                           &VAR_14))
    {

       return VAR_7;
    }

    do
    {
        if (!FUNC_8(&VAR_14,
                                 0,
                                 VAR_17,
                                 sizeof(VAR_17) / sizeof(WCHAR),
                                 &VAR_19))
        {

            return VAR_7;
        }

        if (!FUNC_8(&VAR_14,
                                 1,
                                 VAR_18,
                                 sizeof(VAR_18) / sizeof(WCHAR),
                                 &VAR_19))
        {

            return VAR_7;
        }

        VAR_15 = FUNC_2(VAR_12, VAR_17);
        if (VAR_15)
        {
            VAR_21 = FUNC_3(VAR_13, VAR_9, VAR_2, (WPARAM)0, (LPARAM)VAR_18);
            if (VAR_21 != VAR_3)
            {
                FUNC_3(VAR_13, VAR_9, VAR_6, (WPARAM)VAR_21, (LPARAM)VAR_15);
                if (!FUNC_9(VAR_16, VAR_17))
                {

                    FUNC_10(VAR_16, VAR_18);
                }
            }
            else
            {
               FUNC_1(FUNC_0(), 0, VAR_15);
            }
        }
    }
    while (FUNC_6(&VAR_14, &VAR_14));


    VAR_21 = FUNC_3(VAR_13, VAR_9, VAR_4, (WPARAM)-1, (LPARAM)VAR_16);
    if (VAR_21 != VAR_3)
    {

       FUNC_3(VAR_13, VAR_9, VAR_5, (WPARAM)VAR_21, (LPARAM)0);
    }

    if(VAR_20)
    {
        FUNC_3(VAR_13, VAR_8, VAR_0, (WPARAM)VAR_1, (LPARAM)0);
    }

    FUNC_4(VAR_13, VAR_20);

    return VAR_11;
}
