
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ starttls; } ;
typedef TYPE_3__ ngx_mail_ssl_conf_t ;
struct TYPE_13__ {TYPE_1__* buffer; int smtp_to; int smtp_from; int smtp_helo; } ;
typedef TYPE_4__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {TYPE_2__* read; int * ssl; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_11__ {int handler; } ;
struct TYPE_10__ {int start; int last; int pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_mail_session_t *VAR_4, ngx_connection_t *VAR_5)
{
    return VAR_0;
}
