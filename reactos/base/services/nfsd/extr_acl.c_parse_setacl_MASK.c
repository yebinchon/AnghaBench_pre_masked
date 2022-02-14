
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int query; scalar_t__ sec_desc; } ;
typedef TYPE_2__ setacl_upcall_args ;
struct TYPE_5__ {TYPE_2__ setacl; } ;
struct TYPE_7__ {TYPE_1__ args; } ;
typedef TYPE_3__ nfs41_upcall ;
typedef int ULONG ;
typedef scalar_t__ PSECURITY_DESCRIPTOR ;


 int FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, uint32_t VAR_1,
                        nfs41_upcall *VAR_2)
{
    int VAR_3;
    setacl_upcall_args *VAR_4 = &VAR_2->args.setacl;
    ULONG VAR_5;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->query, sizeof(VAR_4->query));
    if (VAR_3) goto out;
    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_5, sizeof(ULONG));
    if (VAR_3) goto out;
    VAR_4->sec_desc = (PSECURITY_DESCRIPTOR)VAR_0;

    FUNC_0(1, "parsing NFS41_ACL_SET: info_class=%d sec_desc_len=%d\n",
            VAR_4->query, VAR_5);
out:
    return VAR_3;
}
