
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pkey_id; int pkey_base_id; int pkey_flags; char* info; char* pem_str; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;



int FUNC_0(int *VAR_0, int *VAR_1,
                            int *VAR_2, const char **VAR_3,
                            const char **VAR_4,
                            const EVP_PKEY_ASN1_METHOD *VAR_5)
{
    if (!VAR_5)
        return 0;
    if (VAR_0)
        *VAR_0 = VAR_5->pkey_id;
    if (VAR_1)
        *VAR_1 = VAR_5->pkey_base_id;
    if (VAR_2)
        *VAR_2 = VAR_5->pkey_flags;
    if (VAR_3)
        *VAR_3 = VAR_5->info;
    if (VAR_4)
        *VAR_4 = VAR_5->pem_str;
    return 1;
}
