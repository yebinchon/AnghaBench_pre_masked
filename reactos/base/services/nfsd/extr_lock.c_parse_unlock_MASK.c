
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned char* buf; int count; int buf_len; } ;
typedef TYPE_2__ unlock_upcall_args ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__ unlock; } ;
struct TYPE_7__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
typedef int ULONG ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    unlock_upcall_args *VAR_4 = &VAR_2->args.unlock;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->count, sizeof(ULONG));
    if (VAR_3) goto out;

    VAR_4->buf = VAR_0;
    VAR_4->buf_len = VAR_1;

    FUNC_0(1, "parsing NFS41_UNLOCK: count=%u\n", VAR_4->count);
out:
    return VAR_3;
}
