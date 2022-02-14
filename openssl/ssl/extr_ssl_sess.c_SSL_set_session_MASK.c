
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ method; TYPE_2__* session; int verify_result; TYPE_1__* ctx; } ;
struct TYPE_11__ {int verify_result; } ;
struct TYPE_10__ {scalar_t__ method; } ;
typedef TYPE_2__ SSL_SESSION ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

int FUNC_4(SSL *VAR_0, SSL_SESSION *VAR_1)
{
    FUNC_3(VAR_0);
    if (VAR_0->ctx->method != VAR_0->method) {
        if (!FUNC_2(VAR_0, VAR_0->ctx->method))
            return 0;
    }

    if (VAR_1 != ((void*)0)) {
        FUNC_1(VAR_1);
        VAR_0->verify_result = VAR_1->verify_result;
    }
    FUNC_0(VAR_0->session);
    VAR_0->session = VAR_1;

    return 1;
}
