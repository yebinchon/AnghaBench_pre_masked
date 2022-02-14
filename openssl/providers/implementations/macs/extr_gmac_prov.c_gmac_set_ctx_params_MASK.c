
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct gmac_data_st {int cipher; int provctx; int * ctx; } ;
struct TYPE_6__ {scalar_t__ data_type; size_t data_size; int * data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;
typedef int EVP_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,size_t,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *,int *,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,int ) ;
 int * FUNC_6 (int ) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_1__ const*,int *) ;

__attribute__((used)) static int FUNC_10(void *VAR_8, const OSSL_PARAM VAR_9[])
{
    struct gmac_data_st *VAR_10 = VAR_8;
    EVP_CIPHER_CTX *VAR_11 = VAR_10->ctx;
    OPENSSL_CTX *VAR_12 = FUNC_6(VAR_10->provctx);
    const OSSL_PARAM *VAR_13;

   if (VAR_11 == ((void*)0)
        || !FUNC_9(&VAR_10->cipher, VAR_9, VAR_12))
        return 0;

    if (FUNC_3(FUNC_7(&VAR_10->cipher))
        != VAR_1) {
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }
    if (!FUNC_4(VAR_11, FUNC_7(&VAR_10->cipher),
                            FUNC_8(&VAR_10->cipher), ((void*)0),
                            ((void*)0)))
        return 0;

    if ((VAR_13 = FUNC_5(VAR_9, VAR_6)) != ((void*)0)) {
        if (VAR_13->data_type != VAR_7)
            return 0;

        if (VAR_13->data_size != (size_t)FUNC_2(VAR_11)) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }
        if (!FUNC_4(VAR_11, ((void*)0), ((void*)0), VAR_13->data, ((void*)0)))
            return 0;
    }
    if ((VAR_13 = FUNC_5(VAR_9, VAR_5)) != ((void*)0)) {
        if (VAR_13->data_type != VAR_7)
            return 0;

        if (!FUNC_1(VAR_11, VAR_2,
                                 VAR_13->data_size, ((void*)0))
            || !FUNC_4(VAR_11, ((void*)0), ((void*)0), ((void*)0), VAR_13->data))
            return 0;
    }
    return 1;
}
