
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_14__ {scalar_t__ starttls; } ;
typedef TYPE_4__ ngx_mail_ssl_conf_t ;
struct TYPE_15__ {int capability; int starttls_only_capability; int starttls_capability; int server_name; } ;
typedef TYPE_5__ ngx_mail_smtp_srv_conf_t ;
struct TYPE_12__ {int * data; int len; } ;
struct TYPE_11__ {int nelts; TYPE_3__* elts; } ;
struct TYPE_16__ {scalar_t__ command; int esmtp; int out; int smtp_to; int smtp_from; TYPE_2__ smtp_helo; TYPE_1__ args; scalar_t__ state; } ;
typedef TYPE_6__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int * ssl; int pool; } ;
typedef TYPE_7__ ngx_connection_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (TYPE_6__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_8, ngx_connection_t *VAR_9)
{
    ngx_str_t *VAR_10;
    ngx_mail_smtp_srv_conf_t *VAR_11;

    if (VAR_8->args.nelts != 1) {
        FUNC_4(&VAR_8->out, VAR_7);
        VAR_8->state = 0;
        return VAR_3;
    }

    VAR_10 = VAR_8->args.elts;

    VAR_8->smtp_helo.len = VAR_10[0].len;

    VAR_8->smtp_helo.data = FUNC_2(VAR_9->pool, VAR_10[0].len);
    if (VAR_8->smtp_helo.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_8->smtp_helo.data, VAR_10[0].data, VAR_10[0].len);

    FUNC_3(&VAR_8->smtp_from);
    FUNC_3(&VAR_8->smtp_to);

    VAR_11 = FUNC_0(VAR_8, VAR_5);

    if (VAR_8->command == VAR_4) {
        VAR_8->out = VAR_11->server_name;

    } else {
        VAR_8->esmtp = 1;
        VAR_8->out = VAR_11->capability;
    }

    return VAR_3;
}
