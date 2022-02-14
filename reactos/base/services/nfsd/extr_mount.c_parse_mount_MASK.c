
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int wsize; int rsize; int sec_flavor; int path; int hostname; } ;
struct TYPE_5__ {TYPE_3__ mount; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ mount_upcall_args ;
typedef int DWORD ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *) ;
 int FUNC_2 (unsigned char**,int *,int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    mount_upcall_args *VAR_4 = &VAR_2->args.mount;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->hostname);
    if(VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->path);
    if(VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->sec_flavor, sizeof(DWORD));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->rsize, sizeof(DWORD));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->wsize, sizeof(DWORD));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing NFS14_MOUNT: srv_name=%s root=%s sec_flavor=%s "
        "rsize=%d wsize=%d\n", VAR_4->hostname, VAR_4->path,
        FUNC_3(VAR_4->sec_flavor), VAR_4->rsize, VAR_4->wsize);
out:
    return VAR_3;
}
