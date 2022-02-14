
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509_NAME ;
struct TYPE_6__ {int senderNonce; } ;
struct TYPE_5__ {TYPE_2__* cmp_ctx; int hdr; } ;
typedef TYPE_1__ CMP_HDR_TEST_FIXTURE ;
typedef int ASN1_OCTET_STRING ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(CMP_HDR_TEST_FIXTURE *VAR_0)
{
    X509_NAME *VAR_1 = FUNC_6();
    ASN1_OCTET_STRING *VAR_2;

    if (!FUNC_3(VAR_1))
        return 0;

    FUNC_4(VAR_1, "CN", "A common sender name");
    if (!FUNC_2(FUNC_1(VAR_0->cmp_ctx, VAR_1),
                     1))
        return 0;
    if (!FUNC_2(FUNC_8(VAR_0->cmp_ctx, VAR_0->hdr),
                     1))
        return 0;
    VAR_2 = FUNC_7(VAR_0->hdr);
    if (!FUNC_2(FUNC_0(VAR_0->cmp_ctx->senderNonce, VAR_2),
                     0))
        return 0;
    FUNC_5(VAR_1);
    return 1;
}
