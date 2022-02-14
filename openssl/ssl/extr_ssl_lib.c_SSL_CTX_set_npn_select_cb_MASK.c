
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* npn_select_cb_arg; int npn_select_cb; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef int SSL_CTX_npn_select_cb_func ;
typedef TYPE_2__ SSL_CTX ;



void FUNC_0(SSL_CTX *VAR_0,
                               SSL_CTX_npn_select_cb_func VAR_1,
                               void *VAR_2)
{
    VAR_0->ext.npn_select_cb = VAR_1;
    VAR_0->ext.npn_select_cb_arg = VAR_2;
}
