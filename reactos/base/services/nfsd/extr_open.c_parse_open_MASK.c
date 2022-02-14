
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int path; } ;
struct TYPE_7__ {int create_opts; int access_mode; int access_mask; int disposition; int ea; TYPE_5__ symlink; int srv_open; int mode; int open_owner_id; int file_attrs; int path; } ;
typedef TYPE_2__ open_upcall_args ;
struct TYPE_6__ {TYPE_2__ open; } ;
struct TYPE_8__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
typedef int ULONG ;
typedef int LONG ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *) ;
 int FUNC_2 (unsigned char**,int *,TYPE_5__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_8(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    open_upcall_args *VAR_4 = &VAR_2->args.open;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->path);
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->access_mask, sizeof(ULONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->access_mode, sizeof(ULONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->file_attrs, sizeof(ULONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->create_opts, sizeof(ULONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->disposition, sizeof(ULONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->open_owner_id, sizeof(LONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->mode, sizeof(DWORD));
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->srv_open, sizeof(HANDLE));
    if (VAR_3) goto out;
    VAR_3 = FUNC_2(&VAR_0, &VAR_1, &VAR_4->symlink);
    if (VAR_3) goto out;
    VAR_3 = FUNC_7(&VAR_0, &VAR_1, &VAR_4->ea, sizeof(HANDLE));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing NFS41_OPEN: filename='%s' access mask=%d "
        "access mode=%d\n\tfile attrs=0x%x create attrs=0x%x "
        "(kernel) disposition=%d\n\topen_owner_id=%d mode=%o "
        "srv_open=%p symlink=%s ea=%p\n", VAR_4->path, VAR_4->access_mask,
        VAR_4->access_mode, VAR_4->file_attrs, VAR_4->create_opts,
        VAR_4->disposition, VAR_4->open_owner_id, VAR_4->mode, VAR_4->srv_open,
        VAR_4->symlink.path, VAR_4->ea);
    FUNC_5(2, VAR_4->disposition);
    FUNC_3(2, VAR_4->access_mask);
    FUNC_6(2, VAR_4->access_mode);
    FUNC_4(2, VAR_4->create_opts);
out:
    return VAR_3;
}
