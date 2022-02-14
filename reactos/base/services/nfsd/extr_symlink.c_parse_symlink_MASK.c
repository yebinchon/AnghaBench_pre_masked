
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int * target_set; scalar_t__ set; int * path; } ;
typedef TYPE_2__ symlink_upcall_args ;
struct TYPE_5__ {TYPE_2__ symlink; } ;
struct TYPE_7__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
typedef int BOOLEAN ;


 int FUNC_0 (int,char*,int *,scalar_t__,int *) ;
 int FUNC_1 (unsigned char**,int *,int **) ;
 int FUNC_2 (unsigned char**,int *,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_3(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    symlink_upcall_args *VAR_3 = &VAR_2->args.symlink;
    int VAR_4;

    VAR_4 = FUNC_1(&VAR_0, &VAR_1, &VAR_3->path);
    if (VAR_4) goto out;
    VAR_4 = FUNC_2(&VAR_0, &VAR_1, &VAR_3->set, sizeof(BOOLEAN));
    if (VAR_4) goto out;

    if (VAR_3->set)
        VAR_4 = FUNC_1(&VAR_0, &VAR_1, &VAR_3->target_set);
    else
        VAR_3->target_set = ((void*)0);

    FUNC_0(1, "parsing NFS41_SYMLINK: path='%s' set=%u target='%s'\n",
        VAR_3->path, VAR_3->set, VAR_3->target_set);
out:
    return VAR_4;
}
