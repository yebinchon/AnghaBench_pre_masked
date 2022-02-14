
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
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_2(void)
{
    VAR_11 = FUNC_1("secur32.dll");
    if(!VAR_11)
        VAR_11 = FUNC_1("security.dll");
    if(VAR_11)
    {
        VAR_7 = (PVOID)FUNC_0(VAR_11, "InitSecurityInterfaceA");
        VAR_4 = (PVOID)FUNC_0(VAR_11, "EnumerateSecurityPackagesA");
        VAR_5 = (PVOID)FUNC_0(VAR_11, "FreeContextBuffer");
        VAR_10 = (PVOID)FUNC_0(VAR_11, "QuerySecurityPackageInfoA");
        VAR_1 = (PVOID)FUNC_0(VAR_11, "AcquireCredentialsHandleA");
        VAR_8 = (PVOID)FUNC_0(VAR_11, "InitializeSecurityContextA");
        VAR_2 = (PVOID)FUNC_0(VAR_11, "CompleteAuthToken");
        VAR_0 = (PVOID)FUNC_0(VAR_11, "AcceptSecurityContext");
        VAR_6 = (PVOID)FUNC_0(VAR_11, "FreeCredentialsHandle");
        VAR_3 = (PVOID)FUNC_0(VAR_11, "DeleteSecurityContext");
        VAR_9 = (PVOID)FUNC_0(VAR_11, "QueryContextAttributesA");
    }
}
