
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* ssl; TYPE_2__* ctx; } ;
struct TYPE_12__ {TYPE_3__* method; } ;
struct TYPE_11__ {TYPE_5__* ctx; } ;
struct TYPE_10__ {int version; } ;
struct TYPE_9__ {TYPE_1__* method; } ;
struct TYPE_8__ {int version; } ;
typedef TYPE_6__ SSL_CONF_CTX ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,int,int*) ;

__attribute__((used)) static int FUNC_2(SSL_CONF_CTX *VAR_0, const char *VAR_1, int *VAR_2)
{
    int VAR_3;
    int VAR_4;

    if (VAR_0->ctx != ((void*)0))
        VAR_3 = VAR_0->ctx->method->version;
    else if (VAR_0->ssl != ((void*)0))
        VAR_3 = VAR_0->ssl->ctx->method->version;
    else
        return 0;
    if ((VAR_4 = FUNC_0(VAR_1)) < 0)
        return 0;
    return FUNC_1(VAR_3, VAR_4, VAR_2);
}
