
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pem_password_cb ;
struct TYPE_3__ {int * default_passwd_callback; } ;
typedef TYPE_1__ SSL ;



void FUNC_0(SSL *VAR_0, pem_password_cb *VAR_1)
{
    VAR_0->default_passwd_callback = VAR_1;
}
