
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_17__ ;
typedef struct TYPE_22__ TYPE_16__ ;
typedef struct TYPE_21__ TYPE_15__ ;


typedef size_t ULONG ;
struct TYPE_28__ {TYPE_7__* DefaultDacl; } ;
struct TYPE_23__ {TYPE_7__* PrimaryGroup; } ;
struct TYPE_27__ {TYPE_7__* Sid; } ;
struct TYPE_22__ {TYPE_4__ User; } ;
struct TYPE_24__ {int HighPart; int LowPart; } ;
struct TYPE_30__ {size_t GroupCount; TYPE_5__ DefaultDacl; TYPE_17__ PrimaryGroup; struct TYPE_30__* Groups; struct TYPE_30__* Sid; TYPE_16__ User; TYPE_1__ ExpirationTime; } ;
struct TYPE_25__ {int HighPart; int LowPart; } ;
struct TYPE_26__ {int UserId; int PrimaryGroupId; TYPE_2__ AccountExpires; } ;
struct TYPE_29__ {TYPE_3__ All; } ;
struct TYPE_21__ {int (* FreeLsaHeap ) (TYPE_7__*) ;TYPE_7__* (* AllocateLsaHeap ) (int) ;} ;
typedef int PSID ;
typedef TYPE_6__* PSAMPR_USER_INFO_BUFFER ;
typedef scalar_t__ PRPC_SID ;
typedef TYPE_7__* PLSA_TOKEN_INFORMATION_V1 ;
typedef int NTSTATUS ;
typedef int LSA_TOKEN_INFORMATION_V1 ;
typedef int BOOL ;


 int FUNC_0 (TYPE_7__**,int ,int ,int ) ;
 int FUNC_1 (TYPE_17__*,int ,int ) ;
 int FUNC_2 (TYPE_16__*,int ,int ) ;
 TYPE_15__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,...) ;
 TYPE_7__* FUNC_5 (int) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (TYPE_7__*) ;
 int FUNC_9 (TYPE_7__*) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*) ;

__attribute__((used)) static
NTSTATUS
FUNC_12(PLSA_TOKEN_INFORMATION_V1 *VAR_3,
                            PRPC_SID VAR_4,
                            PSAMPR_USER_INFO_BUFFER VAR_5,
                            BOOL VAR_6)
{
    PLSA_TOKEN_INFORMATION_V1 VAR_7 = ((void*)0);
    ULONG VAR_8;
    NTSTATUS VAR_9 = VAR_2;

    VAR_7 = VAR_0.AllocateLsaHeap(sizeof(LSA_TOKEN_INFORMATION_V1));
    if (VAR_7 == ((void*)0))
    {
        FUNC_4("Failed to allocate the local buffer!\n");
        VAR_9 = VAR_1;
        goto done;
    }

    VAR_7->ExpirationTime.LowPart = VAR_5->All.AccountExpires.LowPart;
    VAR_7->ExpirationTime.HighPart = VAR_5->All.AccountExpires.HighPart;

    VAR_9 = FUNC_2(&VAR_7->User,
                            (PSID)VAR_4,
                            VAR_5->All.UserId);
    if (!FUNC_3(VAR_9))
    {
        FUNC_4("BuildTokenUser() failed (Status 0x%08lx)\n", VAR_9);
        goto done;
    }

    VAR_9 = FUNC_1(&VAR_7->PrimaryGroup,
                                    (PSID)VAR_4,
                                    VAR_5->All.PrimaryGroupId);
    if (!FUNC_3(VAR_9))
    {
        FUNC_4("BuildTokenPrimaryGroup() failed (Status 0x%08lx)\n", VAR_9);
        goto done;
    }

    VAR_9 = FUNC_0(&VAR_7->Groups,
                              (PSID)VAR_4,
                              VAR_5->All.UserId,
                              VAR_6);
    if (!FUNC_3(VAR_9))
    {
        FUNC_4("BuildTokenGroups() failed (Status 0x%08lx)\n", VAR_9);
        goto done;
    }

    *VAR_3 = VAR_7;

done:
    if (!FUNC_3(VAR_9))
    {
        if (VAR_7 != ((void*)0))
        {
            if (VAR_7->User.User.Sid != ((void*)0))
                VAR_0.FreeLsaHeap(VAR_7->User.User.Sid);

            if (VAR_7->Groups != ((void*)0))
            {
                for (VAR_8 = 0; VAR_8 < VAR_7->Groups->GroupCount; VAR_8++)
                {
                    if (VAR_7->Groups->Groups[VAR_8].Sid != ((void*)0))
                        VAR_0.FreeLsaHeap(VAR_7->Groups->Groups[VAR_8].Sid);
                }

                VAR_0.FreeLsaHeap(VAR_7->Groups);
            }

            if (VAR_7->PrimaryGroup.PrimaryGroup != ((void*)0))
                VAR_0.FreeLsaHeap(VAR_7->PrimaryGroup.PrimaryGroup);

            if (VAR_7->DefaultDacl.DefaultDacl != ((void*)0))
                VAR_0.FreeLsaHeap(VAR_7->DefaultDacl.DefaultDacl);

            VAR_0.FreeLsaHeap(VAR_7);
        }
    }

    return VAR_9;
}
