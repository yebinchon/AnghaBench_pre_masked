
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int timeout; TYPE_3__* data; int handler; int name; } ;
typedef TYPE_2__ ngx_resolver_ctx_t ;
struct TYPE_15__ {TYPE_2__* resolver_ctx; int host; } ;
typedef TYPE_3__ ngx_mail_session_t ;
struct TYPE_16__ {int resolver_timeout; int resolver; } ;
typedef TYPE_4__ ngx_mail_core_srv_conf_t ;
struct TYPE_17__ {TYPE_6__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_18__ {TYPE_1__* read; TYPE_3__* data; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_13__ {int handler; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_3__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(ngx_event_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_mail_session_t *VAR_6;
    ngx_resolver_ctx_t *VAR_7;
    ngx_mail_core_srv_conf_t *VAR_8;

    VAR_5 = VAR_4->data;
    VAR_6 = VAR_5->data;

    VAR_8 = FUNC_1(VAR_6, VAR_1);

    VAR_7 = FUNC_3(VAR_8->resolver, ((void*)0));
    if (VAR_7 == ((void*)0)) {
        FUNC_0(VAR_5);
        return;
    }

    VAR_7->name = VAR_6->host;
    VAR_7->handler = VAR_3;
    VAR_7->data = VAR_6;
    VAR_7->timeout = VAR_8->resolver_timeout;

    VAR_6->resolver_ctx = VAR_7;
    VAR_5->read->handler = VAR_2;

    if (FUNC_2(VAR_7) != VAR_0) {
        FUNC_0(VAR_5);
    }
}
