
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {int lower_bound_checks; int iter; int salt_len; int salt; int pass_len; int pass; int digest; int provctx; } ;
struct TYPE_10__ {scalar_t__ data_size; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ KDF_PBKDF2 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__ const*,int*) ;
 int FUNC_2 (TYPE_1__ const*,int*) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,int ) ;
 int * FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,TYPE_1__ const*,int *) ;
 int FUNC_6 (int *,int *,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_7(void *VAR_9, const OSSL_PARAM VAR_10[])
{
    const OSSL_PARAM *VAR_11;
    KDF_PBKDF2 *VAR_12 = VAR_9;
    OPENSSL_CTX *VAR_13 = FUNC_4(VAR_12->provctx);
    int VAR_14;
    uint64_t VAR_15, VAR_16;

    if (!FUNC_5(&VAR_12->digest, VAR_10, VAR_13))
        return 0;

    if ((VAR_11 = FUNC_3(VAR_10, VAR_5)) != ((void*)0)) {
        if (!FUNC_1(VAR_11, &VAR_14))
            return 0;
        VAR_12->lower_bound_checks = VAR_14 == 0;
    }

    if ((VAR_11 = FUNC_3(VAR_10, VAR_4)) != ((void*)0))
        if (!FUNC_6(&VAR_12->pass, &VAR_12->pass_len, VAR_11))
            return 0;

    if ((VAR_11 = FUNC_3(VAR_10, VAR_6)) != ((void*)0)) {
        if (VAR_12->lower_bound_checks != 0
            && VAR_11->data_size < VAR_2) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (!FUNC_6(&VAR_12->salt, &VAR_12->salt_len,VAR_11))
            return 0;
    }

    if ((VAR_11 = FUNC_3(VAR_10, VAR_3)) != ((void*)0)) {
        if (!FUNC_2(VAR_11, &VAR_15))
            return 0;
        VAR_16 = VAR_12->lower_bound_checks != 0 ? VAR_1 : 1;
        if (VAR_15 < VAR_16) {
            FUNC_0(VAR_0, VAR_7);
            return 0;
        }
        VAR_12->iter = VAR_15;
    }
    return 1;
}
