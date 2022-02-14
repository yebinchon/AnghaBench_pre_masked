
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef int u_char ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_28__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
typedef int ngx_uint_t ;
struct TYPE_30__ {int ssl; scalar_t__ enable; } ;
typedef TYPE_4__ ngx_mail_ssl_conf_t ;
struct TYPE_31__ {int * addr_text; TYPE_12__* connection; int srv_conf; int main_conf; int signature; } ;
typedef TYPE_5__ ngx_mail_session_t ;
struct TYPE_32__ {int naddrs; TYPE_8__* addrs; } ;
typedef TYPE_6__ ngx_mail_port_t ;
struct TYPE_33__ {TYPE_5__* session; int * client; } ;
typedef TYPE_7__ ngx_mail_log_ctx_t ;
struct TYPE_24__ {scalar_t__ ssl; int addr_text; TYPE_3__* ctx; } ;
struct TYPE_34__ {TYPE_11__ conf; int addr; int addr6; } ;
typedef TYPE_8__ ngx_mail_in_addr_t ;
typedef TYPE_8__ ngx_mail_in6_addr_t ;
struct TYPE_23__ {int error_log; } ;
typedef TYPE_10__ ngx_mail_core_srv_conf_t ;
typedef TYPE_11__ ngx_mail_addr_conf_t ;
struct TYPE_25__ {TYPE_21__* log; int log_error; int number; int addr_text; int pool; int socklen; int sockaddr; TYPE_5__* data; struct sockaddr* local_sockaddr; TYPE_1__* listening; } ;
typedef TYPE_12__ ngx_connection_t ;
struct TYPE_29__ {int srv_conf; int main_conf; } ;
struct TYPE_27__ {char* action; TYPE_7__* data; int handler; int connection; } ;
struct TYPE_26__ {TYPE_6__* servers; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_12__*,int *,int ) ;
 int FUNC_1 (int ,TYPE_21__*,int ,char*,int ,size_t,int *,int *) ;
 int FUNC_2 (TYPE_12__*) ;
 int VAR_5 ;
 void* FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_12__*) ;
 int VAR_6 ;
 int FUNC_5 (int *,TYPE_12__*) ;
 int VAR_7 ;
 int FUNC_6 (int *,int *,int) ;
 TYPE_7__* FUNC_7 (int ,int) ;
 TYPE_5__* FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_12__*,int ) ;
 size_t FUNC_10 (int ,int ,int *,int,int) ;

void
FUNC_11(ngx_connection_t *VAR_8)
{
    size_t VAR_9;
    ngx_uint_t VAR_10;
    ngx_mail_port_t *VAR_11;
    struct sockaddr *VAR_12;
    struct sockaddr_in *VAR_13;
    ngx_mail_log_ctx_t *VAR_14;
    ngx_mail_in_addr_t *VAR_15;
    ngx_mail_session_t *VAR_16;
    ngx_mail_addr_conf_t *VAR_17;
    ngx_mail_core_srv_conf_t *VAR_18;
    u_char VAR_19[VAR_4];
    VAR_11 = VAR_8->listening->servers;

    if (VAR_11->naddrs > 1) {
        if (FUNC_0(VAR_8, ((void*)0), 0) != VAR_3) {
            FUNC_2(VAR_8);
            return;
        }

        VAR_12 = VAR_8->local_sockaddr;

        switch (VAR_12->sa_family) {
        default:
            VAR_13 = (struct sockaddr_in *) VAR_12;

            VAR_15 = VAR_11->addrs;



            for (VAR_10 = 0; VAR_10 < VAR_11->naddrs - 1; VAR_10++) {
                if (VAR_15[VAR_10].addr == VAR_13->sin_addr.s_addr) {
                    break;
                }
            }

            VAR_17 = &VAR_15[VAR_10].conf;

            break;
        }

    } else {
        switch (VAR_8->local_sockaddr->sa_family) {
        default:
            VAR_15 = VAR_11->addrs;
            VAR_17 = &VAR_15[0].conf;
            break;
        }
    }

    VAR_16 = FUNC_8(VAR_8->pool, sizeof(ngx_mail_session_t));
    if (VAR_16 == ((void*)0)) {
        FUNC_2(VAR_8);
        return;
    }

    VAR_16->signature = VAR_2;

    VAR_16->main_conf = VAR_17->ctx->main_conf;
    VAR_16->srv_conf = VAR_17->ctx->srv_conf;

    VAR_16->addr_text = &VAR_17->addr_text;

    VAR_8->data = VAR_16;
    VAR_16->connection = VAR_8;

    VAR_18 = FUNC_3(VAR_16, VAR_5);

    FUNC_9(VAR_8, VAR_18->error_log);

    VAR_9 = FUNC_10(VAR_8->sockaddr, VAR_8->socklen, VAR_19, VAR_4, 1);

    FUNC_1(VAR_1, VAR_8->log, 0, "*%uA client %*s connected to %V",
                  VAR_8->number, VAR_9, VAR_19, VAR_16->addr_text);

    VAR_14 = FUNC_7(VAR_8->pool, sizeof(ngx_mail_log_ctx_t));
    if (VAR_14 == ((void*)0)) {
        FUNC_2(VAR_8);
        return;
    }

    VAR_14->client = &VAR_8->addr_text;
    VAR_14->session = VAR_16;

    VAR_8->log->connection = VAR_8->number;
    VAR_8->log->handler = VAR_6;
    VAR_8->log->data = VAR_14;
    VAR_8->log->action = "sending client greeting line";

    VAR_8->log_error = VAR_0;
    FUNC_4(VAR_8);
}
