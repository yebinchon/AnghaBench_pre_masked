
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* (* new_func ) (int ) ;} ;
typedef TYPE_1__ OPENSSL_CTX_METHOD ;
typedef int CRYPTO_EX_DATA ;


 int FUNC_0 (int *,int,void*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, void *VAR_1,
                                    CRYPTO_EX_DATA *VAR_2, int VAR_3,
                                    long VAR_4, void *VAR_5)
{
    const OPENSSL_CTX_METHOD *VAR_6 = VAR_5;
    void *VAR_7 = VAR_6->new_func(FUNC_1(VAR_2));

    if (VAR_7 != ((void*)0))
        FUNC_0(VAR_2, VAR_3, VAR_7);
}
