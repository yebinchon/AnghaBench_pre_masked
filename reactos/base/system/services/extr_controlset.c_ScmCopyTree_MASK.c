
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * LPWSTR ;
typedef int * LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 int * FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int *,int ,int ,int *,int *,scalar_t__*) ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int *,scalar_t__*,int *,scalar_t__*,int *,scalar_t__*) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *,int *,int *,scalar_t__*,scalar_t__*,int *,scalar_t__*,scalar_t__*,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_11 (int ,int *,int ,scalar_t__,int *,scalar_t__) ;

__attribute__((used)) static
DWORD
FUNC_12(
    HKEY VAR_5,
    HKEY VAR_6)
{
    DWORD VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    DWORD VAR_11;
    DWORD VAR_12;
    DWORD VAR_13;
    DWORD VAR_14;
    DWORD VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;
    LPWSTR VAR_18;
    LPBYTE VAR_19;
    HKEY VAR_20;
    HKEY VAR_21;
    DWORD VAR_22;

    FUNC_0("ScmCopyTree()\n");

    VAR_22 = FUNC_10(VAR_5,
                              ((void*)0),
                              ((void*)0),
                              ((void*)0),
                              &VAR_7,
                              &VAR_10,
                              ((void*)0),
                              &VAR_8,
                              &VAR_12,
                              &VAR_14,
                              ((void*)0),
                              ((void*)0));
    if (VAR_22 != VAR_1)
    {
        FUNC_1("RegQueryInfoKey() failed (Error %lu)\n", VAR_22);
        return VAR_22;
    }

    VAR_10++;
    VAR_12++;

    FUNC_0("dwSubKeys %lu\n", VAR_7);
    FUNC_0("dwMaxSubKeyNameLength %lu\n", VAR_10);
    FUNC_0("dwValues %lu\n", VAR_8);
    FUNC_0("dwMaxValueNameLength %lu\n", VAR_12);
    FUNC_0("dwMaxValueLength %lu\n", VAR_14);


    if (VAR_7 != 0)
    {
        VAR_18 = FUNC_3(FUNC_2(),
                                 0,
                                 VAR_10 * sizeof(WCHAR));
        if (VAR_18 == ((void*)0))
        {
            FUNC_1("Buffer allocation failed\n");
            return VAR_0;
        }

        for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++)
        {
            VAR_11 = VAR_10;
            VAR_22 = FUNC_7(VAR_5,
                                    VAR_17,
                                    VAR_18,
                                    &VAR_11,
                                    ((void*)0),
                                    ((void*)0),
                                    ((void*)0),
                                    ((void*)0));
            if (VAR_22 != VAR_1)
            {
                FUNC_1("Subkey enumeration failed (Error %lu)\n", VAR_22);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_18);
                return VAR_22;
            }

            VAR_22 = FUNC_6(VAR_6,
                                      VAR_18,
                                      0,
                                      ((void*)0),
                                      VAR_4,
                                      VAR_3,
                                      ((void*)0),
                                      &VAR_20,
                                      &VAR_16);
            if (VAR_22 != VAR_1)
            {
                FUNC_1("Subkey creation failed (Error %lu)\n", VAR_22);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_18);
                return VAR_22;
            }

            VAR_22 = FUNC_9(VAR_5,
                                    VAR_18,
                                    0,
                                    VAR_2,
                                    &VAR_21);
            if (VAR_22 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_22);
                FUNC_5(VAR_20);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_18);
                return VAR_22;
            }

            VAR_22 = FUNC_12(VAR_21,
                                  VAR_20);
            if (VAR_22 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_22);
                FUNC_5 (VAR_21);
                FUNC_5 (VAR_20);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_18);
                return VAR_22;
            }

            FUNC_5(VAR_21);
            FUNC_5(VAR_20);
        }

        FUNC_4(FUNC_2(),
                 0,
                 VAR_18);
    }


    if (VAR_8 != 0)
    {
        VAR_18 = FUNC_3(FUNC_2(),
                                 0,
                                 VAR_12 * sizeof(WCHAR));
        if (VAR_18 == ((void*)0))
        {
            FUNC_1("Buffer allocation failed\n");
            return VAR_0;
        }

        VAR_19 = FUNC_3(FUNC_2(),
                                 0,
                                 VAR_14);
        if (VAR_19 == ((void*)0))
        {
            FUNC_1("Buffer allocation failed\n");
            FUNC_4(FUNC_2(),
                     0,
                     VAR_18);
            return VAR_0;
        }

        for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
        {
            VAR_13 = VAR_12;
            VAR_15 = VAR_14;
            VAR_22 = FUNC_8(VAR_5,
                                    VAR_17,
                                    VAR_18,
                                    &VAR_13,
                                    ((void*)0),
                                    &VAR_9,
                                    VAR_19,
                                    &VAR_15);
            if (VAR_22 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_22);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_19);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_18);
                return VAR_22;
            }

            VAR_22 = FUNC_11(VAR_6,
                                     VAR_18,
                                     0,
                                     VAR_9,
                                     VAR_19,
                                     VAR_15);
            if (VAR_22 != VAR_1)
            {
                FUNC_1("Error: %lu\n", VAR_22);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_19);
                FUNC_4(FUNC_2(),
                         0,
                         VAR_18);
                return VAR_22;
            }
        }

        FUNC_4(FUNC_2(),
                 0,
                 VAR_19);

        FUNC_4(FUNC_2(),
                 0,
                 VAR_18);
    }

    FUNC_0("ScmCopyTree() done \n");

    return VAR_1;
}
