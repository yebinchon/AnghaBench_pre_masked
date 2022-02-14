
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int custext; } ;
struct TYPE_12__ {int sid_ctx_length; TYPE_1__* ctx; int sid_ctx; TYPE_3__* cert; TYPE_1__* session_ctx; } ;
struct TYPE_11__ {int sid_ctx_length; int sid_ctx; int cert; } ;
typedef TYPE_1__ SSL_CTX ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ CERT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*) ;

SSL_CTX *FUNC_8(SSL *VAR_0, SSL_CTX *VAR_1)
{
    CERT *VAR_2;
    if (VAR_0->ctx == VAR_1)
        return VAR_0->ctx;
    if (VAR_1 == ((void*)0))
        VAR_1 = VAR_0->session_ctx;
    VAR_2 = FUNC_6(VAR_1->cert);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    if (!FUNC_2(&VAR_2->custext, &VAR_0->cert->custext)) {
        FUNC_7(VAR_2);
        return ((void*)0);
    }

    FUNC_7(VAR_0->cert);
    VAR_0->cert = VAR_2;





    if (!FUNC_5(VAR_0->sid_ctx_length <= sizeof(VAR_0->sid_ctx)))
        return ((void*)0);







    if ((VAR_0->ctx != ((void*)0)) &&
        (VAR_0->sid_ctx_length == VAR_0->ctx->sid_ctx_length) &&
        (FUNC_3(VAR_0->sid_ctx, VAR_0->ctx->sid_ctx, VAR_0->sid_ctx_length) == 0)) {
        VAR_0->sid_ctx_length = VAR_1->sid_ctx_length;
        FUNC_4(&VAR_0->sid_ctx, &VAR_1->sid_ctx, sizeof(VAR_0->sid_ctx));
    }

    FUNC_1(VAR_1);
    FUNC_0(VAR_0->ctx);
    VAR_0->ctx = VAR_1;

    return VAR_0->ctx;
}
