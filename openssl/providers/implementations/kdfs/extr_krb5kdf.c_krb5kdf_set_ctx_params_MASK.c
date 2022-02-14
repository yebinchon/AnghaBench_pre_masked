
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int constant_len; int constant; int key_len; int key; int cipher; int provctx; } ;
typedef int OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ KRB5KDF_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int const*,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int const*) ;
 int FUNC_3 (int *,int const*,int *) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, const OSSL_PARAM VAR_3[])
{
    const OSSL_PARAM *VAR_4;
    KRB5KDF_CTX *VAR_5 = VAR_2;
    OPENSSL_CTX *VAR_6 = FUNC_1(VAR_5->provctx);

    if (!FUNC_3(&VAR_5->cipher, VAR_3, VAR_6))
        return 0;

    if ((VAR_4 = FUNC_0(VAR_3, VAR_1)) != ((void*)0))
        if (!FUNC_2(&VAR_5->key, &VAR_5->key_len, VAR_4))
            return 0;

    if ((VAR_4 = FUNC_0(VAR_3, VAR_0))
        != ((void*)0))
        if (!FUNC_2(&VAR_5->constant, &VAR_5->constant_len, VAR_4))
            return 0;

    return 1;
}
