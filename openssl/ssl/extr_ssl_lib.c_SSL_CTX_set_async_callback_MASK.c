
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int async_cb; } ;
typedef int SSL_async_callback_fn ;
typedef TYPE_1__ SSL_CTX ;



int FUNC_0(SSL_CTX *VAR_0, SSL_async_callback_fn VAR_1)
{
    VAR_0->async_cb = VAR_1;
    return 1;
}
