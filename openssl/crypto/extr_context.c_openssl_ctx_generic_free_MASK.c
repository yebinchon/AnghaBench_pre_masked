
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* free_func ) (void*) ;} ;
typedef TYPE_1__ OPENSSL_CTX_METHOD ;
typedef int CRYPTO_EX_DATA ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, void *VAR_1,
                                     CRYPTO_EX_DATA *VAR_2, int VAR_3,
                                     long VAR_4, void *VAR_5)
{
    const OPENSSL_CTX_METHOD *VAR_6 = VAR_5;

    VAR_6->free_func(VAR_1);
}
