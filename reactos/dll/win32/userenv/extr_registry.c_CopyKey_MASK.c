
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int FILETIME ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ) ;
 scalar_t__ FUNC_8 (int ,int *,int ,int *,int ,int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int ,scalar_t__,int *,scalar_t__*,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_11 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *,int *,int *,scalar_t__*,scalar_t__*,int *,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_13 (int ,int *,int ,scalar_t__,int *,scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static
BOOL
FUNC_15(HKEY VAR_7,
        HKEY VAR_8)
{
    LONG VAR_9;
    FILETIME VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;
    DWORD VAR_18;
    DWORD VAR_19;
    DWORD VAR_20;
    DWORD VAR_21;
    LPWSTR VAR_22;
    LPBYTE VAR_23;
    HKEY VAR_24;
    HKEY VAR_25;

    FUNC_0 ("CopyKey() called \n");

    VAR_9 = FUNC_12(VAR_8,
                            ((void*)0),
                            ((void*)0),
                            ((void*)0),
                            &VAR_11,
                            &VAR_14,
                            ((void*)0),
                            &VAR_12,
                            &VAR_16,
                            &VAR_18,
                            ((void*)0),
                            ((void*)0));
    if (VAR_9 != VAR_1)
    {
        FUNC_1("RegQueryInfoKey() failed (Error %lu)\n", VAR_9);
        FUNC_14((DWORD)VAR_9);
        return VAR_2;
    }

    VAR_14++;
    VAR_16++;

    FUNC_0("dwSubKeys %lu\n", VAR_11);
    FUNC_0("dwMaxSubKeyNameLength %lu\n", VAR_14);
    FUNC_0("dwValues %lu\n", VAR_12);
    FUNC_0("dwMaxValueNameLength %lu\n", VAR_16);
    FUNC_0("dwMaxValueLength %lu\n", VAR_18);


    if (VAR_11 != 0)
    {
        VAR_22 = FUNC_4(FUNC_3(),
                                 0,
                                 VAR_14 * sizeof(WCHAR));
        if (VAR_22 == ((void*)0))
        {
            FUNC_1("Buffer allocation failed\n");
            FUNC_14(VAR_0);
            return VAR_2;
        }

        for (VAR_21 = 0; VAR_21 < VAR_11; VAR_21++)
        {
            VAR_15 = VAR_14;
            VAR_9 = FUNC_9(VAR_8,
                                  VAR_21,
                                  VAR_22,
                                  &VAR_15,
                                  ((void*)0),
                                  ((void*)0),
                                  ((void*)0),
                                  &VAR_10);
            if (VAR_9 != VAR_1)
            {
                FUNC_1("Subkey enumeration failed (Error %lu)\n", VAR_9);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_22);
                FUNC_14((DWORD)VAR_9);
                return VAR_2;
            }

            VAR_9 = FUNC_8(VAR_7,
                                    VAR_22,
                                    0,
                                    ((void*)0),
                                    VAR_5,
                                    VAR_4,
                                    ((void*)0),
                                    &VAR_24,
                                    &VAR_20);
            if (VAR_9 != VAR_1)
            {
                FUNC_1("Subkey creation failed (Error %lu)\n", VAR_9);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_22);
                FUNC_14((DWORD)VAR_9);
                return VAR_2;
            }

            VAR_9 = FUNC_11(VAR_8,
                                  VAR_22,
                                  0,
                                  VAR_3,
                                  &VAR_25);
            if (VAR_9 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_9);
                FUNC_6(VAR_24);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_22);
                FUNC_14((DWORD)VAR_9);
                return VAR_2;
            }

            if (!FUNC_15(VAR_24,
                         VAR_25))
            {
                FUNC_1("Error: %lu\n", FUNC_2());
                FUNC_6 (VAR_25);
                FUNC_6 (VAR_24);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_22);
                return VAR_2;
            }

            FUNC_6(VAR_25);
            FUNC_6(VAR_24);
        }

        FUNC_5(FUNC_3(),
                 0,
                 VAR_22);
    }


    if (VAR_12 != 0)
    {
        VAR_22 = FUNC_4(FUNC_3(),
                                 0,
                                 VAR_16 * sizeof(WCHAR));
        if (VAR_22 == ((void*)0))
        {
            FUNC_1("Buffer allocation failed\n");
            FUNC_14(VAR_0);
            return VAR_2;
        }

        VAR_23 = FUNC_4(FUNC_3(),
                                 0,
                                 VAR_18);
        if (VAR_23 == ((void*)0))
        {
            FUNC_1("Buffer allocation failed\n");
            FUNC_5(FUNC_3(),
                     0,
                     VAR_22);
            FUNC_14(VAR_0);
            return VAR_2;
        }

        for (VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
        {
            VAR_17 = VAR_16;
            VAR_19 = VAR_18;
            VAR_9 = FUNC_10(VAR_8,
                                  VAR_21,
                                  VAR_22,
                                  &VAR_17,
                                  ((void*)0),
                                  &VAR_13,
                                  VAR_23,
                                  &VAR_19);
            if (VAR_9 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_9);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_23);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_22);
                FUNC_14((DWORD)VAR_9);
                return VAR_2;
            }

            VAR_9 = FUNC_13(VAR_7,
                                   VAR_22,
                                   0,
                                   VAR_13,
                                   VAR_23,
                                   VAR_19);
            if (VAR_9 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_9);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_23);
                FUNC_5(FUNC_3(),
                         0,
                         VAR_22);
                FUNC_14((DWORD)VAR_9);
                return VAR_2;
            }
        }

        FUNC_5(FUNC_3(),
                 0,
                 VAR_23);

        FUNC_5(FUNC_3(),
                 0,
                 VAR_22);
    }

    FUNC_0("CopyKey() done \n");

    return VAR_6;

}
