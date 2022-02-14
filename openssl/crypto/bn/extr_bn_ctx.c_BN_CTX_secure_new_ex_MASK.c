
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ BN_CTX ;


 TYPE_1__* FUNC_0 (int *) ;
 int VAR_0 ;

BN_CTX *FUNC_1(OPENSSL_CTX *VAR_1)
{
    BN_CTX *VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 != ((void*)0))
        VAR_2->flags = VAR_0;
    return VAR_2;
}
