
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int query; } ;
struct TYPE_5__ {TYPE_3__ getacl; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ getacl_upcall_args ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (unsigned char**,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_0, uint32_t VAR_1,
                        nfs41_upcall *VAR_2)
{
    int VAR_3;
    getacl_upcall_args *VAR_4 = &VAR_2->args.getacl;

    VAR_3 = FUNC_1(&VAR_0, &VAR_1, &VAR_4->query, sizeof(VAR_4->query));
    if (VAR_3) goto out;

    FUNC_0(1, "parsing NFS41_ACL_QUERY: info_class=%d\n", VAR_4->query);
out:
    return VAR_3;
}
