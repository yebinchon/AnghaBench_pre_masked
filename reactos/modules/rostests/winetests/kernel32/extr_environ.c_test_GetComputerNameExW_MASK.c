
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nameW ;
typedef int * LPWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int ,int *,scalar_t__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    DWORD VAR_5;
    BOOL VAR_6;
    LPWSTR VAR_7;
    DWORD VAR_8;

    if (!&FUNC_5)
    {
        FUNC_6("GetComputerNameExW function not implemented\n");
        return;
    }

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_0, (LPWSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(!VAR_6 && VAR_8 == VAR_4, "GetComputerNameExW should have failed with ERROR_MORE_DATA instead of %d\n", VAR_8);
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_0, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExW(ComputerNameDnsDomain) failed with error %d\n", FUNC_0());
    FUNC_3(FUNC_1(), 0, VAR_7);

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_1, (LPWSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(!VAR_6 && VAR_8 == VAR_4, "GetComputerNameExW should have failed with ERROR_MORE_DATA instead of %d\n", VAR_8);
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_1, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExW(ComputerNameDnsFullyQualified) failed with error %d\n", FUNC_0());
    FUNC_3(FUNC_1(), 0, VAR_7);

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_2, (LPWSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(!VAR_6 && VAR_8 == VAR_4, "GetComputerNameExW should have failed with ERROR_MORE_DATA instead of %d\n", VAR_8);
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_2, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExW(ComputerNameDnsHostname) failed with error %d\n", FUNC_0());
    FUNC_3(FUNC_1(), 0, VAR_7);

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_3, (LPWSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(!VAR_6 && VAR_8 == VAR_4, "GetComputerNameExW should have failed with ERROR_MORE_DATA instead of %d\n", VAR_8);
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_3, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExW(ComputerNameNetBIOS) failed with error %d\n", FUNC_0());
    FUNC_3(FUNC_1(), 0, VAR_7);
}
