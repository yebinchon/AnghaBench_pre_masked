
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long flags; } ;
struct TYPE_5__ {TYPE_1__ dane; } ;
typedef TYPE_2__ SSL_CTX ;



unsigned long FUNC_0(SSL_CTX *VAR_0, unsigned long VAR_1)
{
    unsigned long VAR_2 = VAR_0->dane.flags;

    VAR_0->dane.flags |= VAR_1;
    return VAR_2;
}
