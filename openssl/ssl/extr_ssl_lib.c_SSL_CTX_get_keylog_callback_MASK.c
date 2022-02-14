
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keylog_callback; } ;
typedef int SSL_CTX_keylog_cb_func ;
typedef TYPE_1__ SSL_CTX ;



SSL_CTX_keylog_cb_func FUNC_0(const SSL_CTX *VAR_0)
{
    return VAR_0->keylog_callback;
}
