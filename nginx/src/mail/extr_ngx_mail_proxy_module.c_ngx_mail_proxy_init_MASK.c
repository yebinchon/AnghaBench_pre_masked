
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_19__ ;
typedef struct TYPE_22__ TYPE_18__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ len; } ;
struct TYPE_30__ {int protocol; int mail_state; TYPE_5__ out; TYPE_8__* proxy; TYPE_4__* connection; } ;
typedef TYPE_7__ ngx_mail_session_t ;
struct TYPE_22__ {TYPE_6__* connection; int log_error; TYPE_1__* log; int get; int * name; int socklen; int sockaddr; } ;
struct TYPE_31__ {TYPE_18__ upstream; int * buffer; } ;
typedef TYPE_8__ ngx_mail_proxy_ctx_t ;
struct TYPE_32__ {int buffer_size; } ;
typedef TYPE_9__ ngx_mail_proxy_conf_t ;
struct TYPE_20__ {int timeout; } ;
typedef TYPE_10__ ngx_mail_core_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {int name; int socklen; int sockaddr; } ;
typedef TYPE_11__ ngx_addr_t ;
struct TYPE_29__ {TYPE_19__* read; TYPE_3__* write; int pool; TYPE_7__* data; } ;
struct TYPE_27__ {int pool; TYPE_2__* read; TYPE_1__* log; } ;
struct TYPE_26__ {int handler; } ;
struct TYPE_25__ {int handler; } ;
struct TYPE_24__ {char* action; } ;
struct TYPE_23__ {int handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (TYPE_19__*,int ) ;
 int * FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_18__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_3 (TYPE_7__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (TYPE_7__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_8__* FUNC_6 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_7(ngx_mail_session_t *VAR_15, ngx_addr_t *VAR_16)
{
    ngx_int_t VAR_17;
    ngx_mail_proxy_ctx_t *VAR_18;
    ngx_mail_proxy_conf_t *VAR_19;
    ngx_mail_core_srv_conf_t *VAR_20;

    VAR_15->connection->log->action = "connecting to upstream";

    VAR_20 = FUNC_3(VAR_15, VAR_6);

    VAR_18 = FUNC_6(VAR_15->connection->pool, sizeof(ngx_mail_proxy_ctx_t));
    if (VAR_18 == ((void*)0)) {
        FUNC_5(VAR_15);
        return;
    }

    VAR_15->proxy = VAR_18;

    VAR_18->upstream.sockaddr = VAR_16->sockaddr;
    VAR_18->upstream.socklen = VAR_16->socklen;
    VAR_18->upstream.name = &VAR_16->name;
    VAR_18->upstream.get = VAR_4;
    VAR_18->upstream.log = VAR_15->connection->log;
    VAR_18->upstream.log_error = VAR_3;

    VAR_17 = FUNC_2(&VAR_18->upstream);

    if (VAR_17 == VAR_2 || VAR_17 == VAR_0 || VAR_17 == VAR_1) {
        FUNC_4(VAR_15);
        return;
    }

    FUNC_0(VAR_18->upstream.connection->read, VAR_20->timeout);

    VAR_18->upstream.connection->data = VAR_15;
    VAR_18->upstream.connection->pool = VAR_15->connection->pool;

    VAR_15->connection->read->handler = VAR_7;
    VAR_18->upstream.connection->write->handler = VAR_8;

    VAR_19 = FUNC_3(VAR_15, VAR_10);

    VAR_15->proxy->buffer = FUNC_1(VAR_15->connection->pool,
                                           VAR_19->buffer_size);
    if (VAR_15->proxy->buffer == ((void*)0)) {
        FUNC_4(VAR_15);
        return;
    }

    VAR_15->out.len = 0;

    switch (VAR_15->protocol) {

    case 128:
        VAR_18->upstream.connection->read->handler = VAR_11;
        VAR_15->mail_state = VAR_13;
        break;

    case 129:
        VAR_18->upstream.connection->read->handler = VAR_9;
        VAR_15->mail_state = VAR_5;
        break;

    default:
        VAR_18->upstream.connection->read->handler = VAR_12;
        VAR_15->mail_state = VAR_14;
        break;
    }
}
