
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IInternetZoneManager ;
typedef int IInternetSecurityManager ;
typedef scalar_t__ HRESULT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,scalar_t__,int *,int,int *,int,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int,scalar_t__,int *,int,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*,int *) ;
 scalar_t__ FUNC_6 (int ,char*,int *,int *,int *,scalar_t__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_11 ;
 int FUNC_9 () ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_13(IInternetSecurityManager *VAR_15, IInternetZoneManager *VAR_16, DWORD VAR_17)
{
    DWORD VAR_18, VAR_19, VAR_20, VAR_21;
    char VAR_22[10];
    HKEY VAR_23;
    HRESULT VAR_24;




    VAR_18 = FUNC_5(VAR_3,
            "Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings\\Zones\\3", &VAR_23);
    FUNC_10(VAR_18 == VAR_1, "Could not open zone key\n");
    if(VAR_18 != VAR_1)
        return;

    FUNC_12(VAR_22, "%X", VAR_17);
    VAR_19 = sizeof(DWORD);
    VAR_18 = FUNC_6(VAR_23, VAR_22, ((void*)0), ((void*)0), (BYTE*)&VAR_21, &VAR_19);
    FUNC_4(VAR_23);


    if(VAR_18 != VAR_1 || VAR_19 != sizeof(DWORD)) {
        VAR_18 = FUNC_5(VAR_4,
                "Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings\\Zones\\3", &VAR_23);
        FUNC_10(VAR_18 == VAR_1, "Could not open zone key\n");

        VAR_19 = sizeof(DWORD);
        VAR_18 = FUNC_6(VAR_23, VAR_22, ((void*)0), ((void*)0), (BYTE*)&VAR_21, &VAR_19);
        FUNC_4(VAR_23);
    }

    if(VAR_18 != VAR_1 || VAR_19 != sizeof(DWORD)) {
        VAR_20 = 0xdeadbeef;
        VAR_24 = FUNC_2(VAR_15, VAR_12, VAR_17, (BYTE*)&VAR_20,
                sizeof(WCHAR), ((void*)0), 0, 0, 0);
        FUNC_10(VAR_24 == VAR_2 || FUNC_8(VAR_24 == FUNC_1(VAR_0)),
            "(0x%x) got 0x%x (expected E_FAIL)\n", VAR_17, VAR_24);
        FUNC_10(VAR_20 == 0xdeadbeef, "(%x) policy=%x\n", VAR_17, VAR_20);

        VAR_20 = 0xdeadbeef;
        VAR_24 = FUNC_3(VAR_16, 3, VAR_17, (BYTE*)&VAR_20,
                sizeof(DWORD), VAR_10);
        FUNC_10(VAR_24 == VAR_2 || FUNC_8(VAR_24 == FUNC_1(VAR_0)),
            "(0x%x) got 0x%x (expected E_FAIL)\n", VAR_17, VAR_24);
        FUNC_10(VAR_20 == 0xdeadbeef, "(%x) policy=%x\n", VAR_17, VAR_20);
        return;
    }

    VAR_20 = 0xdeadbeef;
    VAR_24 = FUNC_3(VAR_16, 3, VAR_17, (BYTE*)&VAR_20,
            sizeof(DWORD), VAR_10);
    FUNC_10(VAR_24 == VAR_7, "GetZoneActionPolicy failed: %08x\n", VAR_24);
    FUNC_10(VAR_20 == VAR_21, "(%x) policy=%x, expected %x\n", VAR_17, VAR_20, VAR_21);

    if(VAR_20 != VAR_9) {
        if(VAR_13 || ! FUNC_9()) {
            BOOL VAR_25 = !VAR_11;

            VAR_20 = 0xdeadbeef;
            VAR_24 = FUNC_2(VAR_15, VAR_12, VAR_17, (BYTE*)&VAR_20,
                    sizeof(WCHAR), ((void*)0), 0, 0, 0);
            if(VAR_21 == VAR_8)
                FUNC_10(VAR_24 == VAR_6, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_17, VAR_24);
            else
                FUNC_10(VAR_24 == VAR_7, "ProcessUrlAction(%x) failed: %08x\n", VAR_17, VAR_24);
            FUNC_10(VAR_20 == 0xdeadbeef, "(%x) policy=%x\n", VAR_17, VAR_20);

            VAR_20 = 0xdeadbeef;
            VAR_24 = FUNC_2(VAR_15, VAR_12, VAR_17, (BYTE*)&VAR_20,
                    2, ((void*)0), 0, 0, 0);
            if(VAR_21 == VAR_8)
                FUNC_10(VAR_24 == VAR_6, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_17, VAR_24);
            else
                FUNC_10(VAR_24 == VAR_7, "ProcessUrlAction(%x) failed: %08x\n", VAR_17, VAR_24);
            FUNC_10(VAR_20 == 0xdeadbeef, "(%x) policy=%x\n", VAR_17, VAR_20);

            VAR_20 = 0xdeadbeef;
            VAR_24 = FUNC_2(VAR_15, VAR_12, VAR_17, (BYTE*)&VAR_20,
                    sizeof(DWORD), ((void*)0), 0, 0, 0);
            if(VAR_21 == VAR_8)
                FUNC_10(VAR_24 == VAR_6, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_17, VAR_24);
            else
                FUNC_10(VAR_24 == VAR_7, "ProcessUrlAction(%x) failed: %08x\n", VAR_17, VAR_24);
            FUNC_10(VAR_20 == VAR_21, "(%x) policy=%x\n", VAR_17, VAR_20);

            VAR_20 = 0xdeadbeef;
            VAR_24 = FUNC_2(VAR_15, VAR_12, VAR_17, (BYTE*)&VAR_20,
                    sizeof(WCHAR), (BYTE*)0xdeadbeef, 16, 0, 0);
            if(VAR_21 == VAR_8)
                FUNC_10(VAR_24 == VAR_6, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_17, VAR_24);
            else
                FUNC_10(VAR_24 == VAR_7, "ProcessUrlAction(%x) failed: %08x\n", VAR_17, VAR_24);
            FUNC_10(VAR_20 == 0xdeadbeef, "(%x) policy=%x\n", VAR_17, VAR_20);

            VAR_20 = 0xdeadbeef;
            if(VAR_25)
                FUNC_7(VAR_5);
            VAR_24 = FUNC_2(VAR_15, VAR_14, VAR_17, (BYTE*)&VAR_20,
                    sizeof(DWORD), ((void*)0), 0, 0, 0);
            if(VAR_25)
                FUNC_0(VAR_5);
            if(VAR_21 == VAR_8)
                FUNC_10(VAR_24 == VAR_6, "ProcessUrlAction(%x) failed: %08x, expected S_FALSE\n", VAR_17, VAR_24);
            else
                FUNC_10(VAR_24 == VAR_7, "ProcessUrlAction(%x) failed: %08x\n", VAR_17, VAR_24);
            FUNC_10(VAR_20 == VAR_21, "(%x) policy=%x\n", VAR_17, VAR_20);
        }else {
            FUNC_11("IE running in Enhanced Security Configuration\n");
        }
    }
}
