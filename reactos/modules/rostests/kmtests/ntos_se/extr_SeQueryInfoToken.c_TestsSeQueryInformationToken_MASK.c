
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef size_t ULONG ;
struct TYPE_19__ {TYPE_10__* DefaultDacl; } ;
struct TYPE_18__ {size_t GroupCount; TYPE_1__* Groups; } ;
struct TYPE_13__ {int HighPart; int LowPart; } ;
struct TYPE_17__ {int GroupCount; int PrivilegeCount; int ImpersonationLevel; TYPE_2__ TokenId; } ;
struct TYPE_14__ {int Sid; } ;
struct TYPE_16__ {TYPE_3__ User; } ;
struct TYPE_15__ {int Owner; } ;
struct TYPE_12__ {int Sid; } ;
struct TYPE_11__ {scalar_t__ AclRevision; } ;
typedef TYPE_4__ TOKEN_OWNER ;
typedef int * PVOID ;
typedef TYPE_5__* PTOKEN_USER ;
typedef scalar_t__* PTOKEN_TYPE ;
typedef TYPE_6__* PTOKEN_STATISTICS ;
typedef TYPE_4__* PTOKEN_OWNER ;
typedef TYPE_8__* PTOKEN_GROUPS ;
typedef TYPE_9__* PTOKEN_DEFAULT_DACL ;
typedef int PSID ;
typedef TYPE_10__* PACL ;
typedef int * PACCESS_TOKEN ;
typedef scalar_t__ NTSTATUS ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int,char*,...) ;

void FUNC_4(PACCESS_TOKEN VAR_19)
{
    NTSTATUS VAR_20;
    PVOID VAR_21 = ((void*)0);
    PSID VAR_22;
    PTOKEN_OWNER VAR_23;
    PTOKEN_DEFAULT_DACL VAR_24;
    PTOKEN_GROUPS VAR_25;
    ULONG VAR_26;
    PACL VAR_27;
    PTOKEN_STATISTICS VAR_28;
    PTOKEN_TYPE VAR_29;
    PTOKEN_USER VAR_30;
    BOOLEAN VAR_31;
    ULONG VAR_32;





    FUNC_3(VAR_19 != ((void*)0), "Token is not captured. Testing SQIT interrupted\n\n");

    if (VAR_19 == ((void*)0)) return;

    VAR_20 = FUNC_2(VAR_19, VAR_12, &VAR_21);
    FUNC_3((VAR_20 == VAR_4), "SQIT with TokenOwner arg fails with status 0x%08X\n", VAR_20);
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenOwner arg. But Buffer == NULL\n");

        if (VAR_21)
        {
            VAR_23 = (TOKEN_OWNER *)VAR_21;
            VAR_22 = VAR_23->Owner;
            FUNC_3((FUNC_1(VAR_22) == VAR_5), "TokenOwner's SID is not a valid SID\n");
            FUNC_0(VAR_21);
        }
    }



    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_6, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "SQIT with TokenDefaultDacl fails with status 0x%08X\n", VAR_20);
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenDefaultDacl arg. But Buffer == NULL\n");
        if (VAR_21)
        {
            VAR_24 = (PTOKEN_DEFAULT_DACL)VAR_21;
            VAR_27 = VAR_24->DefaultDacl;
            FUNC_3(((VAR_27->AclRevision == VAR_0 || VAR_27->AclRevision == VAR_1) == VAR_5), "DACL is invalid\n");
            FUNC_0(VAR_21);
        }
    }



    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_7, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "SQIT with TokenGroups fails with status 0x%08X\n", VAR_20);
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenGroups arg. But Buffer == NULL\n");
        if (VAR_21)
        {
            VAR_25 = (PTOKEN_GROUPS)VAR_21;
            VAR_26 = VAR_25->GroupCount;
            VAR_31 = VAR_5;
            for (VAR_32 = 0; VAR_32 < VAR_26; VAR_32++)
            {
                VAR_22 = VAR_25->Groups[VAR_32].Sid;
                if (!FUNC_1(VAR_22))
                {
                    VAR_31 = VAR_2;
                    break;
                }
            }
            FUNC_3((VAR_31 == VAR_5), "TokenGroup's SIDs are not valid\n");
            FUNC_0(VAR_21);
        }
    }
    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_10, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "SQIT with TokenImpersonationLevel fails with status 0x%08X\n", VAR_20);
    if (VAR_21) FUNC_0(VAR_21);

    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_10, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "and again: SQIT with TokenImpersonationLevel fails with status 0x%08X\n", VAR_20);
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenImpersonationLevel arg. But Buffer == NULL\n");
    } else {
        FUNC_3(VAR_21 == ((void*)0), "Wrong. SQIT call failed. But Buffer != NULL\n");
    }
    if (VAR_21) FUNC_0(VAR_21);
    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_11, &VAR_21);
    FUNC_3(VAR_20 == VAR_3, "SQIT with TokenOrigin failed with Status 0x%08X; expected STATUS_INVALID_INFO_CLASS\n", VAR_20);
    FUNC_3(VAR_21 == ((void*)0), "Wrong. SQIT call failed. But Buffer != NULL\n");

    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_8, &VAR_21);
    FUNC_3(VAR_20 == VAR_3, "SQIT with TokenGroupsAndPrivileges failed with Status 0x%08X; expected STATUS_INVALID_INFO_CLASS\n", VAR_20);
    FUNC_3(VAR_21 == ((void*)0), "Wrong. SQIT call failed. But Buffer != NULL\n");

    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_14, &VAR_21);
    FUNC_3(VAR_20 == VAR_3, "SQIT with TokenRestrictedSids failed with Status 0x%08X; expected STATUS_INVALID_INFO_CLASS\n", VAR_20);
    FUNC_3(VAR_21 == ((void*)0), "Wrong. SQIT call failed. But Buffer != NULL\n");

    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_15, &VAR_21);
    FUNC_3(VAR_20 == VAR_3, "SQIT with TokenSandBoxInert failed with Status 0x%08X; expected STATUS_INVALID_INFO_CLASS\n", VAR_20);
    FUNC_3(VAR_21 == ((void*)0), "Wrong. SQIT call failed. But Buffer != NULL\n");



    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_16, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "SQIT with TokenStatistics fails with status 0x%08X\n", VAR_20);
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenStatistics arg. But Buffer == NULL\n");
        if (VAR_21)
        {
            VAR_28 = (PTOKEN_STATISTICS)VAR_21;

            FUNC_3(1, "print statistics:\n\tTokenID = %u_%d\n\tSecurityImperLevel = %d\n\tPrivCount = %d\n\tGroupCount = %d\n\n", VAR_28->TokenId.LowPart,
                VAR_28->TokenId.HighPart,
                VAR_28->ImpersonationLevel,
                VAR_28->PrivilegeCount,
                VAR_28->GroupCount
                );
            FUNC_0(VAR_21);
        }
    } else {
        FUNC_3(VAR_21 == ((void*)0), "Wrong. SQIT call failed. But Buffer != NULL\n");
    }



    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_17, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "SQIT with TokenType fails with status 0x%08X\n", VAR_20);
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenType arg. But Buffer == NULL\n");
        if (VAR_21)
        {
            VAR_29 = (PTOKEN_TYPE)VAR_21;
            FUNC_3((*VAR_29 == VAR_13 || *VAR_29 == VAR_9), "TokenType in not a primary nor impersonation. FAILED\n");
            FUNC_0(VAR_21);
        }
    }



    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_18, &VAR_21);
    FUNC_3(VAR_20 == VAR_4, "SQIT with TokenUser fails\n");
    if (VAR_20 == VAR_4)
    {
        FUNC_3(VAR_21 != ((void*)0), "Wrong. SQIT call was successful with TokenUser arg. But Buffer == NULL\n");
        if (VAR_21)
        {
            VAR_30 = (PTOKEN_USER)VAR_21;
            FUNC_3(FUNC_1(VAR_30->User.Sid), "TokenUser has an invalid Sid\n");
            FUNC_0(VAR_21);
        }
    }



    VAR_21 = ((void*)0);
    VAR_20 = FUNC_2(VAR_19, VAR_15, &VAR_21);
    FUNC_3(VAR_20 != VAR_4, "SQIT must fail with wrong TOKEN_INFORMATION_CLASS arg\n");
}
