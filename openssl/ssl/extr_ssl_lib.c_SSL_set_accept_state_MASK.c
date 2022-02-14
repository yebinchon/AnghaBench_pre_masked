
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int server; TYPE_1__* method; int handshake_func; scalar_t__ shutdown; } ;
struct TYPE_6__ {int ssl_accept; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(SSL *VAR_0)
{
    VAR_0->server = 1;
    VAR_0->shutdown = 0;
    FUNC_1(VAR_0);
    VAR_0->handshake_func = VAR_0->method->ssl_accept;
    FUNC_0(VAR_0);
}
