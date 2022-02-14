
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int PWSTR ;
typedef int * LPWSTR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int *,scalar_t__*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *,int *,int *,int) ;
 int VAR_5 ;
 int FUNC_10 (int *,char*) ;

__attribute__((used)) static
BOOL
FUNC_11(PWSTR* VAR_6,
                   HKEY VAR_7,
                   LPWSTR VAR_8)
{
    LONG VAR_9;
    HKEY VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;
    LPWSTR VAR_18;
    LPWSTR VAR_19;

    VAR_9 = FUNC_6(VAR_7,
                          VAR_8,
                          0,
                          VAR_2,
                          &VAR_10);
    if (VAR_9 != VAR_0)
    {
        FUNC_1("RegOpenKeyExW() failed (Error %ld)\n", VAR_9);
        FUNC_8((DWORD)VAR_9);
        return VAR_1;
    }

    VAR_9 = FUNC_7(VAR_10,
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            &VAR_11,
                            &VAR_12,
                            &VAR_13,
                            ((void*)0),
                            ((void*)0));
    if (VAR_9 != VAR_0)
    {
        FUNC_1("RegQueryInforKey() failed (Error %ld)\n", VAR_9);
        FUNC_4(VAR_10);
        FUNC_8((DWORD)VAR_9);
        return VAR_1;
    }

    if (VAR_11 == 0)
    {
        FUNC_4(VAR_10);
        return VAR_5;
    }


    VAR_12++;
    VAR_18 = FUNC_2(VAR_3, VAR_12 * sizeof(WCHAR));
    if (VAR_18 == ((void*)0))
    {
        FUNC_4(VAR_10);
        return VAR_1;
    }

    VAR_19 = FUNC_2(VAR_3, VAR_13);
    if (VAR_19 == ((void*)0))
    {
        FUNC_3(VAR_18);
        FUNC_4(VAR_10);
        return VAR_1;
    }


    for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++)
    {
        VAR_14 = VAR_12;
        VAR_15 = VAR_13;

        VAR_9 = FUNC_5(VAR_10,
                              VAR_17,
                              VAR_18,
                              &VAR_14,
                              ((void*)0),
                              &VAR_16,
                              (LPBYTE)VAR_19,
                              &VAR_15);
        if (VAR_9 == VAR_0)
        {
            if (!FUNC_10(VAR_18, L"PATH"))
            {

                FUNC_0(VAR_6,
                                              VAR_18,
                                              VAR_19);
            }
            else
            {

                FUNC_9(VAR_6,
                                           VAR_18,
                                           VAR_19,
                                           (VAR_16 == VAR_4));
            }
        }
        else
        {
            FUNC_3(VAR_19);
            FUNC_3(VAR_18);
            FUNC_4(VAR_10);

            return VAR_1;
        }
    }

    FUNC_3(VAR_19);
    FUNC_3(VAR_18);
    FUNC_4(VAR_10);

    return VAR_5;
}
