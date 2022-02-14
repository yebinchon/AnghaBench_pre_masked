
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_3__* cert; } ;
struct TYPE_11__ {TYPE_3__* cert; } ;
struct TYPE_10__ {TYPE_1__* pkeys; } ;
struct TYPE_9__ {int flags; char** cert_filename; int * canames; TYPE_6__* ctx; TYPE_5__* ssl; } ;
struct TYPE_8__ {int privatekey; } ;
typedef TYPE_2__ SSL_CONF_CTX ;
typedef TYPE_3__ CERT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_5__*,int *) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(SSL_CONF_CTX *VAR_3)
{

    size_t VAR_4;
    CERT *VAR_5 = ((void*)0);
    if (VAR_3->ctx)
        VAR_5 = VAR_3->ctx->cert;
    else if (VAR_3->ssl)
        VAR_5 = VAR_3->ssl->cert;
    if (VAR_5 && VAR_3->flags & VAR_0) {
        for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
            const char *VAR_6 = VAR_3->cert_filename[VAR_4];



            if (VAR_6 && !VAR_5->pkeys[VAR_4].privatekey) {
                if (!FUNC_2(VAR_3, VAR_6))
                    return 0;
            }
        }
    }
    if (VAR_3->canames) {
        if (VAR_3->ssl)
            FUNC_1(VAR_3->ssl, VAR_3->canames);
        else if (VAR_3->ctx)
            FUNC_0(VAR_3->ctx, VAR_3->canames);
        else
            FUNC_3(VAR_3->canames, VAR_2);
        VAR_3->canames = ((void*)0);
    }
    return 1;
}
