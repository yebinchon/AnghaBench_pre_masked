
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long options; } ;
typedef TYPE_1__ SSL_CTX ;



unsigned long FUNC_0(SSL_CTX *VAR_0, unsigned long VAR_1)
{
    return VAR_0->options &= ~VAR_1;
}
