
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {int count; TYPE_1__* aces; } ;
typedef TYPE_2__ nfsacl41 ;
struct TYPE_4__ {scalar_t__ acetype; int acemask; int who; } ;
typedef int PSID ;
typedef int * PACL ;
typedef char* LPSTR ;
typedef int DWORD ;
typedef int BOOLEAN ;
typedef int ACL ;
typedef int ACCESS_MASK ;
typedef int ACCESS_ALLOWED_ACE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int ,int *,int*,int *) ;
 int FUNC_5 (int ,char**) ;
 int FUNC_6 (int ,char*,int ,char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,size_t) ;
 void* FUNC_10 (int) ;
 int FUNC_11 (int*,int *,int ) ;

__attribute__((used)) static int FUNC_12(nfsacl41 *VAR_7, int VAR_8,
                                  PACL *VAR_9, PSID **VAR_10)
{
    int VAR_11 = VAR_5, VAR_12 = 0;
    uint32_t VAR_13;
    DWORD VAR_14;
    PSID *VAR_15;
    PACL VAR_16;
    LPSTR VAR_17 = ((void*)0);
    BOOLEAN VAR_18;

    VAR_15 = FUNC_10(VAR_7->count * sizeof(PSID));
    if (VAR_15 == ((void*)0)) {
        VAR_11 = FUNC_2();
        goto out;
    }
    for (VAR_13 = 0; VAR_13 < VAR_7->count; VAR_13++) {
        FUNC_5(VAR_7->aces[VAR_13].who, &VAR_17);
        FUNC_6(VAR_2, "handle_getacl: for user=%s domain=%s\n",
                VAR_7->aces[VAR_13].who, VAR_17?VAR_17:"<null>");
        VAR_11 = FUNC_4(VAR_7->aces[VAR_13].who, &VAR_15[VAR_13],
                                             &VAR_14, &VAR_18);
        if (VAR_11) {
            FUNC_9(VAR_15, VAR_13);
            goto out;
        }
        if (!VAR_18) {
            VAR_11 = FUNC_11(&VAR_14, &VAR_15[VAR_13], VAR_7->aces[VAR_13].who);
            if (VAR_11) {
                FUNC_9(VAR_15, VAR_13);
                goto out;
            }
        }
        VAR_12 += VAR_14 - sizeof(DWORD);
    }
    VAR_12 += sizeof(ACL) + (sizeof(ACCESS_ALLOWED_ACE)*VAR_7->count);
    VAR_12 = (VAR_12 + sizeof(DWORD) - 1) & 0xfffffffc;
    VAR_16 = FUNC_10(VAR_12);
    if (VAR_16 == ((void*)0))
        goto out_free_sids;

    if (FUNC_3(VAR_16, VAR_12, VAR_3)) {
        ACCESS_MASK VAR_19;
        for (VAR_13 = 0; VAR_13 < VAR_7->count; VAR_13++) {

            VAR_19 = VAR_7->aces[VAR_13].acemask;
            FUNC_6(VAR_2, "access mask %x ace type %s\n", VAR_19,
                VAR_7->aces[VAR_13].acetype?"DENIED ACE":"ALLOWED ACE");
            if (VAR_7->aces[VAR_13].acetype == VAR_0) {
                VAR_11 = FUNC_0(VAR_16, VAR_3, VAR_19, VAR_15[VAR_13]);
                if (!VAR_11) {
                    FUNC_7("convert_nfs4acl_2_dacl: AddAccessAllowedAce failed "
                            "with %d\n", VAR_11);
                    goto out_free_dacl;
                }
                else VAR_11 = VAR_6;
            } else if (VAR_7->aces[VAR_13].acetype == VAR_1) {
                VAR_11 = FUNC_1(VAR_16, VAR_3, VAR_19, VAR_15[VAR_13]);
                if (!VAR_11) {
                    FUNC_7("convert_nfs4acl_2_dacl: AddAccessDeniedAce failed "
                            "with %d\n", VAR_11);
                    goto out_free_dacl;
                }
                else VAR_11 = VAR_6;
            } else {
                FUNC_7("convert_nfs4acl_2_dacl: unknown acetype %d\n",
                        VAR_7->aces[VAR_13].acetype);
                VAR_11 = VAR_4;
                FUNC_8(VAR_16);
                FUNC_9(VAR_15, VAR_7->count);
                goto out;
            }
        }
    } else {
        FUNC_7("convert_nfs4acl_2_dacl: InitializeAcl failed with %d\n", VAR_11);
        goto out_free_dacl;
    }
    VAR_11 = VAR_6;
    *VAR_10 = VAR_15;
    *VAR_9 = VAR_16;
out:
    return VAR_11;
out_free_dacl:
    FUNC_8(VAR_16);
out_free_sids:
    FUNC_9(VAR_15, VAR_7->count);
    VAR_11 = FUNC_2();
    goto out;
}
