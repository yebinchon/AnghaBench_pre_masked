
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * libctx; } ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ BN_CTX ;



OPENSSL_CTX *FUNC_0(BN_CTX *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return ((void*)0);
    return VAR_0->libctx;
}
