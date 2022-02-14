
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int sec_desc_len; int* sec_desc; } ;
struct TYPE_5__ {TYPE_3__ getacl; } ;
struct TYPE_6__ {TYPE_1__ args; } ;
typedef TYPE_2__ nfs41_upcall ;
typedef TYPE_3__ getacl_upcall_args ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (unsigned char**,int *,int*,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_1, uint32_t *VAR_2,
                           nfs41_upcall *VAR_3)
{
    int VAR_4 = VAR_0;
    getacl_upcall_args *VAR_5 = &VAR_3->args.getacl;

    VAR_4 = FUNC_1(&VAR_1, VAR_2, &VAR_5->sec_desc_len, sizeof(DWORD));
    if (VAR_4) goto out;
    VAR_4 = FUNC_1(&VAR_1, VAR_2, VAR_5->sec_desc, VAR_5->sec_desc_len);
    FUNC_0(VAR_5->sec_desc);
    if (VAR_4) goto out;
out:
    return VAR_4;
}
