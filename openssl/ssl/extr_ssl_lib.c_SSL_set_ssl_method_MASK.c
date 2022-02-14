
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ version; int (* ssl_new ) (TYPE_1__*) ;int (* ssl_connect ) (TYPE_1__*) ;int (* ssl_accept ) (TYPE_1__*) ;int (* ssl_free ) (TYPE_1__*) ;} ;
struct TYPE_8__ {int (* handshake_func ) (TYPE_1__*) ;TYPE_2__ const* method; } ;
typedef TYPE_2__ const SSL_METHOD ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(SSL *VAR_0, const SSL_METHOD *VAR_1)
{
    int VAR_2 = 1;

    if (VAR_0->method != VAR_1) {
        const SSL_METHOD *VAR_3 = VAR_0->method;
        int (*VAR_4) (SSL *) = VAR_0->handshake_func;

        if (VAR_3->version == VAR_1->version)
            VAR_0->method = VAR_1;
        else {
            VAR_3->ssl_free(VAR_0);
            VAR_0->method = VAR_1;
            VAR_2 = VAR_0->method->ssl_new(VAR_0);
        }

        if (VAR_4 == VAR_3->ssl_connect)
            VAR_0->handshake_func = VAR_1->ssl_connect;
        else if (VAR_4 == VAR_3->ssl_accept)
            VAR_0->handshake_func = VAR_1->ssl_accept;
    }
    return VAR_2;
}
