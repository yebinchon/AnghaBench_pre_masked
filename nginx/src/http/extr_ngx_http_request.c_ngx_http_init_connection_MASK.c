
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_15__ ;
typedef struct TYPE_33__ TYPE_14__ ;
typedef struct TYPE_32__ TYPE_13__ ;
typedef struct TYPE_31__ TYPE_11__ ;
typedef struct TYPE_30__ TYPE_10__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_35__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
typedef int ngx_uint_t ;
struct TYPE_42__ {scalar_t__ enable; } ;
typedef TYPE_8__ ngx_http_ssl_srv_conf_t ;
struct TYPE_43__ {int naddrs; TYPE_11__* addrs; } ;
typedef TYPE_9__ ngx_http_port_t ;
struct TYPE_30__ {int * current_request; int * request; TYPE_15__* connection; } ;
typedef TYPE_10__ ngx_http_log_ctx_t ;
struct TYPE_39__ {scalar_t__ proxy_protocol; scalar_t__ ssl; scalar_t__ http2; TYPE_3__* default_server; } ;
struct TYPE_31__ {TYPE_5__ conf; int addr; int addr6; } ;
typedef TYPE_11__ ngx_http_in_addr_t ;
typedef TYPE_11__ ngx_http_in6_addr_t ;
struct TYPE_32__ {int ssl; int proxy_protocol; TYPE_5__* addr_conf; int conf_ctx; } ;
typedef TYPE_13__ ngx_http_connection_t ;
struct TYPE_33__ {int (* handler ) (TYPE_14__*) ;scalar_t__ ready; } ;
typedef TYPE_14__ ngx_event_t ;
struct TYPE_34__ {TYPE_7__* listening; TYPE_6__* log; TYPE_4__* write; TYPE_14__* read; int log_error; int number; int pool; TYPE_2__* local_sockaddr; TYPE_13__* data; } ;
typedef TYPE_15__ ngx_connection_t ;
struct TYPE_41__ {int post_accept_timeout; TYPE_9__* servers; } ;
struct TYPE_40__ {char* action; TYPE_10__* data; int handler; int connection; } ;
struct TYPE_38__ {int handler; } ;
struct TYPE_37__ {int ctx; } ;
struct TYPE_36__ {int sa_family; } ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_14__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_15__*,int *,int ) ;
 scalar_t__ FUNC_2 (TYPE_14__*,int ) ;
 int FUNC_3 (TYPE_15__*) ;
 int VAR_2 ;
 TYPE_8__* FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_14__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_14__*) ;
 int FUNC_7 (TYPE_14__*) ;
 int FUNC_8 (int *,int *,int) ;
 TYPE_10__* FUNC_9 (int ,int) ;
 TYPE_13__* FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_14__*,int *) ;
 int VAR_5 ;
 int FUNC_12 (TYPE_15__*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_13 (TYPE_14__*) ;

void
FUNC_14(ngx_connection_t *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_event_t *VAR_9;
    struct sockaddr_in *VAR_10;
    ngx_http_port_t *VAR_11;
    ngx_http_in_addr_t *VAR_12;
    ngx_http_log_ctx_t *VAR_13;
    ngx_http_connection_t *VAR_14;





    VAR_14 = FUNC_10(VAR_7->pool, sizeof(ngx_http_connection_t));
    if (VAR_14 == ((void*)0)) {
        FUNC_3(VAR_7);
        return;
    }

    VAR_7->data = VAR_14;



    VAR_11 = VAR_7->listening->servers;

    if (VAR_11->naddrs > 1) {







        if (FUNC_1(VAR_7, ((void*)0), 0) != VAR_1) {
            FUNC_3(VAR_7);
            return;
        }

        switch (VAR_7->local_sockaddr->sa_family) {
        default:
            VAR_10 = (struct sockaddr_in *) VAR_7->local_sockaddr;

            VAR_12 = VAR_11->addrs;



            for (VAR_8 = 0; VAR_8 < VAR_11->naddrs - 1; VAR_8++) {
                if (VAR_12[VAR_8].addr == VAR_10->sin_addr.s_addr) {
                    break;
                }
            }

            VAR_14->addr_conf = &VAR_12[VAR_8].conf;

            break;
        }

    } else {

        switch (VAR_7->local_sockaddr->sa_family) {
        default:
            VAR_12 = VAR_11->addrs;
            VAR_14->addr_conf = &VAR_12[0].conf;
            break;
        }
    }


    VAR_14->conf_ctx = VAR_14->addr_conf->default_server->ctx;

    VAR_13 = FUNC_9(VAR_7->pool, sizeof(ngx_http_log_ctx_t));
    if (VAR_13 == ((void*)0)) {
        FUNC_3(VAR_7);
        return;
    }

    VAR_13->connection = VAR_7;
    VAR_13->request = ((void*)0);
    VAR_13->current_request = ((void*)0);

    VAR_7->log->connection = VAR_7->number;
    VAR_7->log->handler = VAR_3;
    VAR_7->log->data = VAR_13;
    VAR_7->log->action = "waiting for request";

    VAR_7->log_error = VAR_0;

    VAR_9 = VAR_7->read;
    VAR_9->handler = FUNC_7;
    VAR_7->write->handler = VAR_2;
    if (VAR_14->addr_conf->proxy_protocol) {
        VAR_14->proxy_protocol = 1;
        VAR_7->log->action = "reading PROXY protocol";
    }

    if (VAR_9->ready) {


        if (VAR_6) {
            FUNC_11(VAR_9, &VAR_5);
            return;
        }

        VAR_9->handler(VAR_9);
        return;
    }

    FUNC_0(VAR_9, VAR_7->listening->post_accept_timeout);
    FUNC_12(VAR_7, 1);

    if (FUNC_2(VAR_9, 0) != VAR_1) {
        FUNC_3(VAR_7);
        return;
    }
}
