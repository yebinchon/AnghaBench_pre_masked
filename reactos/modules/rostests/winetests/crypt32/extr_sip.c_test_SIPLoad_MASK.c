
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* pCryptSIPGetSignedDataMsg ;
struct TYPE_7__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
struct TYPE_8__ {int cbSize; void* pfGet; void* pfRemove; void* pfVerify; void* pfCreate; void* pfPut; } ;
typedef TYPE_2__ SIP_DISPATCH_INFO ;
typedef int HMODULE ;
typedef TYPE_3__ GUID ;
typedef int BOOL ;


 int FUNC_0 (TYPE_3__*,int,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    BOOL VAR_7;
    GUID VAR_8;
    static GUID VAR_9 = { 0xdeadbeef, 0xdead, 0xbeef, { 0xde,0xad,0xbe,0xef,0xde,0xad,0xbe,0xef }};
    static GUID VAR_10 = { 0xC689AABA, 0x8E78, 0x11D0, { 0x8C,0x47,0x00,0xC0,0x4F,0xC2,0x95,0xEE }};
    static GUID VAR_11 = { 0xDE351A43, 0x8E59, 0x11D0, { 0x8C,0x47,0x00,0xC0,0x4F,0xC2,0x95,0xEE }};

    static GUID VAR_12 = { 0x000C10F1, 0x0000, 0x0000, { 0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46 }};
    SIP_DISPATCH_INFO VAR_13;
    HMODULE VAR_14;


    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_0(((void*)0), 0, ((void*)0));
    FUNC_6 ( !VAR_7, "Expected CryptSIPLoad to fail\n");
    FUNC_6 ( FUNC_1() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got 0x%08x\n", FUNC_1());


    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_0(&VAR_8, 0, ((void*)0));
    FUNC_6 ( !VAR_7, "Expected CryptSIPLoad to fail\n");
    FUNC_6 ( FUNC_1() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got 0x%08x\n", FUNC_1());


    FUNC_4(0xdeadbeef);
    FUNC_5(&VAR_13, 0, sizeof(SIP_DISPATCH_INFO));
    VAR_13.cbSize = sizeof(SIP_DISPATCH_INFO);
    VAR_13.pfGet = (pCryptSIPGetSignedDataMsg)0xdeadbeef;
    VAR_7 = FUNC_0(&VAR_9, 0, &VAR_13);
    FUNC_6 ( !VAR_7, "Expected CryptSIPLoad to fail\n");
    FUNC_6 ( FUNC_1() == VAR_1,
        "Expected TRUST_E_SUBJECT_FORM_UNKNOWN, got 0x%08x\n", FUNC_1());
    FUNC_6( VAR_13.pfGet == (pCryptSIPGetSignedDataMsg)0xdeadbeef, "Expected no change to the function pointer\n");

    VAR_14 = FUNC_2("crypt32.dll");
    VAR_3 = (void*)FUNC_3(VAR_14, "CryptSIPGetSignedDataMsg");
    VAR_4 = (void*)FUNC_3(VAR_14, "CryptSIPPutSignedDataMsg");
    VAR_2 = (void*)FUNC_3(VAR_14, "CryptSIPCreateIndirectData");
    VAR_6 = (void*)FUNC_3(VAR_14, "CryptSIPVerifyIndirectData");
    VAR_5 = (void*)FUNC_3(VAR_14, "CryptSIPRemoveSignedDataMsg");


    FUNC_4(0xdeadbeef);
    FUNC_5(&VAR_13, 0, sizeof(SIP_DISPATCH_INFO));
    VAR_13.cbSize = sizeof(SIP_DISPATCH_INFO);
    VAR_13.pfGet = (pCryptSIPGetSignedDataMsg)0xdeadbeef;
    VAR_7 = FUNC_0(&VAR_10, 0, &VAR_13);
    FUNC_6 ( VAR_7, "Expected CryptSIPLoad to succeed\n");





    FUNC_6( VAR_13.pfGet != (pCryptSIPGetSignedDataMsg)0xdeadbeef, "Expected a function pointer to be loaded.\n");






    if (VAR_3 && VAR_4 && VAR_2 &&
        VAR_6 && VAR_5)
        FUNC_6 (VAR_13.pfGet == VAR_3 &&
            VAR_13.pfPut == VAR_4 &&
            VAR_13.pfCreate == VAR_2 &&
            VAR_13.pfVerify == VAR_6 &&
            VAR_13.pfRemove == VAR_5,
            "Expected function addresses to be from crypt32\n");
    else
        FUNC_7("Couldn't load function pointers\n");


    FUNC_4(0xdeadbeef);
    FUNC_5(&VAR_13, 0, sizeof(SIP_DISPATCH_INFO));
    VAR_13.cbSize = sizeof(SIP_DISPATCH_INFO);
    VAR_13.pfGet = (pCryptSIPGetSignedDataMsg)0xdeadbeef;
    VAR_7 = FUNC_0(&VAR_11, 0, &VAR_13);
    FUNC_6 ( VAR_7, "Expected CryptSIPLoad to succeed\n");




    FUNC_6( VAR_13.pfGet != (pCryptSIPGetSignedDataMsg)0xdeadbeef, "Expected a function pointer to be loaded.\n");


    FUNC_4(0xdeadbeef);
    FUNC_5(&VAR_13, 0, sizeof(SIP_DISPATCH_INFO));
    VAR_13.cbSize = sizeof(SIP_DISPATCH_INFO);
    VAR_13.pfGet = (pCryptSIPGetSignedDataMsg)0xdeadbeef;
    VAR_7 = FUNC_0(&VAR_12, 0, &VAR_13);
    if (VAR_7)
    {





        FUNC_6( VAR_13.pfGet != (pCryptSIPGetSignedDataMsg)0xdeadbeef, "Expected a function pointer to be loaded.\n");




        if (VAR_3 && VAR_4 && VAR_2 &&
            VAR_6 && VAR_5)
            FUNC_6 (VAR_13.pfGet == VAR_3 &&
                VAR_13.pfPut == VAR_4 &&
                VAR_13.pfCreate == VAR_2 &&
                VAR_13.pfVerify == VAR_6 &&
                VAR_13.pfRemove == VAR_5,
                "Expected function addresses to be from crypt32\n");
        else
            FUNC_7("Couldn't load function pointers\n");
    }


    FUNC_4(0xdeadbeef);
    FUNC_5(&VAR_13, 0, sizeof(SIP_DISPATCH_INFO));
    VAR_13.cbSize = sizeof(SIP_DISPATCH_INFO);
    VAR_13.pfGet = (pCryptSIPGetSignedDataMsg)0xdeadbeef;
    VAR_7 = FUNC_0(&VAR_10, 1, &VAR_13);
    FUNC_6 ( !VAR_7, "Expected CryptSIPLoad to fail\n");
    FUNC_6 ( FUNC_1() == VAR_0,
        "Expected ERROR_INVALID_PARAMETER, got 0x%08x\n", FUNC_1());
    FUNC_6( VAR_13.pfGet == (pCryptSIPGetSignedDataMsg)0xdeadbeef, "Expected no change to the function pointer\n");
}
