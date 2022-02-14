
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int stateid_arg ;
struct TYPE_14__ {int query; int ctime; int sec_desc; } ;
typedef TYPE_3__ setacl_upcall_args ;
struct TYPE_15__ {int aces; int member_0; } ;
typedef TYPE_4__ nfsacl41 ;
struct TYPE_12__ {TYPE_3__ setacl; } ;
struct TYPE_16__ {TYPE_6__* state_ref; TYPE_1__ args; } ;
typedef TYPE_5__ nfs41_upcall ;
struct TYPE_17__ {int file; int session; int type; } ;
typedef TYPE_6__ nfs41_open_state ;
struct TYPE_13__ {int count; int * arr; } ;
struct TYPE_18__ {char* owner; char* owner_group; int change; TYPE_2__ attrmask; TYPE_4__* acl; int member_0; } ;
typedef TYPE_7__ nfs41_file_info ;
typedef int * PSID ;
typedef int PACL ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *,int *,int *) ;
 int FUNC_2 (int ,int **,int *) ;
 int FUNC_3 (int ,int **,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int FUNC_7 (int ,int *,int *,TYPE_4__*,int ,int ) ;
 int FUNC_8 (int *,int *,int *,char*,int ) ;
 int FUNC_9 (int ,int *,int ,int ) ;
 int FUNC_10 (TYPE_6__*,int *) ;
 int FUNC_11 (int ,int *,int *,TYPE_7__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int,int) ;

__attribute__((used)) static int FUNC_14(nfs41_upcall *VAR_12)
{
    int VAR_13 = VAR_2;
    setacl_upcall_args *VAR_14 = &VAR_12->args.setacl;
    nfs41_open_state *VAR_15 = VAR_12->state_ref;
    nfs41_file_info VAR_16 = { 0 };
    stateid_arg VAR_17;
    nfsacl41 VAR_18 = { 0 };
    PSID VAR_19 = ((void*)0), VAR_20 = ((void*)0);
    BOOL VAR_21, VAR_22;

    if (VAR_14->query & VAR_10) {
        char VAR_23[VAR_8];
        FUNC_4(VAR_0, "handle_setacl: OWNER_SECURITY_INFORMATION\n");
        VAR_13 = FUNC_3(VAR_14->sec_desc, &VAR_19, &VAR_21);
        if (!VAR_13) {
            VAR_13 = FUNC_0();
            FUNC_5("GetSecurityDescriptorOwner failed with %d\n", VAR_13);
            goto out;
        }
        VAR_16.owner = VAR_23;
        VAR_13 = FUNC_8(VAR_19, ((void*)0), ((void*)0), VAR_16.owner, VAR_11);
        if (VAR_13)
            goto out;
        else {
            VAR_16.attrmask.arr[1] |= VAR_5;
            VAR_16.attrmask.count = 2;
        }
    }
    if (VAR_14->query & VAR_7) {
        char VAR_24[VAR_8];
        FUNC_4(VAR_0, "handle_setacl: GROUP_SECURITY_INFORMATION\n");
        VAR_13 = FUNC_2(VAR_14->sec_desc, &VAR_19, &VAR_21);
        if (!VAR_13) {
            VAR_13 = FUNC_0();
            FUNC_5("GetSecurityDescriptorOwner failed with %d\n", VAR_13);
            goto out;
        }
        VAR_16.owner_group = VAR_24;
        VAR_13 = FUNC_8(VAR_19, ((void*)0), ((void*)0), VAR_16.owner_group,
                                 VAR_11);
        if (VAR_13)
            goto out;
        else {
            VAR_16.attrmask.arr[1] |= VAR_6;
            VAR_16.attrmask.count = 2;
        }
    }
    if (VAR_14->query & VAR_1) {
        BOOL VAR_25, VAR_26;
        PACL VAR_27;
        FUNC_4(VAR_0, "handle_setacl: DACL_SECURITY_INFORMATION\n");
        VAR_13 = FUNC_1(VAR_14->sec_desc, &VAR_25,
                                            &VAR_27, &VAR_26);
        if (!VAR_13) {
            VAR_13 = FUNC_0();
            FUNC_5("GetSecurityDescriptorDacl failed with %d\n", VAR_13);
            goto out;
        }
        VAR_13 = FUNC_3(VAR_14->sec_desc, &VAR_19, &VAR_21);
        if (!VAR_13) {
            VAR_13 = FUNC_0();
            FUNC_5("GetSecurityDescriptorOwner failed with %d\n", VAR_13);
            goto out;
        }
        VAR_13 = FUNC_2(VAR_14->sec_desc, &VAR_20, &VAR_22);
        if (!VAR_13) {
            VAR_13 = FUNC_0();
            FUNC_5("GetSecurityDescriptorOwner failed with %d\n", VAR_13);
            goto out;
        }
        VAR_13 = FUNC_7(VAR_27, VAR_19, VAR_20, &VAR_18, VAR_15->type,
                                    VAR_11);
        if (VAR_13)
            goto out;
        else {
            VAR_16.acl = &VAR_18;
            VAR_16.attrmask.arr[0] |= VAR_4;
            if (!VAR_16.attrmask.count)
                VAR_16.attrmask.count = 1;
        }
    }


    FUNC_9(VAR_15->session, &VAR_15->file,
        VAR_9, VAR_3);

    FUNC_10(VAR_15, &VAR_17);
    VAR_13 = FUNC_11(VAR_15->session, &VAR_15->file, &VAR_17, &VAR_16);
    if (VAR_13) {
        FUNC_4(VAR_0, "handle_setacl: nfs41_setattr() failed with error %s.\n",
                FUNC_12(VAR_13));
        VAR_13 = FUNC_13(VAR_13, VAR_2);
    }
    VAR_14->ctime = VAR_16.change;
    if (VAR_14->query & VAR_1)
        FUNC_6(VAR_18.aces);
out:
    return VAR_13;
}
