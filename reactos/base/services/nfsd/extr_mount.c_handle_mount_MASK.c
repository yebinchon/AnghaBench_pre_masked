
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


struct TYPE_28__ {int lease_time; int FsAttrs; int path; scalar_t__ rsize; scalar_t__ wsize; int sec_flavor; int hostname; } ;
struct TYPE_21__ {TYPE_8__ mount; } ;
struct TYPE_23__ {TYPE_4__* root_ref; int gid; int uid; TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
struct TYPE_24__ {int gid; int uid; } ;
typedef TYPE_4__ nfs41_root ;
struct TYPE_22__ {int superblock; } ;
struct TYPE_25__ {TYPE_2__ fh; } ;
typedef TYPE_5__ nfs41_path_fh ;
struct TYPE_26__ {TYPE_15__* session; } ;
typedef TYPE_6__ nfs41_client ;
struct TYPE_27__ {unsigned short len; int path; int lock; } ;
typedef TYPE_7__ nfs41_abs_path ;
typedef int multi_addr4 ;
typedef TYPE_8__ mount_upcall_args ;
struct TYPE_20__ {int lease_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (TYPE_4__*,TYPE_15__*,TYPE_7__*,int *,TYPE_5__*,int *,int *) ;
 int FUNC_5 (int ,int ,scalar_t__,scalar_t__,TYPE_4__**) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,int *,int ,int ,TYPE_6__**) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(nfs41_upcall *VAR_6)
{
    int VAR_7;
    mount_upcall_args *VAR_8 = &VAR_6->args.mount;
    nfs41_abs_path VAR_9;
    multi_addr4 VAR_10;
    nfs41_root *VAR_11;
    nfs41_client *VAR_12;
    nfs41_path_fh VAR_13;


    VAR_7 = FUNC_9(VAR_8->hostname, 2049, &VAR_10);
    if (VAR_7) {
        FUNC_3("nfs41_server_resolve() failed with %d\n", VAR_7);
        goto out;
    }

    if (VAR_6->root_ref != VAR_2) {


        VAR_11 = VAR_6->root_ref;
    } else {

        VAR_7 = FUNC_5(VAR_8->hostname, VAR_8->sec_flavor,
            VAR_8->wsize + VAR_5, VAR_8->rsize + VAR_4, &VAR_11);
        if (VAR_7) {
            FUNC_3("nfs41_root_create() failed %d\n", VAR_7);
            goto out;
        }
        VAR_11->uid = VAR_6->uid;
        VAR_11->gid = VAR_6->gid;
    }


    VAR_7 = FUNC_7(VAR_11, &VAR_10, 0, 0, &VAR_12);
    if (VAR_7) {
        FUNC_3("nfs41_root_mount_addrs() failed with %d\n", VAR_7);
        goto out_err;
    }


    FUNC_1(&VAR_9.lock);
    if (FUNC_0(FUNC_2(VAR_9.path, VAR_3, VAR_8->path))) {
        VAR_7 = VAR_1;
        goto out_err;
    }
    VAR_9.len = (unsigned short)FUNC_11(VAR_9.path);


    VAR_7 = FUNC_4(VAR_11, VAR_12->session,
        &VAR_9, ((void*)0), &VAR_13, ((void*)0), ((void*)0));
    if (VAR_7) {
        FUNC_3("nfs41_lookup('%s') failed with %d\n", VAR_9.path, VAR_7);
        VAR_7 = VAR_0;
        goto out_err;
    }

    FUNC_10(VAR_13.fh.superblock, &VAR_8->FsAttrs);

    if (VAR_6->root_ref == VAR_2)
        FUNC_8(VAR_11);
    VAR_6->root_ref = VAR_11;
    VAR_8->lease_time = VAR_12->session->lease_time;
out:
    return VAR_7;

out_err:
    if (VAR_6->root_ref == VAR_2)
        FUNC_6(VAR_11);
    goto out;
}
