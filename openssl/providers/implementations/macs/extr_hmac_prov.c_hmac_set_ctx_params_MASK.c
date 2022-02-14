
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct hmac_data_st {int digest; int ctx; int provctx; } ;
struct TYPE_7__ {scalar_t__ data_type; int data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__ const*,int*) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,TYPE_1__ const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_3, const OSSL_PARAM VAR_4[])
{
    struct hmac_data_st *VAR_5 = VAR_3;
    OPENSSL_CTX *VAR_6 = FUNC_4(VAR_5->provctx);
    const OSSL_PARAM *VAR_7;

    if (!FUNC_5(&VAR_5->digest, VAR_4, VAR_6))
        return 0;


    if ((VAR_7 = FUNC_3(VAR_4,
                                     VAR_0)) != ((void*)0)) {
        int VAR_8 = 0;

        if (!FUNC_2(VAR_7, &VAR_8))
            return 0;
        FUNC_0(VAR_5->ctx, VAR_8);
    }
    if ((VAR_7 = FUNC_3(VAR_4, VAR_1)) != ((void*)0)) {
        if (VAR_7->data_type != VAR_2)
            return 0;

        if (!FUNC_1(VAR_5->ctx, VAR_7->data, VAR_7->data_size,
                          FUNC_6(&VAR_5->digest),
                          ((void*)0) ))
            return 0;

        FUNC_7(&VAR_5->digest);
    }
    return 1;
}
