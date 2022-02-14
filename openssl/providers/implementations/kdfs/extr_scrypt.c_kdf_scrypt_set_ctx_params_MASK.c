
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int N; int r; int p; int maxmem_bytes; int salt_len; int salt; int pass_len; int pass; } ;
typedef int OSSL_PARAM ;
typedef TYPE_1__ KDF_SCRYPT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*,int*) ;
 int * FUNC_1 (int const*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int const*) ;

__attribute__((used)) static int FUNC_4(void *VAR_6, const OSSL_PARAM VAR_7[])
{
    const OSSL_PARAM *VAR_8;
    KDF_SCRYPT *VAR_9 = VAR_6;
    uint64_t VAR_10;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_0)) != ((void*)0))
        if (!FUNC_3(&VAR_9->pass, &VAR_9->pass_len, VAR_8))
            return 0;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_1)) != ((void*)0))
        if (!FUNC_3(&VAR_9->salt, &VAR_9->salt_len, VAR_8))
            return 0;

    if ((VAR_8 = FUNC_1(VAR_7, VAR_3))
        != ((void*)0)) {
        if (!FUNC_0(VAR_8, &VAR_10)
            || VAR_10 <= 1
            || !FUNC_2(VAR_10))
            return 0;
        VAR_9->N = VAR_10;
    }

    if ((VAR_8 = FUNC_1(VAR_7, VAR_5))
        != ((void*)0)) {
        if (!FUNC_0(VAR_8, &VAR_10) || VAR_10 < 1)
            return 0;
        VAR_9->r = VAR_10;
    }

    if ((VAR_8 = FUNC_1(VAR_7, VAR_4))
        != ((void*)0)) {
        if (!FUNC_0(VAR_8, &VAR_10) || VAR_10 < 1)
            return 0;
        VAR_9->p = VAR_10;
    }

    if ((VAR_8 = FUNC_1(VAR_7, VAR_2))
        != ((void*)0)) {
        if (!FUNC_0(VAR_8, &VAR_10) || VAR_10 < 1)
            return 0;
        VAR_9->maxmem_bytes = VAR_10;
    }
    return 1;
}
