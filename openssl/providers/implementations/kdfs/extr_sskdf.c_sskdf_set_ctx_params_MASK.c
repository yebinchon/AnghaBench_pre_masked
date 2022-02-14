
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t out_len; int salt_len; int salt; int info_len; int info; int secret_len; int secret; int macctx; int digest; int provctx; } ;
typedef int OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ KDF_SSKDF ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*,size_t*) ;
 int * FUNC_1 (int const*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,int *) ;
 int FUNC_4 (int *,int const*,int *,int *,int *,int *) ;
 int FUNC_5 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, const OSSL_PARAM VAR_6[])
{
    const OSSL_PARAM *VAR_7;
    KDF_SSKDF *VAR_8 = VAR_5;
    OPENSSL_CTX *VAR_9 = FUNC_2(VAR_8->provctx);
    size_t VAR_10;

    if (!FUNC_3(&VAR_8->digest, VAR_6, VAR_9))
        return 0;

    if (!FUNC_4(&VAR_8->macctx, VAR_6,
                                           ((void*)0), ((void*)0), ((void*)0), VAR_9))
        return 0;

    if ((VAR_7 = FUNC_1(VAR_6, VAR_4)) != ((void*)0)
        || (VAR_7 = FUNC_1(VAR_6, VAR_1)) != ((void*)0))
        if (!FUNC_5(&VAR_8->secret, &VAR_8->secret_len, VAR_7))
            return 0;

    if ((VAR_7 = FUNC_1(VAR_6, VAR_0)) != ((void*)0))
        if (!FUNC_5(&VAR_8->info, &VAR_8->info_len, VAR_7))
            return 0;

    if ((VAR_7 = FUNC_1(VAR_6, VAR_3)) != ((void*)0))
        if (!FUNC_5(&VAR_8->salt, &VAR_8->salt_len, VAR_7))
            return 0;

    if ((VAR_7 = FUNC_1(VAR_6, VAR_2))
        != ((void*)0)) {
        if (!FUNC_0(VAR_7, &VAR_10) || VAR_10 == 0)
            return 0;
        VAR_8->out_len = VAR_10;
    }
    return 1;
}
