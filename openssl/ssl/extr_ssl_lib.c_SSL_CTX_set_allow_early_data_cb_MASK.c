
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* allow_early_data_cb_data; int allow_early_data_cb; } ;
typedef int SSL_allow_early_data_cb_fn ;
typedef TYPE_1__ SSL_CTX ;



void FUNC_0(SSL_CTX *VAR_0,
                                     SSL_allow_early_data_cb_fn VAR_1,
                                     void *VAR_2)
{
    VAR_0->allow_early_data_cb = VAR_1;
    VAR_0->allow_early_data_cb_data = VAR_2;
}
