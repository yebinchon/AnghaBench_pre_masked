
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int count; int member_0; } ;
typedef TYPE_2__ nfsacl41 ;
struct TYPE_18__ {int query; int * sec_desc; scalar_t__ sec_desc_len; } ;
struct TYPE_13__ {TYPE_6__ getacl; } ;
struct TYPE_15__ {TYPE_4__* state_ref; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
struct TYPE_16__ {int type; int file; int session; } ;
typedef TYPE_4__ nfs41_open_state ;
struct TYPE_17__ {char* owner; char* owner_group; TYPE_2__* acl; int member_0; } ;
typedef TYPE_5__ nfs41_file_info ;
typedef TYPE_6__ getacl_upcall_args ;
struct TYPE_19__ {int count; int* arr; int member_0; } ;
typedef TYPE_7__ bitmap4 ;
typedef int SECURITY_DESCRIPTOR ;
typedef int * PSID ;
typedef int * PACL ;
typedef char* LPSTR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,scalar_t__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_13 ;
 int FUNC_6 (TYPE_2__*,int ,int **,int ***) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ) ;
 int * FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__*,int **,char*) ;
 int FUNC_14 (int ,int *,TYPE_7__*,TYPE_5__*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(nfs41_upcall *VAR_14)
{
    int VAR_15 = VAR_4;
    getacl_upcall_args *VAR_16 = &VAR_14->args.getacl;
    nfs41_open_state *VAR_17 = VAR_14->state_ref;
    nfs41_file_info VAR_18 = { 0 };
    bitmap4 VAR_19 = { 0 };
    LPSTR VAR_20 = ((void*)0);
    SECURITY_DESCRIPTOR VAR_21;
    PACL VAR_22 = ((void*)0);
    PSID *VAR_23 = ((void*)0);
    PSID VAR_24 = ((void*)0), VAR_25 = ((void*)0);
    DWORD VAR_26;
    char VAR_27[VAR_10], VAR_28[VAR_10];
    nfsacl41 VAR_29 = { 0 };


    VAR_19.count = 2;
    VAR_19.arr[1] = VAR_7 | VAR_8;
    if (VAR_16->query & VAR_1) {
        VAR_18.acl = &VAR_29;
        VAR_19.arr[0] |= VAR_6;
    }
    VAR_18.owner = VAR_27;
    VAR_18.owner_group = VAR_28;
    VAR_15 = FUNC_14(VAR_17->session, &VAR_17->file, &VAR_19, &VAR_18);
    if (VAR_15) {
        FUNC_9("handle_getacl: nfs41_cached_getattr() failed with %d\n",
                VAR_15);
        goto out;
    }

    VAR_15 = FUNC_1(&VAR_21,
                                          VAR_12);
    if (!VAR_15) {
        VAR_15 = FUNC_0();
        FUNC_9("handle_getacl: InitializeSecurityDescriptor failed with %d\n",
                VAR_15);
        goto out;
    }





    if (VAR_16->query & VAR_11) {

        FUNC_7(VAR_18.owner, &VAR_20);
        FUNC_8(VAR_0, "handle_getacl: OWNER_SECURITY_INFORMATION: for user=%s "
                "domain=%s\n", VAR_18.owner, VAR_20?VAR_20:"<null>");
        VAR_26 = 0;
        VAR_15 = FUNC_13(&VAR_26, &VAR_24, VAR_18.owner);
        if (VAR_15)
            goto out;
        VAR_15 = FUNC_5(&VAR_21, VAR_24, VAR_13);
        if (!VAR_15) {
            VAR_15 = FUNC_0();
            FUNC_9("handle_getacl: SetSecurityDescriptorOwner failed with "
                    "%d\n", VAR_15);
            goto out;
        }
    }
    if (VAR_16->query & VAR_9) {
        FUNC_7(VAR_18.owner_group, &VAR_20);
        FUNC_8(VAR_0, "handle_getacl: GROUP_SECURITY_INFORMATION: for %s "
                "domain=%s\n", VAR_18.owner_group, VAR_20?VAR_20:"<null>");
        VAR_26 = 0;
        VAR_15 = FUNC_13(&VAR_26, &VAR_25, VAR_18.owner_group);
        if (VAR_15)
            goto out;
        VAR_15 = FUNC_4(&VAR_21, VAR_25, VAR_13);
        if (!VAR_15) {
            VAR_15 = FUNC_0();
            FUNC_9("handle_getacl: SetSecurityDescriptorGroup failed with "
                    "%d\n", VAR_15);
            goto out;
        }
    }
    if (VAR_16->query & VAR_1) {
        FUNC_8(VAR_0, "handle_getacl: DACL_SECURITY_INFORMATION\n");
        VAR_15 = FUNC_6(VAR_18.acl, VAR_17->type, &VAR_22, &VAR_23);
        if (VAR_15)
            goto out;
        VAR_15 = FUNC_3(&VAR_21, VAR_13, VAR_22, VAR_13);
        if (!VAR_15) {
            VAR_15 = FUNC_0();
            FUNC_9("handle_getacl: SetSecurityDescriptorDacl failed with "
                    "%d\n", VAR_15);
            goto out;
        }
    }

    VAR_16->sec_desc_len = 0;
    VAR_15 = FUNC_2(&VAR_21, VAR_16->sec_desc, &VAR_16->sec_desc_len);
    if (VAR_15) {
        VAR_15 = VAR_3;
        goto out;
    }
    VAR_15 = FUNC_0();
    if (VAR_15 != VAR_2) {
        FUNC_9("handle_getacl: MakeSelfRelativeSD failes with %d\n", VAR_15);
        goto out;
    }
    VAR_16->sec_desc = FUNC_12(VAR_16->sec_desc_len);
    if (VAR_16->sec_desc == ((void*)0)) {
        VAR_15 = FUNC_0();
        goto out;
    }
    VAR_15 = FUNC_2(&VAR_21, VAR_16->sec_desc, &VAR_16->sec_desc_len);
    if (!VAR_15) {
        VAR_15 = FUNC_0();
        FUNC_9("handle_getacl: MakeSelfRelativeSD failes with %d\n", VAR_15);
        FUNC_10(VAR_16->sec_desc);
        goto out;
    } else VAR_15 = VAR_5;

out:
    if (VAR_16->query & VAR_11) {
        if (VAR_24) FUNC_10(VAR_24);
    }
    if (VAR_16->query & VAR_9) {
        if (VAR_25) FUNC_10(VAR_25);
    }
    if (VAR_16->query & VAR_1) {
        if (VAR_23) FUNC_11(VAR_23, VAR_18.acl->count);
        FUNC_10(VAR_22);
        FUNC_15(VAR_18.acl);
    }
    return VAR_15;
}
