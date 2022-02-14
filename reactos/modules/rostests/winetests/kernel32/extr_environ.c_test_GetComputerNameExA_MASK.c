
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int * LPSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ,int *,int*) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    DWORD VAR_5;
    BOOL VAR_6;
    LPSTR VAR_7;
    DWORD VAR_8;

    static const int VAR_9 = 32767;

    if (!&FUNC_5)
    {
        FUNC_7("GetComputerNameExA function not implemented\n");
        return;
    }

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_0, (LPSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(VAR_6 == 0, "Expected 0, got %d\n", VAR_6);
    FUNC_4(VAR_8 == VAR_4, "Expected ERROR_MORE_DATA, got %d\n", VAR_8);


    if (VAR_5 == 0)
    {
        FUNC_7("Win2k doesn't set the size\n");
        VAR_5 = VAR_9;
    }
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_0, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExA(ComputerNameDnsDomain) failed with error %d\n", FUNC_0());
    FUNC_6("domain name is \"%s\"\n", VAR_7);
    FUNC_3(FUNC_1(), 0, VAR_7);

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_1, (LPSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(VAR_6 == 0, "Expected 0, got %d\n", VAR_6);
    FUNC_4(VAR_8 == VAR_4, "Expected ERROR_MORE_DATA, got %d\n", VAR_8);


    if (VAR_5 == 0)
        VAR_5 = VAR_9;
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_1, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExA(ComputerNameDnsFullyQualified) failed with error %d\n", FUNC_0());
    FUNC_6("fully qualified hostname is \"%s\"\n", VAR_7);
    FUNC_3(FUNC_1(), 0, VAR_7);

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_2, (LPSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(VAR_6 == 0, "Expected 0, got %d\n", VAR_6);
    FUNC_4(VAR_8 == VAR_4, "Expected ERROR_MORE_DATA, got %d\n", VAR_8);


    if (VAR_5 == 0)
        VAR_5 = VAR_9;
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_2, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExA(ComputerNameDnsHostname) failed with error %d\n", FUNC_0());
    FUNC_6("hostname is \"%s\"\n", VAR_7);
    FUNC_3(FUNC_1(), 0, VAR_7);

    VAR_5 = 0;
    VAR_6 = FUNC_5(VAR_3, (LPSTR)0xdeadbeef, &VAR_5);
    VAR_8 = FUNC_0();
    FUNC_4(VAR_6 == 0, "Expected 0, got %d\n", VAR_6);
    FUNC_4(VAR_8 == VAR_4, "Expected ERROR_MORE_DATA, got %d\n", VAR_8);


    if (VAR_5 == 0)
        VAR_5 = VAR_9;
    VAR_7 = FUNC_2(FUNC_1(), 0, VAR_5 * sizeof(VAR_7[0]));
    FUNC_4(VAR_7 != ((void*)0), "HeapAlloc failed with error %d\n", FUNC_0());
    VAR_6 = FUNC_5(VAR_3, VAR_7, &VAR_5);
    FUNC_4(VAR_6, "GetComputerNameExA(ComputerNameNetBIOS) failed with error %d\n", FUNC_0());
    FUNC_6("NetBIOS name is \"%s\"\n", VAR_7);
    FUNC_3(FUNC_1(), 0, VAR_7);
}
