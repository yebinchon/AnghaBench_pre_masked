
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int psk_client_callback; } ;
typedef int SSL_psk_client_cb_func ;
typedef TYPE_1__ SSL ;



void FUNC_0(SSL *VAR_0, SSL_psk_client_cb_func VAR_1)
{
    VAR_0->psk_client_callback = VAR_1;
}
