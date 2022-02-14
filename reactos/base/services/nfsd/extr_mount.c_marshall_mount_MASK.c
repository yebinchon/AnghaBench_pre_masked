
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int FsAttrs; int lease_time; } ;
struct TYPE_5__ {TYPE_3__ mount; } ;
struct TYPE_6__ {int root_ref; TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ mount_upcall_args ;
typedef int HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_1, uint32_t *VAR_2, nfs41_upcall *VAR_3)
{
    mount_upcall_args *VAR_4 = &VAR_3->args.mount;
    int VAR_5;
    FUNC_0(2, "NFS41_MOUNT: writing pointer to nfs41_root %p, version %d, "
        "lease_time %d\n", VAR_3->root_ref, VAR_0, VAR_4->lease_time);
    VAR_5 = FUNC_1(&VAR_1, VAR_2, &VAR_3->root_ref, sizeof(HANDLE));
    if (VAR_5) goto out;
    VAR_5 = FUNC_1(&VAR_1, VAR_2, &VAR_0, sizeof(DWORD));
    if (VAR_5) goto out;
    VAR_5 = FUNC_1(&VAR_1, VAR_2, &VAR_4->lease_time, sizeof(DWORD));
    if (VAR_5) goto out;
    VAR_5 = FUNC_1(&VAR_1, VAR_2, &VAR_4->FsAttrs, sizeof(VAR_4->FsAttrs));
out:
    return VAR_5;
}
