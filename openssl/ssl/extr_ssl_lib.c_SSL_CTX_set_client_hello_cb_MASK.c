
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* client_hello_cb_arg; int client_hello_cb; } ;
typedef int SSL_client_hello_cb_fn ;
typedef TYPE_1__ SSL_CTX ;



void FUNC_0(SSL_CTX *VAR_0, SSL_client_hello_cb_fn VAR_1,
                                 void *VAR_2)
{
    VAR_0->client_hello_cb = VAR_1;
    VAR_0->client_hello_cb_arg = VAR_2;
}
