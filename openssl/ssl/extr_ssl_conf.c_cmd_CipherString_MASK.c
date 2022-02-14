
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ssl; scalar_t__ ctx; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 int FUNC_0 (scalar_t__,char const*) ;
 int FUNC_1 (scalar_t__,char const*) ;

__attribute__((used)) static int FUNC_2(SSL_CONF_CTX *VAR_0, const char *VAR_1)
{
    int VAR_2 = 1;

    if (VAR_0->ctx)
        VAR_2 = FUNC_0(VAR_0->ctx, VAR_1);
    if (VAR_0->ssl)
        VAR_2 = FUNC_1(VAR_0->ssl, VAR_1);
    return VAR_2 > 0;
}
