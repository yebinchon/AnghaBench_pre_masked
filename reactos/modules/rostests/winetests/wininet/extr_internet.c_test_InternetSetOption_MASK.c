
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulArg ;
typedef int ULONG ;
typedef int * HINTERNET ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int * FUNC_1 (int *,char*,char*,int *,int *,int *,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,char*,int,int *,int *,int ,int ,int ) ;
 int * FUNC_4 (int *,int ,int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ,void*,int*) ;
 scalar_t__ FUNC_6 (int *,int ,void*,int) ;
 scalar_t__ FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int,char*,...) ;

__attribute__((used)) static void FUNC_10(void)
{
    HINTERNET VAR_11, VAR_12, VAR_13;
    ULONG VAR_14;
    DWORD VAR_15;
    BOOL VAR_16;

    VAR_11 = FUNC_4(((void*)0), VAR_4, ((void*)0), ((void*)0), 0);
    FUNC_9(VAR_11 != 0, "InternetOpen failed: 0x%08x\n", FUNC_0());
    VAR_12 = FUNC_3(VAR_11, "www.winehq.org", 80, ((void*)0), ((void*)0), VAR_9, 0, 0);
    FUNC_9(VAR_12 != 0, "InternetConnect failed: 0x%08x\n", FUNC_0());
    VAR_13 = FUNC_1(VAR_12, "GET", "/", ((void*)0), ((void*)0), ((void*)0), 0, 0);
    FUNC_9(VAR_13 != 0, "HttpOpenRequest failed: 0x%08x\n", FUNC_0());


    FUNC_8(0xdeadbeef);
    VAR_16 = FUNC_7(VAR_11, VAR_6, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_2, "GetLastError should've "
            "given ERROR_INVALID_PARAMETER, gave: 0x%08x\n", FUNC_0());

    FUNC_8(0xdeadbeef);
    VAR_16 = FUNC_5(VAR_11, VAR_6, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_3, "InternetQueryOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_2, "GetLastError should've "
            "given ERROR_INVALID_PARAMETER, gave: 0x%08x\n", FUNC_0());


    FUNC_8(0xdeadbeef);
    VAR_15 = sizeof(VAR_14);
    VAR_16 = FUNC_5(((void*)0), VAR_5, (void*)&VAR_14, &VAR_15);
    FUNC_9(VAR_16 == VAR_3, "InternetQueryOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_1, "GetLastError() = %x\n", FUNC_0());

    FUNC_8(0xdeadbeef);
    VAR_14 = 11;
    VAR_16 = FUNC_6(((void*)0), VAR_5, (void*)&VAR_14, sizeof(ULONG));
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_1, "GetLastError() = %x\n", FUNC_0());

    FUNC_8(0xdeadbeef);
    VAR_14 = 11;
    VAR_16 = FUNC_6(VAR_13, VAR_5, (void*)&VAR_14, 20);
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_0, "GetLastError() = %d\n", FUNC_0());

    VAR_14 = 11;
    VAR_16 = FUNC_6(VAR_13, VAR_5, (void*)&VAR_14, sizeof(ULONG));
    FUNC_9(VAR_16 == VAR_10, "InternetSetOption should've succeeded\n");

    FUNC_8(0xdeadbeef);
    VAR_14 = 4;
    VAR_16 = FUNC_6(VAR_13, VAR_5, (void*)&VAR_14, sizeof(ULONG));
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_2, "GetLastError() = %x\n", FUNC_0());

    FUNC_8(0xdeadbeef);
    VAR_14 = 16;
    VAR_16 = FUNC_6(VAR_13, VAR_5, (void*)&VAR_14, sizeof(ULONG));
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_2, "GetLastError() = %x\n", FUNC_0());

    VAR_16 = FUNC_6(VAR_13, VAR_8, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_10, "InternetSetOption should've succeeded\n");

    VAR_16 = FUNC_6(VAR_12, VAR_8, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_10, "InternetSetOption should've succeeded\n");

    VAR_16 = FUNC_6(VAR_11, VAR_8, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_10, "InternetSetOption should've succeeded\n");

    VAR_16 = FUNC_6(VAR_11, VAR_7, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_10, "InternetSetOption should've succeeded\n");

    FUNC_8(0xdeadbeef);
    VAR_16 = FUNC_6(VAR_13, VAR_7, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_1, "GetLastError() = %u\n", FUNC_0());

    FUNC_8(0xdeadbeef);
    VAR_16 = FUNC_6(VAR_12, VAR_7, ((void*)0), 0);
    FUNC_9(VAR_16 == VAR_3, "InternetSetOption should've failed\n");
    FUNC_9(FUNC_0() == VAR_1, "GetLastError() = %u\n", FUNC_0());

    VAR_16 = FUNC_2(VAR_13);
    FUNC_9(VAR_16 == VAR_10, "InternetCloseHandle failed: 0x%08x\n", FUNC_0());
    VAR_16 = FUNC_2(VAR_12);
    FUNC_9(VAR_16 == VAR_10, "InternetCloseHandle failed: 0x%08x\n", FUNC_0());
    VAR_16 = FUNC_2(VAR_11);
    FUNC_9(VAR_16 == VAR_10, "InternetCloseHandle failed: 0x%08x\n", FUNC_0());
}
