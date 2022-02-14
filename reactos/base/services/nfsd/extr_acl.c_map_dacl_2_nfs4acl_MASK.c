
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int count; TYPE_6__* aces; scalar_t__ flag; } ;
typedef TYPE_1__ nfsacl41 ;
typedef int nfsace4 ;
struct TYPE_12__ {int who; int acemask; scalar_t__ aceflag; void* acetype; } ;
struct TYPE_11__ {int AceType; int AceFlags; int AceSize; } ;
struct TYPE_10__ {int AceCount; int AclSize; } ;
typedef int PSID ;
typedef scalar_t__ PBYTE ;
typedef TYPE_2__* PACL ;
typedef TYPE_3__* PACE_HEADER ;
typedef int * PACCESS_MASK ;
typedef int ACE_HEADER ;
typedef int ACCESS_MASK ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int,TYPE_3__**) ;
 int FUNC_1 () ;
 int VAR_10 ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int ,scalar_t__*) ;
 int FUNC_7 (int ,int,int *) ;
 int FUNC_8 (scalar_t__,int ,int ,int ,char*) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int,unsigned char*,unsigned char*,int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(PACL VAR_11, PSID VAR_12, PSID VAR_13, nfsacl41 *VAR_14,
                                int VAR_15, char *VAR_16)
{
    int VAR_17;
    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_7, "this is a NULL dacl: all access to an object\n");
        VAR_14->count = 1;
        VAR_14->aces = FUNC_2(1, sizeof(nfsace4));
        if (VAR_14->aces == ((void*)0)) {
            VAR_17 = FUNC_1();
            goto out;
        }
        VAR_14->flag = 0;
        FUNC_9(VAR_14->aces->who, VAR_6, FUNC_11(VAR_6)+1);
        VAR_14->aces->acetype = VAR_2;
        if (VAR_15 == VAR_10)
            VAR_14->aces->acemask = VAR_4;
        else
            VAR_14->aces->acemask = VAR_5;
        VAR_14->aces->aceflag = 0;
    } else {
        int VAR_18;
        PACE_HEADER VAR_19;
        PBYTE VAR_20;

        FUNC_3(VAR_7, "NON-NULL dacl with %d ACEs\n", VAR_11->AceCount);
        FUNC_10(3, (unsigned char *)"ACL\n",
                            (unsigned char *)VAR_11, VAR_11->AclSize);
        VAR_14->count = VAR_11->AceCount;
        VAR_14->aces = FUNC_2(VAR_14->count, sizeof(nfsace4));
        if (VAR_14->aces == ((void*)0)) {
            VAR_17 = FUNC_1();
            goto out;
        }
        VAR_14->flag = 0;
        for (VAR_18 = 0; VAR_18 < VAR_11->AceCount; VAR_18++) {
            VAR_17 = FUNC_0(VAR_11, VAR_18, &VAR_19);
            if (!VAR_17) {
                VAR_17 = FUNC_1();
                FUNC_4("map_dacl_2_nfs4acl: GetAce failed with %d\n", VAR_17);
                goto out_free;
            }
            VAR_20 = (PBYTE)VAR_19;
            FUNC_10(3, (unsigned char *)"ACE\n",
                                    (unsigned char *)VAR_19, VAR_19->AceSize);
            FUNC_3(VAR_7, "ACE TYPE: %x\n", VAR_19->AceType);
            if (VAR_19->AceType == VAR_0)
                VAR_14->aces[VAR_18].acetype = VAR_2;
            else if (VAR_19->AceType == VAR_1)
                VAR_14->aces[VAR_18].acetype = VAR_3;
            else {
                FUNC_4("map_dacl_2_nfs4acl: unsupported ACE type %d\n",
                    VAR_19->AceType);
                VAR_17 = VAR_8;
                goto out_free;
            }

            FUNC_6(VAR_19->AceFlags, &VAR_14->aces[VAR_18].aceflag);
            FUNC_7(*(PACCESS_MASK)(VAR_19 + 1), VAR_15,
                        &VAR_14->aces[VAR_18].acemask);

            VAR_20 += sizeof(ACCESS_MASK) + sizeof(ACE_HEADER);
            VAR_17 = FUNC_8(VAR_20, VAR_12, VAR_13, VAR_14->aces[VAR_18].who,
                                     VAR_16);
            if (VAR_17)
                goto out_free;
        }
    }
    VAR_17 = VAR_9;
out:
    return VAR_17;
out_free:
    FUNC_5(VAR_14->aces);
    goto out;
}
