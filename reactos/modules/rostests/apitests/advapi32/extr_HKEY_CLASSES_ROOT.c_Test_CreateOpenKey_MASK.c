
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (scalar_t__,char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,int ,int *,int ,int ,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 scalar_t__ FUNC_5 (scalar_t__,char*,int ,int ,scalar_t__*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,int *,char*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static
void
FUNC_14(void)
{
    HKEY VAR_10, VAR_11;
    HKEY VAR_12, VAR_13;
    HKEY VAR_14, VAR_15;
    DWORD VAR_16;
    DWORD VAR_17;


    VAR_16 = FUNC_3(
        VAR_6,
        L"Software\\Classes\\Apitest_HKLM",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_10,
        ((void*)0));

    if (VAR_16 == VAR_0)
    {
        FUNC_13("Please run those tests with Administrator rights\n");
        return;
    }

    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_10), "\n");


    VAR_16 = FUNC_5(
        VAR_4,
        L"Apitest_HKLM",
        0,
        VAR_8,
        &VAR_14);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");
    FUNC_11(VAR_14, &VAR_7, L"Apitest_HKLM");


    VAR_12 = (HKEY)(ULONG_PTR)0xCAFEF00DCAFEF00DULL;
    VAR_16 = FUNC_5(
        VAR_5,
        L"Software\\Classes\\Apitest_HKLM",
        0,
        VAR_8,
        &VAR_12);
    FUNC_7(VAR_16, VAR_1);
    FUNC_8(VAR_12, ((void*)0));


    FUNC_2(VAR_14);
    FUNC_2(VAR_10);
    VAR_16 = FUNC_0(VAR_6, L"Software\\Classes", L"Apitest_HKLM");
    FUNC_7(VAR_16, VAR_2);


    VAR_16 = FUNC_3(
        VAR_4,
        L"Apitest_HKCR",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_14,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");
    FUNC_11(VAR_14, &VAR_7, L"Apitest_HKCR");


    VAR_16 = FUNC_5(
        VAR_6,
        L"Software\\Classes\\Apitest_HKCR",
        0,
        VAR_8,
        &VAR_10);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_10), "\n");


    VAR_12 = (HKEY)(ULONG_PTR)0xCAFEF00DCAFEF00DULL;
    VAR_16 = FUNC_5(
        VAR_5,
        L"Software\\Classes\\Apitest_HKCR",
        0,
        VAR_8,
        &VAR_12);
    FUNC_7(VAR_16, VAR_1);
    FUNC_8(VAR_12, ((void*)0));


    VAR_16 = FUNC_4(VAR_4, L"Apitest_HKCR");
    FUNC_7(VAR_16, VAR_2);
    FUNC_10(VAR_14);
    FUNC_10(VAR_10);
    FUNC_2(VAR_14);
    FUNC_2(VAR_10);


    VAR_10 = (HKEY)(ULONG_PTR)0xCAFEF00DCAFEF00DULL;
    VAR_16 = FUNC_5(
        VAR_6,
        L"Software\\Classes\\Apitest_HKCR",
        0,
        VAR_8,
        &VAR_10);
    FUNC_7(VAR_16, VAR_1);
    FUNC_8(VAR_10, ((void*)0));


    VAR_16 = FUNC_3(
        VAR_5,
        L"Software\\Classes\\Apitest_HKCU",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_12,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_12), "\n");


    VAR_16 = FUNC_5(
        VAR_4,
        L"Apitest_HKCU",
        0,
        VAR_8,
        &VAR_14);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");
    FUNC_11(VAR_14, &VAR_3, L"Apitest_HKCU");


    VAR_16 = FUNC_5(
        VAR_6,
        L"Software\\Classes\\Apitest_HKCU",
        0,
        VAR_8,
        &VAR_10);
    FUNC_7(VAR_16, VAR_1);
    FUNC_8(VAR_10, ((void*)0));

    VAR_16 = FUNC_4(VAR_4, L"Apitest_HKCU");
    FUNC_7(VAR_16, VAR_2);
    FUNC_10(VAR_14);
    FUNC_10(VAR_12);
    FUNC_2(VAR_14);
    FUNC_2(VAR_12);


    VAR_12 = (HKEY)(ULONG_PTR)0xCAFEF00DCAFEF00DULL;
    VAR_16 = FUNC_5(
        VAR_5,
        L"Software\\Classes\\Apitest_HKCU",
        0,
        VAR_8,
        &VAR_12);
    FUNC_7(VAR_16, VAR_1);
    FUNC_8(VAR_12, ((void*)0));


    VAR_16 = FUNC_3(
        VAR_5,
        L"Software\\Classes\\Apitest_HKLM_HKCU",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_12,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_12), "\n");

    VAR_16 = FUNC_3(
        VAR_6,
        L"Software\\Classes\\Apitest_HKLM_HKCU",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_10,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_10), "\n");


    VAR_16 = FUNC_5(
        VAR_4,
        L"Apitest_HKLM_HKCU",
        0,
        VAR_8,
        &VAR_14);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");

    FUNC_11(VAR_14, &VAR_3, L"Apitest_HKLM_HKCU");


    FUNC_2(VAR_14);
    VAR_16 = FUNC_3(
        VAR_4,
        L"Apitest_HKLM_HKCU",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_14,
        &VAR_17);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");

    FUNC_11(VAR_14, &VAR_3, L"Apitest_HKLM_HKCU");
    FUNC_9(VAR_17, VAR_9);


    VAR_16 = FUNC_4(VAR_4, L"Apitest_HKLM_HKCU");
    FUNC_7(VAR_16, VAR_2);
    FUNC_10(VAR_12);
    FUNC_10(VAR_14);
    FUNC_12(VAR_10);

    FUNC_2(VAR_12);
    FUNC_2(VAR_14);


    VAR_16 = FUNC_4(VAR_4, L"Apitest_HKLM_HKCU");
    FUNC_7(VAR_16, VAR_2);
    FUNC_10(VAR_10);
    FUNC_2(VAR_10);


    VAR_16 = FUNC_3(
        VAR_6,
        L"Software\\Classes\\Apitest_HKLM",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_10,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_10), "\n");


    VAR_16 = FUNC_5(
        VAR_4,
        L"Apitest_HKLM",
        0,
        VAR_8,
        &VAR_14);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");
    FUNC_11(VAR_14, &VAR_7, L"Apitest_HKLM");


    VAR_16 = FUNC_3(
        VAR_5,
        L"Software\\Classes\\Apitest_HKLM\\HKCU_Subkey",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_13,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_13), "\n");


    VAR_16 = FUNC_5(
        VAR_14,
        L"HKCU_Subkey",
        0,
        VAR_8,
        &VAR_15);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_15), "\n");
    FUNC_11(VAR_15, &VAR_3, L"Apitest_HKLM\\HKCU_Subkey");


    FUNC_2(VAR_15);
    VAR_16 = FUNC_3(
        VAR_14,
        L"HKCU_Subkey",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_15,
        &VAR_17);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_15), "\n");

    FUNC_11(VAR_15, &VAR_3, L"Apitest_HKLM\\HKCU_Subkey");
    FUNC_9(VAR_17, VAR_9);


    VAR_16 = FUNC_5(
        VAR_5,
        L"Software\\Classes\\Apitest_HKLM",
        0,
        VAR_8,
        &VAR_12);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_12), "\n");


    VAR_16 = FUNC_4(VAR_12, L"HKCU_Subkey");
    FUNC_7(VAR_16, VAR_2);
    FUNC_10(VAR_13);
    FUNC_10(VAR_15);
    FUNC_2(VAR_13);
    FUNC_2(VAR_15);


    FUNC_4(VAR_4, L"Apitest_HKLM");
    FUNC_10(VAR_12);
    FUNC_2(VAR_12);
    FUNC_12(VAR_14);
    FUNC_12(VAR_10);


    FUNC_4(VAR_4, L"Apitest_HKLM");
    FUNC_10(VAR_14);
    FUNC_10(VAR_10);
    FUNC_2(VAR_14);
    FUNC_2(VAR_10);


    VAR_16 = FUNC_3(
        VAR_5,
        L"Software\\Classes\\Apitest_HKCU",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_12,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_12), "\n");


    VAR_16 = FUNC_5(
        VAR_4,
        L"Apitest_HKCU",
        0,
        VAR_8,
        &VAR_14);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_14), "\n");
    FUNC_11(VAR_14, &VAR_3, L"Apitest_HKCU");


    VAR_16 = FUNC_3(
        VAR_14,
        L"HKCR_Subkey",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_15,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_15), "\n");

    FUNC_11(VAR_15, &VAR_7, L"Apitest_HKCU\\HKCR_Subkey");

    FUNC_4(VAR_14, L"HKCR_Subkey");
    FUNC_10(VAR_15);
    FUNC_2(VAR_15);


    VAR_16 = FUNC_3(
        VAR_6,
        L"Software\\Classes\\Apitest_HKCU\\HKLM_Subkey",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_11,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_11), "\n");


    FUNC_11(VAR_14, &VAR_3, L"Apitest_HKCU");
    VAR_16 = FUNC_5(
        VAR_14,
        L"HKLM_Subkey",
        0,
        VAR_8,
        &VAR_15);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_15), "\n");
    FUNC_11(VAR_15, &VAR_7, L"Apitest_HKCU\\HKLM_Subkey");


    VAR_16 = FUNC_5(
        VAR_6,
        L"Software\\Classes\\Apitest_HKCU",
        0,
        VAR_8,
        &VAR_10);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_10), "\n");


    VAR_16 = FUNC_4(VAR_10, L"HKLM_Subkey");
    FUNC_7(VAR_16, VAR_2);
    FUNC_10(VAR_11);
    FUNC_10(VAR_15);


    VAR_16 = FUNC_3(
        VAR_5,
        L"Software\\Classes\\Apitest_HKCU\\HKCU_Subkey",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_13,
        ((void*)0));
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(!FUNC_1(VAR_13), "\n");


    FUNC_11(VAR_14, &VAR_3, L"Apitest_HKCU");
    VAR_16 = FUNC_3(
        VAR_14,
        L"HKCU_Subkey",
        0,
        ((void*)0),
        0,
        VAR_8,
        ((void*)0),
        &VAR_15,
        &VAR_17);
    FUNC_7(VAR_16, VAR_2);
    FUNC_6(FUNC_1(VAR_15), "\n");

    FUNC_11(VAR_15, &VAR_3, L"Apitest_HKCU\\HKCU_Subkey");
    FUNC_9(VAR_17, VAR_9);

    FUNC_4(VAR_14, L"HKCU_Subkey");
    FUNC_10(VAR_15);
    FUNC_2(VAR_15);
    FUNC_10(VAR_13);
    FUNC_2(VAR_13);

    FUNC_2(VAR_11);
    FUNC_2(VAR_15);


    FUNC_4(VAR_4, L"Apitest_HKCU");
    FUNC_10(VAR_12);
    FUNC_2(VAR_12);
    FUNC_10(VAR_14);
    FUNC_2(VAR_12);
    FUNC_12(VAR_10);


    FUNC_4(VAR_4, L"Apitest_HKCU");
    FUNC_10(VAR_10);
    FUNC_2(VAR_10);
}
