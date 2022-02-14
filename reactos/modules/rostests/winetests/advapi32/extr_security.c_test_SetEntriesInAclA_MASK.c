
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* ptstrName; void* TrusteeForm; void* MultipleTrusteeOperation; int * pMultipleTrustee; int TrusteeType; } ;
struct TYPE_8__ {TYPE_1__ Trustee; int grfAccessMode; int grfInheritance; int grfAccessPermissions; } ;
struct TYPE_7__ {int member_0; } ;
typedef TYPE_2__ SID_IDENTIFIER_AUTHORITY ;
typedef void* PSID ;
typedef int * PACL ;
typedef void* LPSTR ;
typedef TYPE_3__ EXPLICIT_ACCESSA ;
typedef int DWORD ;
typedef char CHAR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*) ;
 int FUNC_1 (TYPE_2__*,int,int ,int ,int ,int ,int ,int ,int ,int ,void**) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int * FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int *,int,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int,TYPE_3__*,int *,int **) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void FUNC_16(void)
{
    DWORD VAR_24;
    PSID VAR_25 = ((void*)0), VAR_26 = ((void*)0);
    PACL VAR_27 = ((void*)0), VAR_28;
    SID_IDENTIFIER_AUTHORITY VAR_29 = { VAR_16 };
    SID_IDENTIFIER_AUTHORITY VAR_30 = { VAR_14 };
    EXPLICIT_ACCESSA VAR_31;
    static const CHAR VAR_32[] = {'E','v','e','r','y','o','n','e',0};
    static const CHAR VAR_33[] = { 'C','U','R','R','E','N','T','_','U','S','E','R','\0'};

    if (!&FUNC_13)
    {
        FUNC_15("SetEntriesInAclA is not available\n");
        return;
    }

    VAR_28 = (PACL)0xdeadbeef;
    VAR_24 = FUNC_13(0, ((void*)0), ((void*)0), &VAR_28);
    if(VAR_24 == VAR_2)
    {
        FUNC_15("SetEntriesInAclA is not implemented\n");
        return;
    }
    FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
    FUNC_12(VAR_28 == ((void*)0) ||
        FUNC_11(VAR_28 != ((void*)0)),
        "NewAcl=%p, expected NULL\n", VAR_28);
    FUNC_9(VAR_28);

    VAR_27 = FUNC_6(FUNC_4(), 0, 256);
    VAR_24 = FUNC_8(VAR_27, 256, VAR_0);
    if(!VAR_24 && FUNC_3() == VAR_2)
    {
        FUNC_15("ACLs not implemented - skipping tests\n");
        FUNC_7(FUNC_4(), 0, VAR_27);
        return;
    }
    FUNC_12(VAR_24, "InitializeAcl failed with error %d\n", FUNC_3());

    VAR_24 = FUNC_1( &VAR_29, 1, VAR_15, 0, 0, 0, 0, 0, 0, 0, &VAR_25);
    FUNC_12(VAR_24, "AllocateAndInitializeSid failed with error %d\n", FUNC_3());

    VAR_24 = FUNC_1( &VAR_30, 2, VAR_13,
        VAR_1, 0, 0, 0, 0, 0, 0, &VAR_26);
    FUNC_12(VAR_24, "AllocateAndInitializeSid failed with error %d\n", FUNC_3());

    VAR_24 = FUNC_0(VAR_27, VAR_0, VAR_7, VAR_26);
    FUNC_12(VAR_24, "AddAccessAllowedAce failed with error %d\n", FUNC_3());

    VAR_31.grfAccessPermissions = VAR_8;
    VAR_31.grfAccessMode = VAR_6;
    VAR_31.grfInheritance = VAR_10;
    VAR_31.Trustee.TrusteeType = VAR_23;
    VAR_31.Trustee.TrusteeForm = VAR_21;
    VAR_31.Trustee.ptstrName = VAR_25;
    VAR_31.Trustee.MultipleTrusteeOperation = VAR_11;
    VAR_31.Trustee.pMultipleTrustee = ((void*)0);
    VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
    FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
    FUNC_12(VAR_28 != ((void*)0), "returned acl was NULL\n");
    FUNC_9(VAR_28);

    VAR_31.Trustee.TrusteeType = VAR_22;
    VAR_31.Trustee.pMultipleTrustee = ((void*)0);
    VAR_31.Trustee.MultipleTrusteeOperation = VAR_11;
    VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
    FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
    FUNC_12(VAR_28 != ((void*)0), "returned acl was NULL\n");
    FUNC_9(VAR_28);

    if (FUNC_10(FUNC_5()) != VAR_9)
    {
        FUNC_14("Non-English locale (test with hardcoded 'Everyone')\n");
    }
    else
    {
        VAR_31.Trustee.TrusteeForm = VAR_20;
        VAR_31.Trustee.ptstrName = (LPSTR)VAR_32;
        VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
        FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
        FUNC_12(VAR_28 != ((void*)0), "returned acl was NULL\n");
        FUNC_9(VAR_28);

        VAR_31.Trustee.TrusteeForm = VAR_18;
        VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
        FUNC_12(VAR_24 == VAR_3 ||
            FUNC_11(VAR_24 == VAR_4),
            "SetEntriesInAclA failed: %u\n", VAR_24);
        FUNC_12(VAR_28 == ((void*)0) ||
            FUNC_11(VAR_28 != ((void*)0)),
            "returned acl wasn't NULL: %p\n", VAR_28);

        VAR_31.Trustee.TrusteeForm = VAR_20;
        VAR_31.Trustee.MultipleTrusteeOperation = VAR_19;
        VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
        FUNC_12(VAR_24 == VAR_3 ||
            FUNC_11(VAR_24 == VAR_4),
            "SetEntriesInAclA failed: %u\n", VAR_24);
        FUNC_12(VAR_28 == ((void*)0) ||
            FUNC_11(VAR_28 != ((void*)0)),
            "returned acl wasn't NULL: %p\n", VAR_28);

        VAR_31.Trustee.MultipleTrusteeOperation = VAR_11;
        VAR_31.grfAccessMode = VAR_17;
        VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
        FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
        FUNC_12(VAR_28 != ((void*)0), "returned acl was NULL\n");
        FUNC_9(VAR_28);
    }

    VAR_31.Trustee.TrusteeForm = VAR_20;
    VAR_31.Trustee.ptstrName = (LPSTR)VAR_33;
    VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
    FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
    FUNC_12(VAR_28 != ((void*)0), "returned acl was NULL\n");
    FUNC_9(VAR_28);

    VAR_31.grfAccessMode = VAR_12;
    VAR_31.Trustee.TrusteeForm = VAR_21;
    VAR_31.Trustee.ptstrName = VAR_26;
    VAR_24 = FUNC_13(1, &VAR_31, VAR_27, &VAR_28);
    FUNC_12(VAR_24 == VAR_5, "SetEntriesInAclA failed: %u\n", VAR_24);
    FUNC_12(VAR_28 != ((void*)0), "returned acl was NULL\n");
    FUNC_9(VAR_28);

    FUNC_2(VAR_26);
    FUNC_2(VAR_25);
    FUNC_7(FUNC_4(), 0, VAR_27);
}
