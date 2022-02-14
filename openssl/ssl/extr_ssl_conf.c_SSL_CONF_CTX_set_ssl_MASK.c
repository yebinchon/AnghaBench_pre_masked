
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int verify_mode; TYPE_1__* cert; int max_proto_version; int min_proto_version; int options; } ;
struct TYPE_7__ {int * pvfy_flags; int * pcert_flags; int * max_version; int * min_version; int * poptions; int * ctx; TYPE_3__* ssl; } ;
struct TYPE_6__ {int cert_flags; } ;
typedef TYPE_2__ SSL_CONF_CTX ;
typedef TYPE_3__ SSL ;



void FUNC_0(SSL_CONF_CTX *VAR_0, SSL *VAR_1)
{
    VAR_0->ssl = VAR_1;
    VAR_0->ctx = ((void*)0);
    if (VAR_1) {
        VAR_0->poptions = &VAR_1->options;
        VAR_0->min_version = &VAR_1->min_proto_version;
        VAR_0->max_version = &VAR_1->max_proto_version;
        VAR_0->pcert_flags = &VAR_1->cert->cert_flags;
        VAR_0->pvfy_flags = &VAR_1->verify_mode;
    } else {
        VAR_0->poptions = ((void*)0);
        VAR_0->min_version = ((void*)0);
        VAR_0->max_version = ((void*)0);
        VAR_0->pcert_flags = ((void*)0);
        VAR_0->pvfy_flags = ((void*)0);
    }
}
