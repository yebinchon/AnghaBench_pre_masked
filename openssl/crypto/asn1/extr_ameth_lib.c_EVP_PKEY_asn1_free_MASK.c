
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pkey_flags; struct TYPE_4__* info; struct TYPE_4__* pem_str; } ;
typedef TYPE_1__ EVP_PKEY_ASN1_METHOD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(EVP_PKEY_ASN1_METHOD *VAR_1)
{
    if (VAR_1 && (VAR_1->pkey_flags & VAR_0)) {
        FUNC_0(VAR_1->pem_str);
        FUNC_0(VAR_1->info);
        FUNC_0(VAR_1);
    }
}
