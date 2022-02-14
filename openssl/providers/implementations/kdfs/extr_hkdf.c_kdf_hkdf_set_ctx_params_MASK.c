
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int mode; size_t key_len; size_t salt_len; int info_len; void* info; int * salt; int * key; int digest; int provctx; } ;
struct TYPE_9__ {scalar_t__ data_type; scalar_t__ data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef TYPE_2__ KDF_HKDF ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int*) ;
 int FUNC_4 (TYPE_1__ const*,void**,int,size_t*) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,int ) ;
 int * FUNC_6 (int ) ;
 int VAR_10 ;
 int FUNC_7 (int *,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9(void *VAR_11, const OSSL_PARAM VAR_12[])
{
    const OSSL_PARAM *VAR_13;
    KDF_HKDF *VAR_14 = VAR_11;
    OPENSSL_CTX *VAR_15 = FUNC_6(VAR_14->provctx);
    int VAR_16;

    if (!FUNC_7(&VAR_14->digest, VAR_12, VAR_15))
        return 0;

    if ((VAR_13 = FUNC_5(VAR_12, VAR_7)) != ((void*)0)) {
        if (VAR_13->data_type == VAR_9) {
            if (FUNC_8(VAR_13->data, "EXTRACT_AND_EXPAND") == 0) {
                VAR_14->mode = VAR_2;
            } else if (FUNC_8(VAR_13->data, "EXTRACT_ONLY") == 0) {
                VAR_14->mode = VAR_3;
            } else if (FUNC_8(VAR_13->data, "EXPAND_ONLY") == 0) {
                VAR_14->mode = VAR_1;
            } else {
                FUNC_0(VAR_0, VAR_10);
                return 0;
            }
        } else if (FUNC_3(VAR_13, &VAR_16)) {
            if (VAR_16 != VAR_2
                && VAR_16 != VAR_3
                && VAR_16 != VAR_1) {
                FUNC_0(VAR_0, VAR_10);
                return 0;
            }
            VAR_14->mode = VAR_16;
        } else {
            FUNC_0(VAR_0, VAR_10);
            return 0;
        }
    }

    if ((VAR_13 = FUNC_5(VAR_12, VAR_6)) != ((void*)0)) {
        FUNC_1(VAR_14->key, VAR_14->key_len);
        VAR_14->key = ((void*)0);
        if (!FUNC_4(VAR_13, (void **)&VAR_14->key, 0,
                                         &VAR_14->key_len))
            return 0;
    }

    if ((VAR_13 = FUNC_5(VAR_12, VAR_8)) != ((void*)0)) {
        if (VAR_13->data_size != 0 && VAR_13->data != ((void*)0)) {
            FUNC_2(VAR_14->salt);
            VAR_14->salt = ((void*)0);
            if (!FUNC_4(VAR_13, (void **)&VAR_14->salt, 0,
                                             &VAR_14->salt_len))
                return 0;
        }
    }

    if ((VAR_13 = FUNC_5(VAR_12, VAR_5)) != ((void*)0)) {
        VAR_14->info_len = 0;
        for (; VAR_13 != ((void*)0); VAR_13 = FUNC_5(VAR_13 + 1,
                                                      VAR_5)) {
            const void *VAR_17 = VAR_14->info + VAR_14->info_len;
            size_t VAR_18 = 0;

            if (VAR_13->data_size != 0
                && VAR_13->data != ((void*)0)
                && !FUNC_4(VAR_13, (void **)&VAR_17,
                                                VAR_4 - VAR_14->info_len,
                                                &VAR_18))
                return 0;
            VAR_14->info_len += VAR_18;
        }
    }
    return 1;
}
