
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* cert; } ;
struct TYPE_8__ {TYPE_2__* cert; } ;
struct TYPE_7__ {size_t key; size_t pkeys; } ;
struct TYPE_6__ {int flags; char** cert_filename; TYPE_4__* ssl; TYPE_5__* ctx; } ;
typedef TYPE_1__ SSL_CONF_CTX ;
typedef TYPE_2__ CERT ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_5__*,char const*) ;
 int FUNC_3 (TYPE_4__*,char const*) ;

__attribute__((used)) static int FUNC_4(SSL_CONF_CTX *VAR_1, const char *VAR_2)
{
    int VAR_3 = 1;
    CERT *VAR_4 = ((void*)0);
    if (VAR_1->ctx) {
        VAR_3 = FUNC_2(VAR_1->ctx, VAR_2);
        VAR_4 = VAR_1->ctx->cert;
    }
    if (VAR_1->ssl) {
        VAR_3 = FUNC_3(VAR_1->ssl, VAR_2);
        VAR_4 = VAR_1->ssl->cert;
    }
    if (VAR_3 > 0 && VAR_4 && VAR_1->flags & VAR_0) {
        char **VAR_5 = &VAR_1->cert_filename[VAR_4->key - VAR_4->pkeys];
        FUNC_0(*VAR_5);
        *VAR_5 = FUNC_1(VAR_2);
        if (*VAR_5 == ((void*)0))
            VAR_3 = 0;
    }

    return VAR_3 > 0;
}
