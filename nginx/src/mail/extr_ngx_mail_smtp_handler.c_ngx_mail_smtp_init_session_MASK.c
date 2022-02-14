
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {int socklen; TYPE_2__* sockaddr; } ;
struct TYPE_22__ {int timeout; TYPE_6__* data; int handler; TYPE_3__ addr; } ;
typedef TYPE_5__ ngx_resolver_ctx_t ;
struct TYPE_23__ {TYPE_5__* resolver_ctx; int host; } ;
typedef TYPE_6__ ngx_mail_session_t ;
struct TYPE_24__ {int resolver_timeout; int * resolver; } ;
typedef TYPE_7__ ngx_mail_core_srv_conf_t ;
struct TYPE_25__ {TYPE_4__* read; int socklen; TYPE_2__* sockaddr; TYPE_1__* log; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_21__ {int handler; } ;
struct TYPE_19__ {scalar_t__ sa_family; } ;
struct TYPE_18__ {char* action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_8__*) ;
 int VAR_2 ;
 TYPE_7__* FUNC_1 (TYPE_6__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*,TYPE_8__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 TYPE_5__* FUNC_4 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_5(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8)
{
    ngx_resolver_ctx_t *VAR_9;
    ngx_mail_core_srv_conf_t *VAR_10;

    VAR_10 = FUNC_1(VAR_7, VAR_2);

    if (VAR_10->resolver == ((void*)0)) {
        VAR_7->host = VAR_6;
        FUNC_2(VAR_7, VAR_8);
        return;
    }
    VAR_8->log->action = "in resolving client address";

    VAR_9 = FUNC_4(VAR_10->resolver, ((void*)0));
    if (VAR_9 == ((void*)0)) {
        FUNC_0(VAR_8);
        return;
    }

    VAR_9->addr.sockaddr = VAR_8->sockaddr;
    VAR_9->addr.socklen = VAR_8->socklen;
    VAR_9->handler = VAR_4;
    VAR_9->data = VAR_7;
    VAR_9->timeout = VAR_10->resolver_timeout;

    VAR_7->resolver_ctx = VAR_9;
    VAR_8->read->handler = VAR_3;

    if (FUNC_3(VAR_9) != VAR_1) {
        FUNC_0(VAR_8);
    }
}
