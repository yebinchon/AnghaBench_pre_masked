
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pkey_gencb; } ;
typedef int EVP_PKEY_gen_cb ;
typedef TYPE_1__ EVP_PKEY_CTX ;



void FUNC_0(EVP_PKEY_CTX *VAR_0, EVP_PKEY_gen_cb *VAR_1)
{
    VAR_0->pkey_gencb = VAR_1;
}
