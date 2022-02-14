
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct cmac_data_st {int cipher; int ctx; int provctx; } ;
struct TYPE_6__ {scalar_t__ data_type; int data_size; int data; } ;
typedef TYPE_1__ OSSL_PARAM ;
typedef int OPENSSL_CTX ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (TYPE_1__ const*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__ const*,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_2, const OSSL_PARAM VAR_3[])
{
    struct cmac_data_st *VAR_4 = VAR_2;
    OPENSSL_CTX *VAR_5 = FUNC_2(VAR_4->provctx);
    const OSSL_PARAM *VAR_6;

    if (!FUNC_5(&VAR_4->cipher, VAR_3, VAR_5))
        return 0;

    if ((VAR_6 = FUNC_1(VAR_3, VAR_0)) != ((void*)0)) {
        if (VAR_6->data_type != VAR_1)
            return 0;

        if (!FUNC_0(VAR_4->ctx, VAR_6->data, VAR_6->data_size,
                       FUNC_3(&VAR_4->cipher),
                       FUNC_4(&VAR_4->cipher)))
            return 0;

        FUNC_6(&VAR_4->cipher);
    }
    return 1;
}
