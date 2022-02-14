
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pkey_id; int pkey_base_id; int pkey_flags; void* pem_str; void* info; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (int) ;

EVP_PKEY_ASN1_METHOD *FUNC_3(int VAR_1, int VAR_2,
                                        const char *VAR_3, const char *VAR_4)
{
    EVP_PKEY_ASN1_METHOD *VAR_5 = FUNC_2(sizeof(*VAR_5));

    if (VAR_5 == ((void*)0))
        return ((void*)0);

    VAR_5->pkey_id = VAR_1;
    VAR_5->pkey_base_id = VAR_1;
    VAR_5->pkey_flags = VAR_2 | VAR_0;

    if (VAR_4) {
        VAR_5->info = FUNC_1(VAR_4);
        if (!VAR_5->info)
            goto err;
    }

    if (VAR_3) {
        VAR_5->pem_str = FUNC_1(VAR_3);
        if (!VAR_5->pem_str)
            goto err;
    }

    return VAR_5;

 err:
    FUNC_0(VAR_5);
    return ((void*)0);

}
