
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int member_0; } ;
struct TYPE_5__ {int ************ Sid; } ;
struct TYPE_6__ {TYPE_1__ User; } ;
typedef TYPE_2__ TOKEN_USER ;
typedef TYPE_3__ SID_IDENTIFIER_AUTHORITY ;
typedef int ******** PSID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ********,int ********) ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ********,int) ;
 int FUNC_8 (int ,int ,char*,int,int*) ;
 char* FUNC_9 (int ,int ,int) ;
 int FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (int ********,TYPE_3__*,int) ;
 int FUNC_12 (int ,int ,int *) ;
 int FUNC_13 (int ,int ,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_14 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ********) ;
 int FUNC_16 (int,char*,...) ;
 int FUNC_17 (int ********,int ********,int*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19(void)
{
    char *VAR_10, VAR_11[VAR_5], VAR_12[VAR_5];
    SID_IDENTIFIER_AUTHORITY VAR_13 = { VAR_6 };
    PSID VAR_14 = *(PSID *)&VAR_11;
    PSID VAR_15 = *(PSID *)&VAR_12;
    DWORD VAR_16;
    PSID VAR_17;
    HANDLE VAR_18;
    BOOL VAR_19 = VAR_8;
    int VAR_20;

    if (!&FUNC_17)
    {
        FUNC_18("GetWindowsAccountDomainSid not available\n");
        return;
    }

    if (!FUNC_13(FUNC_3(), VAR_7, VAR_8, &VAR_18))
    {
        if (FUNC_4() != VAR_3) VAR_19 = VAR_4;
        else if (!FUNC_12(FUNC_2(), VAR_7, &VAR_18)) VAR_19 = VAR_4;
    }
    if (!VAR_19)
    {
        FUNC_18("Failed to get current user token\n");
        return;
    }

    VAR_19 = FUNC_8(VAR_18, VAR_9, ((void*)0), 0, &VAR_16);
    FUNC_16(!VAR_19 && FUNC_4() == VAR_0,
       "GetTokenInformation(TokenUser) failed with error %d\n", FUNC_4());
    VAR_10 = FUNC_9(FUNC_5(), 0, VAR_16);
    VAR_19 = FUNC_8(VAR_18, VAR_9, VAR_10, VAR_16, &VAR_16);
    FUNC_16(VAR_19, "GetTokenInformation(TokenUser) failed with error %d\n", FUNC_4());
    FUNC_0(VAR_18);
    VAR_17 = ((TOKEN_USER *)VAR_10)->User.Sid;

    FUNC_14(0xdeadbeef);
    VAR_19 = FUNC_17(0, 0, 0);
    FUNC_16(!VAR_19, "GetWindowsAccountDomainSid succeeded\n");
    FUNC_16(FUNC_4() == VAR_2, "expected ERROR_INVALID_SID, got %d\n", FUNC_4());

    FUNC_14(0xdeadbeef);
    VAR_19 = FUNC_17(VAR_17, 0, 0);
    FUNC_16(!VAR_19, "GetWindowsAccountDomainSid succeeded\n");
    FUNC_16(FUNC_4() == VAR_1, "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());

    VAR_16 = VAR_5;
    FUNC_14(0xdeadbeef);
    VAR_19 = FUNC_17(VAR_17, 0, &VAR_16);
    FUNC_16(!VAR_19, "GetWindowsAccountDomainSid succeeded\n");
    FUNC_16(FUNC_4() == VAR_1, "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());
    FUNC_16(VAR_16 == FUNC_6(4), "expected size %d, got %d\n", FUNC_6(4), VAR_16);

    FUNC_14(0xdeadbeef);
    VAR_19 = FUNC_17(VAR_17, VAR_14, 0);
    FUNC_16(!VAR_19, "GetWindowsAccountDomainSid succeeded\n");
    FUNC_16(FUNC_4() == VAR_1, "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_4());

    VAR_16 = 1;
    FUNC_14(0xdeadbeef);
    VAR_19 = FUNC_17(VAR_17, VAR_14, &VAR_16);
    FUNC_16(!VAR_19, "GetWindowsAccountDomainSid succeeded\n");
    FUNC_16(FUNC_4() == VAR_0, "expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_4());
    FUNC_16(VAR_16 == FUNC_6(4), "expected size %d, got %d\n", FUNC_6(4), VAR_16);

    VAR_16 = VAR_5;
    VAR_19 = FUNC_17(VAR_17, VAR_14, &VAR_16);
    FUNC_16(VAR_19, "GetWindowsAccountDomainSid failed with error %d\n", FUNC_4());
    FUNC_16(VAR_16 == FUNC_6(4), "expected size %d, got %d\n", FUNC_6(4), VAR_16);
    FUNC_11(VAR_15, &VAR_13, 4);
    for (VAR_20 = 0; VAR_20 < 4; VAR_20++)
        *FUNC_7(VAR_15, VAR_20) = *FUNC_7(VAR_17, VAR_20);
    FUNC_16(FUNC_1(VAR_14, VAR_15), "unexpected domain sid %s != %s\n",
       FUNC_15(VAR_14), FUNC_15(VAR_15));

    FUNC_10(FUNC_5(), 0, VAR_10);
}
