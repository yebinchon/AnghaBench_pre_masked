
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int flags; } ;
typedef TYPE_1__ SSL_CONF_CTX ;



unsigned int FUNC_0(SSL_CONF_CTX *VAR_0, unsigned int VAR_1)
{
    VAR_0->flags &= ~VAR_1;
    return VAR_0->flags;
}
