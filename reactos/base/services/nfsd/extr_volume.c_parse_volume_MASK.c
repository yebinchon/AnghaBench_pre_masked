
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int query; } ;
typedef TYPE_2__ volume_upcall_args ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__ volume; } ;
struct TYPE_7__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
typedef int FS_INFORMATION_CLASS ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    volume_upcall_args *VAR_4 = &VAR_2->args.volume;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->query, sizeof(FS_INFORMATION_CLASS));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing NFS41_VOLUME_QUERY: query=%d\n", VAR_4->query);
out:
    return VAR_3;
}
