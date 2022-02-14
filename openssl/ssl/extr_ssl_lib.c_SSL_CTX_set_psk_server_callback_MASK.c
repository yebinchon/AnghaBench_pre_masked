
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psk_server_callback; } ;
typedef int SSL_psk_server_cb_func ;
typedef TYPE_1__ SSL_CTX ;



void FUNC_0(SSL_CTX *VAR_0, SSL_psk_server_cb_func VAR_1)
{
    VAR_0->psk_server_callback = VAR_1;
}
