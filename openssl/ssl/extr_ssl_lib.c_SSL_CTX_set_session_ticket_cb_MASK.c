
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* ticket_cb_data; int decrypt_ticket_cb; int generate_ticket_cb; } ;
typedef int SSL_CTX_generate_session_ticket_fn ;
typedef int SSL_CTX_decrypt_session_ticket_fn ;
typedef TYPE_1__ SSL_CTX ;



int FUNC_0(SSL_CTX *VAR_0,
                                  SSL_CTX_generate_session_ticket_fn VAR_1,
                                  SSL_CTX_decrypt_session_ticket_fn VAR_2,
                                  void *VAR_3)
{
    VAR_0->generate_ticket_cb = VAR_1;
    VAR_0->decrypt_ticket_cb = VAR_2;
    VAR_0->ticket_cb_data = VAR_3;
    return 1;
}
