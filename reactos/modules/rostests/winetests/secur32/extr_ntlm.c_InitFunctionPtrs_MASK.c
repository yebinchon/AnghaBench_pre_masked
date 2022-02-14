
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* PVOID ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_2(void)
{
    VAR_16 = FUNC_1("secur32.dll");
    if(!VAR_16)
        VAR_16 = FUNC_1("security.dll");
    if(VAR_16)
    {
        VAR_10 = (PVOID)FUNC_0(VAR_16, "InitSecurityInterfaceA");
        VAR_7 = (PVOID)FUNC_0(VAR_16, "FreeContextBuffer");
        VAR_14 = (PVOID)FUNC_0(VAR_16, "QuerySecurityPackageInfoA");
        VAR_1 = (PVOID)FUNC_0(VAR_16, "AcquireCredentialsHandleA");
        VAR_2 = (void*)FUNC_0(VAR_16, "AcquireCredentialsHandleW");
        VAR_11 = (PVOID)FUNC_0(VAR_16, "InitializeSecurityContextA");
        VAR_3 = (PVOID)FUNC_0(VAR_16, "CompleteAuthToken");
        VAR_0 = (PVOID)FUNC_0(VAR_16, "AcceptSecurityContext");
        VAR_8 = (PVOID)FUNC_0(VAR_16, "FreeCredentialsHandle");
        VAR_5 = (PVOID)FUNC_0(VAR_16, "DeleteSecurityContext");
        VAR_13 = (PVOID)FUNC_0(VAR_16, "QueryContextAttributesA");
        VAR_12 = (PVOID)FUNC_0(VAR_16, "MakeSignature");
        VAR_15 = (PVOID)FUNC_0(VAR_16, "VerifySignature");
        VAR_6 = (PVOID)FUNC_0(VAR_16, "EncryptMessage");
        VAR_4 = (PVOID)FUNC_0(VAR_16, "DecryptMessage");
        VAR_9 = (PVOID)FUNC_0(VAR_16, "GetUserNameExA");
    }
}
