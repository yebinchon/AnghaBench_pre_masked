
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


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int *,scalar_t__*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *) ;
 int FUNC_7 (int *,int *,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static
BOOL
FUNC_8(PWSTR* VAR_7)
{
    LONG VAR_8;
    HKEY VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16;
    LPWSTR VAR_17;
    LPWSTR VAR_18;

    VAR_8 = FUNC_5(VAR_2,
                          L"SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Environment",
                          0,
                          VAR_3,
                          &VAR_9);
    if (VAR_8 != VAR_0)
    {
        FUNC_0("RegOpenKeyExW() failed (Error %ld)\n", VAR_8);
        return VAR_1;
    }

    VAR_8 = FUNC_6(VAR_9,
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            &VAR_10,
                            &VAR_11,
                            &VAR_12,
                            ((void*)0),
                            ((void*)0));
    if (VAR_8 != VAR_0)
    {
        FUNC_0("RegQueryInforKey() failed (Error %ld)\n", VAR_8);
        FUNC_3(VAR_9);
        return VAR_1;
    }

    if (VAR_10 == 0)
    {
        FUNC_3(VAR_9);
        return VAR_6;
    }


    VAR_11++;
    VAR_17 = FUNC_1(VAR_4, VAR_11 * sizeof(WCHAR));
    if (VAR_17 == ((void*)0))
    {
        FUNC_3(VAR_9);
        return VAR_1;
    }

    VAR_18 = FUNC_1(VAR_4, VAR_12);
    if (VAR_18 == ((void*)0))
    {
        FUNC_2(VAR_17);
        FUNC_3(VAR_9);
        return VAR_1;
    }


    for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
    {
        VAR_13 = VAR_11;
        VAR_14 = VAR_12;

        VAR_8 = FUNC_4(VAR_9,
                              VAR_16,
                              VAR_17,
                              &VAR_13,
                              ((void*)0),
                              &VAR_15,
                              (LPBYTE)VAR_18,
                              &VAR_14);
        if (VAR_8 == VAR_0)
        {

            FUNC_7(VAR_7,
                                       VAR_17,
                                       VAR_18,
                                       (VAR_15 == VAR_5));
        }
        else
        {
            FUNC_2(VAR_18);
            FUNC_2(VAR_17);
            FUNC_3(VAR_9);

            return VAR_1;
        }
    }

    FUNC_2(VAR_18);
    FUNC_2(VAR_17);
    FUNC_3(VAR_9);

    return VAR_6;
}
