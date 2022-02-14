
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int blocking; int exclusive; int length; int offset; } ;
struct TYPE_5__ {TYPE_3__ lock; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ lock_upcall_args ;
typedef int LONGLONG ;
typedef int BOOLEAN ;


 int FUNC_0 (int,char*,int ,int ,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, uint32_t VAR_1, nfs41_upcall *VAR_2)
{
    int VAR_3;
    lock_upcall_args *VAR_4 = &VAR_2->args.lock;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->offset, sizeof(LONGLONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->length, sizeof(LONGLONG));
    if (VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->exclusive, sizeof(BOOLEAN));
    if (VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->blocking, sizeof(BOOLEAN));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing NFS41_LOCK: offset=0x%llx length=0x%llx exclusive=%u "
            "blocking=%u\n", VAR_4->offset, VAR_4->length, VAR_4->exclusive,
            VAR_4->blocking);
out:
    return VAR_3;
}
