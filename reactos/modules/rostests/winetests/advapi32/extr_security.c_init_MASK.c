
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HMODULE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 void* VAR_33 ;
 void* VAR_34 ;
 void* VAR_35 ;
 void* VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
    HMODULE VAR_41;

    VAR_41 = FUNC_0("ntdll.dll");
    VAR_29 = (void *)FUNC_1( VAR_41, "NtQueryObject" );
    VAR_27 = (void *)FUNC_1( VAR_41, "NtAccessCheck" );
    VAR_30 = (void *)FUNC_1(VAR_41, "NtSetSecurityObject");
    VAR_28 = (void *)FUNC_1(VAR_41, "NtCreateFile");
    VAR_32 = (void *)FUNC_1(VAR_41, "RtlDosPathNameToNtPathName_U");
    VAR_31 = (void *)FUNC_1(VAR_41, "RtlAnsiStringToUnicodeString");
    VAR_34 = (void *)FUNC_1(VAR_41, "RtlInitAnsiString");
    VAR_33 = (void *)FUNC_1(VAR_41, "RtlFreeUnicodeString");

    VAR_0 = FUNC_0("advapi32.dll");
    VAR_3 = (void *)FUNC_1(VAR_0, "AddAccessAllowedAceEx");
    VAR_4 = (void *)FUNC_1(VAR_0, "AddAccessDeniedAceEx");
    VAR_5 = (void *)FUNC_1(VAR_0, "AddAuditAccessAceEx");
    VAR_6 = (void *)FUNC_1(VAR_0, "AddMandatoryAce");
    VAR_7 = (void *)FUNC_1(VAR_0, "CheckTokenMembership");
    VAR_9 =
        (void *)FUNC_1(VAR_0, "ConvertStringSecurityDescriptorToSecurityDescriptorA" );
    VAR_10 =
        (void *)FUNC_1(VAR_0, "ConvertStringSecurityDescriptorToSecurityDescriptorW" );
    VAR_8 =
        (void *)FUNC_1(VAR_0, "ConvertSecurityDescriptorToStringSecurityDescriptorA" );
    VAR_18 = (void *)FUNC_1(VAR_0, "GetFileSecurityA" );
    VAR_37 = (void *)FUNC_1(VAR_0, "SetFileSecurityA" );
    VAR_13 = (void *)FUNC_1( VAR_0, "CreateWellKnownSid" );
    VAR_19 = (void *)FUNC_1(VAR_0, "GetNamedSecurityInfoA");
    VAR_38 = (void *)FUNC_1(VAR_0, "SetNamedSecurityInfoA");
    VAR_22 = (void *)FUNC_1(VAR_0, "GetSidSubAuthority");
    VAR_23 = (void *)FUNC_1(VAR_0, "GetSidSubAuthorityCount");
    VAR_25 = (void *)FUNC_1(VAR_0, "IsValidSid");
    VAR_26 = (void *)FUNC_1(VAR_0, "MakeSelfRelativeSD");
    VAR_36 = (void *)FUNC_1(VAR_0, "SetEntriesInAclW");
    VAR_35 = (void *)FUNC_1(VAR_0, "SetEntriesInAclA");
    VAR_39 = (void *)FUNC_1(VAR_0, "SetSecurityDescriptorControl");
    VAR_20 = (void *)FUNC_1(VAR_0, "GetSecurityInfo");
    VAR_40 = (void *)FUNC_1(VAR_0, "SetSecurityInfo");
    VAR_12 = (void *)FUNC_1(VAR_0, "CreateRestrictedToken");
    VAR_11 = (void *)FUNC_1(VAR_0, "ConvertStringSidToSidA");
    VAR_16 = (void *)FUNC_1(VAR_0, "GetAclInformation");
    VAR_15 = (void *)FUNC_1(VAR_0, "GetAce");
    VAR_24 = (void *)FUNC_1(VAR_0, "GetWindowsAccountDomainSid");
    VAR_21 = (void *)FUNC_1(VAR_0, "GetSidIdentifierAuthority");
    VAR_14 = (void *)FUNC_1(VAR_0, "DuplicateTokenEx");
    VAR_17 = (void *)FUNC_1(VAR_0, "GetExplicitEntriesFromAclW");

    VAR_1 = FUNC_2( &VAR_2 );
}
