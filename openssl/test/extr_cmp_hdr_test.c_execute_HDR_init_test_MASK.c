
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * recipNonce; int * transactionID; int * senderNonce; } ;
struct TYPE_4__ {scalar_t__ expected; TYPE_2__* cmp_ctx; int hdr; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(CMP_HDR_TEST_FIXTURE *VAR_1)
{
    ASN1_OCTET_STRING *VAR_2 = ((void*)0);
    ASN1_OCTET_STRING *VAR_3 = ((void*)0);
    int VAR_4 = 0;

    if (!FUNC_3(VAR_1->expected,
                     FUNC_8(VAR_1->cmp_ctx, VAR_1->hdr)))
        goto err;
    if (VAR_1->expected != 0) {
        if (!FUNC_3(FUNC_7(VAR_1->hdr), VAR_0)
                || !FUNC_5(0 == FUNC_0(
                        FUNC_6(VAR_1->hdr),
                        VAR_1->cmp_ctx->senderNonce))
                || !FUNC_5(0 == FUNC_0(
                            FUNC_2(VAR_1->hdr),
                            VAR_1->cmp_ctx->transactionID)))
            goto err;
        VAR_2 = FUNC_1(VAR_1->hdr);
        VAR_3 = VAR_1->cmp_ctx->recipNonce;
        if (VAR_3 != ((void*)0)
                && (!FUNC_4(VAR_2)
                || !FUNC_3(0, FUNC_0(VAR_2,
                                                         VAR_3))))
            goto err;
    }

    VAR_4 = 1;

 err:
    return VAR_4;
}
