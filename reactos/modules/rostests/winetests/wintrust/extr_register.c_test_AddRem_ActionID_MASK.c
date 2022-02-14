
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_10__ {int cbStruct; void* sCleanupProvider; void* sTestPolicyProvider; void* sFinalPolicyProvider; void* sCertificatePolicyProvider; void* sCertificateProvider; void* sSignatureProvider; void* sObjectProvider; void* sInitProvider; } ;
struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef TYPE_2__ GUID ;
typedef void* CRYPT_TRUST_REG_ENTRY ;
typedef TYPE_3__ CRYPT_REGISTER_ACTIONID ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    static WCHAR VAR_2[] = {'d','e','a','d','b','e','e','f','.','d','l','l',0 };
    static WCHAR VAR_3[] = {'d','u','m','m','y','f','u','n','c','t','i','o','n',0 };
    GUID VAR_4 = { 0xdeadbeef, 0xdead, 0xbeef, { 0xde,0xad,0xbe,0xef,0xde,0xad,0xbe,0xef }};
    CRYPT_REGISTER_ACTIONID VAR_5;
    CRYPT_TRUST_REG_ENTRY VAR_6 = { 0, ((void*)0), ((void*)0) };
    CRYPT_TRUST_REG_ENTRY VAR_7 = { sizeof(CRYPT_TRUST_REG_ENTRY), VAR_2, VAR_3 };
    BOOL VAR_8;

    if (!&FUNC_4 || !&FUNC_5)
    {
        FUNC_6("WintrustAddActionID and/or WintrustRemoveActionID are not available\n");
        return;
    }


    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_4(((void*)0), 0, ((void*)0));
    FUNC_3 (!VAR_8, "Expected WintrustAddActionID to fail.\n");
    FUNC_3 (FUNC_0() == VAR_1 ||
        FUNC_0() == 0xdeadbeef ,
        "Expected ERROR_INVALID_PARAMETER(W2K3) or 0xdeadbeef(Win98/NT4/W2K), got %u.\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_4(&VAR_4, 0, ((void*)0));
    FUNC_3 (!VAR_8, "Expected WintrustAddActionID to fail.\n");
    FUNC_3 (FUNC_0() == VAR_1 ||
        FUNC_0() == 0xdeadbeef ,
        "Expected ERROR_INVALID_PARAMETER(W2K3) or 0xdeadbeef(Win98/NT4/W2K), got %u.\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    FUNC_2(&VAR_5, 0, sizeof(CRYPT_REGISTER_ACTIONID));
    VAR_8 = FUNC_4(&VAR_4, 0, &VAR_5);
    FUNC_3 (!VAR_8, "Expected WintrustAddActionID to fail.\n");
    FUNC_3 (FUNC_0() == VAR_1 ||
        FUNC_0() == 0xdeadbeef ,
        "Expected ERROR_INVALID_PARAMETER(W2K3) or 0xdeadbeef(Win98/NT4/W2K), got %u.\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    FUNC_2(&VAR_5, 0, sizeof(CRYPT_REGISTER_ACTIONID));
    VAR_5.cbStruct = sizeof(CRYPT_REGISTER_ACTIONID);
    VAR_8 = FUNC_4(&VAR_4, 0, &VAR_5);
    FUNC_3 (VAR_8, "Expected WintrustAddActionID to succeed.\n");
    FUNC_3 (FUNC_0() == VAR_1,
        "Expected ERROR_INVALID_PARAMETER, got %u.\n", FUNC_0());




    FUNC_2(&VAR_5, 0, sizeof(CRYPT_REGISTER_ACTIONID));
    VAR_5.cbStruct = sizeof(CRYPT_REGISTER_ACTIONID);
    VAR_5.sInitProvider = VAR_7;
    VAR_5.sObjectProvider = VAR_7;
    VAR_5.sSignatureProvider = VAR_6;
    VAR_5.sCertificateProvider = VAR_7;
    VAR_5.sCertificatePolicyProvider = VAR_7;
    VAR_5.sFinalPolicyProvider = VAR_7;
    VAR_5.sTestPolicyProvider = VAR_7;
    VAR_5.sCleanupProvider = VAR_7;
    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_4(&VAR_4, 0, &VAR_5);
    FUNC_3 (VAR_8, "Expected WintrustAddActionID to succeed.\n");
    FUNC_3 (FUNC_0() == VAR_1 ||
        FUNC_0() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER or ERROR_ACCESS_DENIED, got %u.\n",
        FUNC_0());




    FUNC_2(&VAR_5, 0, sizeof(CRYPT_REGISTER_ACTIONID));
    VAR_5.cbStruct = sizeof(CRYPT_REGISTER_ACTIONID);
    VAR_5.sInitProvider = VAR_7;
    VAR_5.sObjectProvider = VAR_7;
    VAR_5.sSignatureProvider = VAR_7;
    VAR_5.sCertificateProvider = VAR_7;
    VAR_5.sCertificatePolicyProvider = VAR_7;
    VAR_5.sFinalPolicyProvider = VAR_7;
    VAR_5.sTestPolicyProvider = VAR_7;
    VAR_5.sCleanupProvider = VAR_7;
    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_4(&VAR_4, 0, &VAR_5);
    FUNC_3 (VAR_8, "Expected WintrustAddActionID to succeed.\n");
    FUNC_3 (FUNC_0() == 0xdeadbeef || FUNC_0() == VAR_0,
        "Expected 0xdeadbeef or ERROR_ACCESS_DENIED, got %u.\n",
        FUNC_0());

    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_5(&VAR_4);
    FUNC_3 ( VAR_8, "WintrustRemoveActionID failed : %d\n", FUNC_0());
    FUNC_3 ( FUNC_0() == 0xdeadbeef, "Last error should not have been changed: %u\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_5(((void*)0));
    FUNC_3 (VAR_8, "Expected WintrustRemoveActionID to succeed.\n");
    FUNC_3 (FUNC_0() == VAR_1,
        "Expected ERROR_INVALID_PARAMETER, got %u.\n", FUNC_0());


    FUNC_1(0xdeadbeef);
    VAR_8 = FUNC_5(&VAR_4);
    FUNC_3 (VAR_8, "Expected WintrustRemoveActionID to succeed.\n");
    FUNC_3 (FUNC_0() == 0xdeadbeef,
        "Expected 0xdeadbeef, got %u.\n", FUNC_0());
}
