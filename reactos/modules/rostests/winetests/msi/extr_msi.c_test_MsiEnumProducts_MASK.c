
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int REGSAM ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int *,int ,int,int *,int *,int *) ;
 int FUNC_5 (int ,char*) ;
 int VAR_10 ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,int) ;
 char* FUNC_8 () ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static void FUNC_14(void)
{
    UINT VAR_12;
    BOOL VAR_13, VAR_14, VAR_15;
    DWORD VAR_16;
    char VAR_17[39], VAR_18[39], VAR_19[39], VAR_20[39];
    char VAR_21[33], VAR_22[33], VAR_23[33];
    char VAR_24[VAR_9], VAR_25[VAR_9], VAR_26[VAR_9];
    char *VAR_27;
    HKEY VAR_28, VAR_29, VAR_30;
    REGSAM VAR_31 = VAR_7;

    FUNC_6(VAR_17, VAR_21);
    FUNC_6(VAR_18, VAR_22);
    FUNC_6(VAR_19, VAR_23);
    VAR_27 = FUNC_8();

    if (VAR_11)
        VAR_31 |= VAR_8;

    FUNC_13(VAR_25, "Software\\Microsoft\\Windows\\CurrentVersion\\Installer\\Managed\\");
    FUNC_11(VAR_25, VAR_27);
    FUNC_11(VAR_25, "\\Installer\\Products\\");
    FUNC_11(VAR_25, VAR_22);

    VAR_12 = FUNC_4(VAR_6, VAR_25, 0, ((void*)0), 0, VAR_31, ((void*)0), &VAR_29, ((void*)0));
    if (VAR_12 == VAR_0)
    {
        FUNC_10("Not enough rights to perform tests\n");
        FUNC_0(VAR_27);
        return;
    }
    FUNC_9(VAR_12 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_12);

    FUNC_13(VAR_24, "Software\\Classes\\Installer\\Products\\");
    FUNC_11(VAR_24, VAR_21);

    VAR_12 = FUNC_4(VAR_6, VAR_24, 0, ((void*)0), 0, VAR_31, ((void*)0), &VAR_28, ((void*)0));
    FUNC_9(VAR_12 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_12);

    FUNC_13(VAR_26, "Software\\Microsoft\\Installer\\Products\\");
    FUNC_11(VAR_26, VAR_23);

    VAR_12 = FUNC_3(VAR_5, VAR_26, &VAR_30);
    FUNC_9(VAR_12 == VAR_3, "Expected ERROR_SUCCESS, got %d\n", VAR_12);

    VAR_16 = 0;
    VAR_12 = FUNC_1(VAR_16, VAR_20);
    FUNC_9(VAR_12 == VAR_3, "Expected ERROR_SUCCESS, got %u\n", VAR_12);

    VAR_12 = FUNC_1(VAR_16, ((void*)0));
    FUNC_9(VAR_12 == VAR_1, "Expected ERROR_INVALID_PARAMETER, got %u\n", VAR_12);

    VAR_16 = 2;
    VAR_12 = FUNC_1(VAR_16, VAR_20);
    FUNC_9(VAR_12 == VAR_1, "Expected ERROR_INVALID_PARAMETER, got %u\n", VAR_12);

    VAR_16 = 0;
    VAR_12 = FUNC_1(VAR_16, VAR_20);
    FUNC_9(VAR_12 == VAR_3, "Expected ERROR_SUCCESS, got %u\n", VAR_12);

    VAR_13 = VAR_14 = VAR_15 = VAR_4;
    while ((VAR_12 = FUNC_1(VAR_16, VAR_20)) == VAR_3)
    {
        if (!FUNC_12(VAR_17, VAR_20)) VAR_13 = VAR_10;
        if (!FUNC_12(VAR_18, VAR_20)) VAR_14 = VAR_10;
        if (!FUNC_12(VAR_19, VAR_20)) VAR_15 = VAR_10;
        VAR_16++;
    }
    FUNC_9(VAR_12 == VAR_2, "Expected ERROR_NO_MORE_ITEMS, got %u\n", VAR_12);
    FUNC_9(VAR_13, "product1 not found\n");
    FUNC_9(VAR_14, "product2 not found\n");
    FUNC_9(VAR_15, "product3 not found\n");

    FUNC_7(VAR_28, "", VAR_31 & VAR_8);
    FUNC_7(VAR_29, "", VAR_31 & VAR_8);
    FUNC_5(VAR_30, "");
    FUNC_2(VAR_28);
    FUNC_2(VAR_29);
    FUNC_2(VAR_30);
    FUNC_0(VAR_27);
}
