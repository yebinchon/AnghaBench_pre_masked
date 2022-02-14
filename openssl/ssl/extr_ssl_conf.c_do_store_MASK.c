
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509_STORE ;
struct TYPE_9__ {int * chain_store; int * verify_store; } ;
struct TYPE_8__ {TYPE_2__* ssl; TYPE_1__* ctx; } ;
struct TYPE_7__ {TYPE_4__* cert; } ;
struct TYPE_6__ {TYPE_4__* cert; } ;
typedef TYPE_3__ SSL_CONF_CTX ;
typedef TYPE_4__ CERT ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*) ;
 int * FUNC_3 () ;

__attribute__((used)) static int FUNC_4(SSL_CONF_CTX *VAR_0,
                    const char *VAR_1, const char *VAR_2, const char *VAR_3,
                    int VAR_4)
{
    CERT *VAR_5;
    X509_STORE **VAR_6;

    if (VAR_0->ctx)
        VAR_5 = VAR_0->ctx->cert;
    else if (VAR_0->ssl)
        VAR_5 = VAR_0->ssl->cert;
    else
        return 1;
    VAR_6 = VAR_4 ? &VAR_5->verify_store : &VAR_5->chain_store;
    if (*VAR_6 == ((void*)0)) {
        *VAR_6 = FUNC_3();
        if (*VAR_6 == ((void*)0))
            return 0;
    }

    if (VAR_1 != ((void*)0) && !FUNC_0(*VAR_6, VAR_1))
        return 0;
    if (VAR_2 != ((void*)0) && !FUNC_1(*VAR_6, VAR_2))
        return 0;
    if (VAR_3 != ((void*)0) && !FUNC_2(*VAR_6, VAR_3))
        return 0;
    return 1;
}
