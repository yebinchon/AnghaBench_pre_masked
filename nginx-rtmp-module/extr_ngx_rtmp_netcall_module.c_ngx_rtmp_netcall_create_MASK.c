
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;


struct TYPE_23__ {TYPE_8__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_24__ {int log; int bufsize; int timeout; } ;
typedef TYPE_3__ ngx_rtmp_netcall_srv_conf_t ;
struct TYPE_25__ {int detached; struct TYPE_25__* next; int * out; TYPE_7__* pc; int * handle; int sink; int filter; TYPE_2__* session; int url; int bufsize; int timeout; int * arg; } ;
typedef TYPE_4__ ngx_rtmp_netcall_session_t ;
struct TYPE_26__ {int argsize; int arg; int * (* create ) (TYPE_2__*,int ,int *) ;int * handle; int sink; int filter; int url; } ;
typedef TYPE_5__ ngx_rtmp_netcall_init_t ;
struct TYPE_27__ {TYPE_4__* cs; } ;
typedef TYPE_6__ ngx_rtmp_netcall_ctx_t ;
typedef int ngx_pool_t ;
struct TYPE_28__ {TYPE_8__* connection; TYPE_4__* data; int free; int get; int log; } ;
typedef TYPE_7__ ngx_peer_connection_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_29__ {scalar_t__ destroyed; TYPE_12__* write; TYPE_1__* read; int log; int * pool; TYPE_4__* data; } ;
typedef TYPE_8__ ngx_connection_t ;
struct TYPE_22__ {int handler; } ;
struct TYPE_21__ {int (* handler ) (TYPE_12__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_8__*) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int *,int) ;
 TYPE_6__* FUNC_7 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_8 (TYPE_2__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_12__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_6__*,int ) ;
 int * FUNC_11 (TYPE_2__*,int ,int *) ;

ngx_int_t
FUNC_12(ngx_rtmp_session_t *VAR_8, ngx_rtmp_netcall_init_t *VAR_9)
{
    ngx_rtmp_netcall_ctx_t *VAR_10;
    ngx_peer_connection_t *VAR_11;
    ngx_rtmp_netcall_session_t *VAR_12;
    ngx_rtmp_netcall_srv_conf_t *VAR_13;
    ngx_connection_t *VAR_14, *VAR_15;
    ngx_pool_t *VAR_16;
    ngx_int_t VAR_17;

    VAR_16 = ((void*)0);
    VAR_14 = VAR_8->connection;

    VAR_13 = FUNC_8(VAR_8, VAR_6);
    if (VAR_13 == ((void*)0)) {
        goto error;
    }


    VAR_10 = FUNC_7(VAR_8, VAR_6);
    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_6(VAR_14->pool,
                sizeof(ngx_rtmp_netcall_ctx_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_1;
        }
        FUNC_10(VAR_8, VAR_10, VAR_6);
    }





    VAR_16 = FUNC_1(4096, VAR_13->log);
    if (VAR_16 == ((void*)0)) {
        goto error;
    }

    VAR_11 = FUNC_6(VAR_16, sizeof(ngx_peer_connection_t));
    if (VAR_11 == ((void*)0)) {
        goto error;
    }

    VAR_12 = FUNC_6(VAR_16, sizeof(ngx_rtmp_netcall_session_t));
    if (VAR_12 == ((void*)0)) {
        goto error;
    }


    if (VAR_9->argsize) {
        VAR_12->arg = FUNC_6(VAR_16, VAR_9->argsize);
        if (VAR_12->arg == ((void*)0)) {
            goto error;
        }
        FUNC_5(VAR_12->arg, VAR_9->arg, VAR_9->argsize);
    }

    VAR_12->timeout = VAR_13->timeout;
    VAR_12->bufsize = VAR_13->bufsize;
    VAR_12->url = VAR_9->url;
    VAR_12->session = VAR_8;
    VAR_12->filter = VAR_9->filter;
    VAR_12->sink = VAR_9->sink;
    VAR_12->handle = VAR_9->handle;
    if (VAR_12->handle == ((void*)0)) {
        VAR_12->detached = 1;
    }

    VAR_11->log = VAR_13->log;
    VAR_11->get = VAR_5;
    VAR_11->free = VAR_4;
    VAR_11->data = VAR_12;


    VAR_17 = FUNC_3(VAR_11);
    if (VAR_17 != VAR_3 && VAR_17 != VAR_0 ) {
        FUNC_4(VAR_2, VAR_8->connection->log, 0,
                "netcall: connection failed");
        goto error;
    }

    VAR_15 = VAR_11->connection;
    VAR_15->data = VAR_12;
    VAR_15->pool = VAR_16;
    VAR_12->pc = VAR_11;

    VAR_12->out = VAR_9->create(VAR_8, VAR_9->arg, VAR_16);
    if (VAR_12->out == ((void*)0)) {
        FUNC_4(VAR_2, VAR_8->connection->log, 0,
                "netcall: creation failed");
        FUNC_0(VAR_11->connection);
        goto error;
    }

    VAR_15->write->handler = FUNC_9;
    VAR_15->read->handler = VAR_7;

    if (!VAR_12->detached) {
        VAR_12->next = VAR_10->cs;
        VAR_10->cs = VAR_12;
    }

    FUNC_9(VAR_15->write);

    return VAR_14->destroyed ? VAR_1 : VAR_3;

error:
    if (VAR_16) {
        FUNC_2(VAR_16);
    }

    return VAR_1;
}
