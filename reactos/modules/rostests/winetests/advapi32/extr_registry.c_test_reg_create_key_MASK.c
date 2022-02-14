
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptstrName; int TrusteeType; int TrusteeForm; int MultipleTrusteeOperation; int * pMultipleTrustee; } ;
struct TYPE_8__ {int grfAccessPermissions; TYPE_1__ Trustee; int grfInheritance; int grfAccessMode; } ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_2__ SID_IDENTIFIER_AUTHORITY ;
typedef int SECURITY_DESCRIPTOR ;
typedef scalar_t__ PSID ;
typedef int PACL ;
typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef TYPE_3__ EXPLICIT_ACCESSA ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int ,int ,int ,int ,int ,int ,int ,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_7 ;
 int * FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char*,int ,int *,int ,int,int *,int **,int *) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *,int ,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_13 (int,TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_14 (int *,scalar_t__,int ,int ) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_15 (int) ;
 int * VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_16 (int,char*,scalar_t__,...) ;
 int VAR_28 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static void FUNC_19(void)
{
    LONG VAR_29;
    HKEY VAR_30, VAR_31;
    HKEY VAR_32 = ((void*)0);
    HKEY VAR_33 = ((void*)0);
    DWORD VAR_34;
    BOOL VAR_35;
    SID_IDENTIFIER_AUTHORITY VAR_36 = {VAR_19};
    PSID VAR_37;
    EXPLICIT_ACCESSA VAR_38;
    PACL VAR_39;
    SECURITY_DESCRIPTOR *VAR_40;

    VAR_29 = FUNC_10(VAR_26, "Subkey1", 0, ((void*)0), 0, VAR_9, ((void*)0), &VAR_30, ((void*)0));
    FUNC_16(!VAR_29, "RegCreateKeyExA failed with error %d\n", VAR_29);


    VAR_29 = FUNC_10(VAR_30, "Subkey2", 0, ((void*)0), 0, VAR_11, ((void*)0), &VAR_31, ((void*)0));
    FUNC_16(!VAR_29, "RegCreateKeyExA failed with error %d\n", VAR_29);


    FUNC_11(VAR_31, "");
    FUNC_11(VAR_30, "");
    FUNC_9(VAR_31);
    FUNC_9(VAR_30);


    VAR_29 = FUNC_10(VAR_26, "Volatile", 0, ((void*)0), VAR_15, VAR_8, ((void*)0), &VAR_30, ((void*)0));
    FUNC_16(!VAR_29, "RegCreateKeyExA failed with error %d\n", VAR_29);
    VAR_29 = FUNC_10(VAR_30, "Subkey2", 0, ((void*)0), 0, VAR_8, ((void*)0), &VAR_31, ((void*)0));
    FUNC_16(VAR_29 == VAR_3, "RegCreateKeyExA failed with error %d\n", VAR_29);
    if (!VAR_29) FUNC_9( VAR_31 );
    VAR_29 = FUNC_10(VAR_30, "Subkey2", 0, ((void*)0), VAR_15, VAR_8, ((void*)0), &VAR_31, ((void*)0));
    FUNC_16(!VAR_29, "RegCreateKeyExA failed with error %d\n", VAR_29);
    FUNC_9(VAR_31);

    VAR_29 = FUNC_10(VAR_30, "Subkey2", 0, ((void*)0), 0, VAR_8, ((void*)0), &VAR_31, ((void*)0));
    FUNC_16(!VAR_29, "RegCreateKeyExA failed with error %d\n", VAR_29);


    FUNC_11(VAR_31, "");
    FUNC_11(VAR_30, "");
    FUNC_9(VAR_31);
    FUNC_9(VAR_30);


    VAR_29 = FUNC_10(VAR_26, "\\Subkey3", 0, ((void*)0), 0, VAR_9, ((void*)0), &VAR_30, ((void*)0));
    if (!(FUNC_4() & 0x80000000))
        FUNC_16(VAR_29 == VAR_2, "expected ERROR_BAD_PATHNAME, got %d\n", VAR_29);
    else {
        FUNC_16(!VAR_29, "RegCreateKeyExA failed with error %d\n", VAR_29);
        FUNC_11(VAR_30, "");
        FUNC_9(VAR_30);
    }


    VAR_29 = FUNC_10(VAR_26, "Subkey4\\\\", 0, ((void*)0), 0, VAR_9, ((void*)0), &VAR_30, ((void*)0));
    FUNC_16(VAR_29 == VAR_4, "RegCreateKeyExA failed with error %d\n", VAR_29);
    FUNC_11(VAR_30, "");
    FUNC_9(VAR_30);


    VAR_29 = FUNC_10(VAR_7, "System\\CurrentControlSet\\Control\\Video\\Wine",
                          0, ((void*)0), 0, VAR_9, ((void*)0), &VAR_30, ((void*)0));
    FUNC_16(VAR_29 == VAR_4, "RegCreateKeyExA failed with error %d\n", VAR_29);
    FUNC_11(VAR_30, "");
    FUNC_9(VAR_30);


    VAR_30 = ((void*)0);
    VAR_29 = FUNC_10(VAR_7, "Software", 0, ((void*)0), 0, VAR_10|VAR_12, ((void*)0), &VAR_30, ((void*)0));
    FUNC_16((VAR_29 == VAR_4 && VAR_30 != ((void*)0)) || FUNC_15(VAR_29 == VAR_1 ),
        "RegOpenKeyEx with KEY_WOW64_32KEY failed (err=%u)\n", VAR_29);
    FUNC_9(VAR_30);

    VAR_30 = ((void*)0);
    VAR_29 = FUNC_10(VAR_7, "Software", 0, ((void*)0), 0, VAR_10|VAR_13, ((void*)0), &VAR_30, ((void*)0));
    FUNC_16((VAR_29 == VAR_4 && VAR_30 != ((void*)0)) || FUNC_15(VAR_29 == VAR_1 ),
        "RegOpenKeyEx with KEY_WOW64_64KEY failed (err=%u)\n", VAR_29);
    FUNC_9(VAR_30);





    if (!VAR_28)
    {
        FUNC_18("WOW64 flags are not recognized\n");
        return;
    }

    VAR_29 = FUNC_10(VAR_7, "Software\\Wine", 0, ((void*)0), 0,
                          VAR_12 | VAR_8, ((void*)0), &VAR_33, ((void*)0));
    if (VAR_27)
        FUNC_16(VAR_29 == VAR_1 && VAR_33 == ((void*)0),
           "RegCreateKeyEx with KEY_WOW64_32KEY failed (err=%d)\n", VAR_29);
    else
        FUNC_16(VAR_29 == VAR_4 && VAR_33 != ((void*)0),
           "RegCreateKeyEx with KEY_WOW64_32KEY failed (err=%d)\n", VAR_29);

    VAR_29 = FUNC_10(VAR_7, "Software\\Wine", 0, ((void*)0), 0,
                          VAR_13 | VAR_8, ((void*)0), &VAR_32, ((void*)0));
    if (VAR_27)
        FUNC_16(VAR_29 == VAR_1 && VAR_32 == ((void*)0),
           "RegCreateKeyEx with KEY_WOW64_64KEY failed (err=%d)\n", VAR_29);
    else
        FUNC_16(VAR_29 == VAR_4 && VAR_32 != ((void*)0),
           "RegCreateKeyEx with KEY_WOW64_64KEY failed (err=%d)\n", VAR_29);

    VAR_35 = FUNC_0(&VAR_36, 1, VAR_18,
                                    0, 0, 0, 0, 0, 0, 0, &VAR_37);
    FUNC_16(VAR_35 == VAR_23,
       "Expected AllocateAndInitializeSid to return TRUE, got %d, last error %u\n", VAR_35, FUNC_2());

    VAR_38.grfAccessPermissions = VAR_6 | VAR_21;
    VAR_38.grfAccessMode = VAR_20;
    VAR_38.grfInheritance = VAR_22;
    VAR_38.Trustee.pMultipleTrustee = ((void*)0);
    VAR_38.Trustee.MultipleTrusteeOperation = VAR_14;
    VAR_38.Trustee.TrusteeForm = VAR_24;
    VAR_38.Trustee.TrusteeType = VAR_25;
    VAR_38.Trustee.ptstrName = (char *)VAR_37;

    VAR_34 = FUNC_13(1, &VAR_38, ((void*)0), &VAR_39);
    FUNC_16(VAR_34 == VAR_4,
       "Expected SetEntriesInAclA to return ERROR_SUCCESS, got %u, last error %u\n", VAR_34, FUNC_2());

    VAR_40 = FUNC_5(FUNC_3(), 0, VAR_16);
    VAR_35 = FUNC_7(VAR_40, VAR_17);
    FUNC_16(VAR_35 == VAR_23,
       "Expected InitializeSecurityDescriptor to return TRUE, got %d, last error %u\n", VAR_35, FUNC_2());

    VAR_35 = FUNC_14(VAR_40, VAR_23, VAR_39, VAR_5);
    FUNC_16(VAR_35 == VAR_23,
       "Expected SetSecurityDescriptorDacl to return TRUE, got %d, last error %u\n", VAR_35, FUNC_2());

    if (VAR_27)
    {
        FUNC_17("not enough privileges to modify HKLM\n");
    }
    else
    {
        VAR_29 = FUNC_12(VAR_32, VAR_0, VAR_40);
        FUNC_16(VAR_29 == VAR_4,
           "Expected RegSetKeySecurity to return success, got error %u\n", VAR_29);

        VAR_29 = FUNC_12(VAR_33, VAR_0, VAR_40);
        FUNC_16(VAR_29 == VAR_4,
           "Expected RegSetKeySecurity to return success, got error %u\n", VAR_29);

        VAR_30 = ((void*)0);
        VAR_29 = FUNC_10(VAR_7, "Software\\Wine", 0, ((void*)0), 0,
                              VAR_13 | VAR_10, ((void*)0), &VAR_30, ((void*)0));
        FUNC_16(VAR_29 == VAR_4 && VAR_30 != ((void*)0),
           "RegOpenKeyEx with KEY_WOW64_64KEY failed (err=%u)\n", VAR_29);
        FUNC_9(VAR_30);

        VAR_30 = ((void*)0);
        VAR_29 = FUNC_10(VAR_7, "Software\\Wine", 0, ((void*)0), 0,
                              VAR_12 | VAR_10, ((void*)0), &VAR_30, ((void*)0));
        FUNC_16(VAR_29 == VAR_4 && VAR_30 != ((void*)0),
           "RegOpenKeyEx with KEY_WOW64_32KEY failed (err=%u)\n", VAR_29);
        FUNC_9(VAR_30);
    }

    FUNC_6(FUNC_3(), 0, VAR_40);
    FUNC_8(VAR_39);
    FUNC_1(VAR_37);
    FUNC_11(VAR_32, "");
    FUNC_9(VAR_32);
    FUNC_11(VAR_33, "");
    FUNC_9(VAR_33);
}
