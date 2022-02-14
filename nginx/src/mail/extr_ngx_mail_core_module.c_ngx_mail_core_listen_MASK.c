
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_9__ ;
typedef struct TYPE_50__ TYPE_8__ ;
typedef struct TYPE_49__ TYPE_7__ ;
typedef struct TYPE_48__ TYPE_6__ ;
typedef struct TYPE_47__ TYPE_5__ ;
typedef struct TYPE_46__ TYPE_4__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_35__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_17__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_13__ ;
typedef struct TYPE_37__ TYPE_12__ ;
typedef struct TYPE_36__ TYPE_10__ ;


struct TYPE_51__ {int len; struct TYPE_51__* data; } ;
typedef TYPE_9__ u_char ;
typedef void* time_t ;
struct TYPE_36__ {int listen; size_t naddrs; scalar_t__ backlog; int rcvbuf; int sndbuf; int ipv6only; scalar_t__ port; int bind; int ssl; int so_keepalive; scalar_t__ tcp_keepcnt; TYPE_9__ addr_text; int socklen; int sockaddr; int wildcard; TYPE_8__* addrs; void* tcp_keepintvl; void* tcp_keepidle; int ctx; TYPE_9__ url; scalar_t__ err; } ;
typedef TYPE_10__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef TYPE_9__ ngx_str_t ;
struct TYPE_37__ {int listen; int line; int file; } ;
typedef TYPE_12__ ngx_mail_ssl_conf_t ;
struct TYPE_38__ {TYPE_3__* protocol; } ;
typedef TYPE_13__ ngx_mail_module_t ;
typedef TYPE_10__ ngx_mail_listen_t ;
struct TYPE_39__ {int listen; TYPE_3__* protocol; } ;
typedef TYPE_15__ ngx_mail_core_srv_conf_t ;
struct TYPE_44__ {size_t nelts; TYPE_10__* elts; } ;
struct TYPE_40__ {TYPE_35__ listen; } ;
typedef TYPE_16__ ngx_mail_core_main_conf_t ;
struct TYPE_41__ {TYPE_7__* conf_file; TYPE_4__* args; TYPE_2__* cycle; int ctx; int pool; } ;
typedef TYPE_17__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_50__ {TYPE_9__ name; int socklen; int sockaddr; } ;
struct TYPE_47__ {int data; } ;
struct TYPE_48__ {TYPE_5__ name; } ;
struct TYPE_49__ {int line; TYPE_6__ file; } ;
struct TYPE_46__ {size_t nelts; TYPE_9__* elts; } ;
struct TYPE_45__ {scalar_t__* port; } ;
struct TYPE_43__ {TYPE_1__** modules; } ;
struct TYPE_42__ {scalar_t__ type; TYPE_13__* ctx; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_10__* FUNC_0 (TYPE_35__*,size_t) ;
 void* FUNC_1 (TYPE_9__*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,TYPE_17__*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 TYPE_16__* FUNC_5 (TYPE_17__*,int ) ;
 TYPE_12__* FUNC_6 (TYPE_17__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_10__*,int) ;
 void* FUNC_8 (TYPE_9__*) ;
 void* FUNC_9 (TYPE_9__*,int) ;
 scalar_t__ FUNC_10 (int ,TYPE_10__*) ;
 scalar_t__ FUNC_11 (TYPE_9__*,char*) ;
 TYPE_9__* FUNC_12 (TYPE_9__*,TYPE_9__*,char) ;
 scalar_t__ FUNC_13 (TYPE_9__*,char*,int) ;

__attribute__((used)) static char *
FUNC_14(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_mail_core_srv_conf_t *VAR_12 = VAR_11;

    ngx_str_t *VAR_13, VAR_14;
    ngx_url_t VAR_15;
    ngx_uint_t VAR_16, VAR_17, VAR_18;
    ngx_mail_listen_t *VAR_19, *VAR_20;
    ngx_mail_module_t *VAR_21;
    ngx_mail_core_main_conf_t *VAR_22;

    VAR_12->listen = 1;

    VAR_13 = VAR_9->args->elts;

    FUNC_7(&VAR_15, sizeof(ngx_url_t));

    VAR_15.url = VAR_13[1];
    VAR_15.listen = 1;

    if (FUNC_10(VAR_9->pool, &VAR_15) != VAR_6) {
        if (VAR_15.err) {
            FUNC_3(VAR_4, VAR_9, 0,
                               "%s in \"%V\" of the \"listen\" directive",
                               VAR_15.err, &VAR_15.url);
        }

        return VAR_0;
    }

    VAR_22 = FUNC_5(VAR_9, VAR_7);

    VAR_19 = FUNC_0(&VAR_22->listen, VAR_15.naddrs);
    if (VAR_19 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_7(VAR_19, sizeof(ngx_mail_listen_t));

    VAR_19->backlog = VAR_3;
    VAR_19->rcvbuf = -1;
    VAR_19->sndbuf = -1;
    VAR_19->ctx = VAR_9->ctx;





    if (VAR_12->protocol == ((void*)0)) {
        for (VAR_18 = 0; VAR_9->cycle->modules[VAR_18]; VAR_18++) {
            if (VAR_9->cycle->modules[VAR_18]->type != VAR_5) {
                continue;
            }

            VAR_21 = VAR_9->cycle->modules[VAR_18]->ctx;

            if (VAR_21->protocol == ((void*)0)) {
                continue;
            }

            for (VAR_16 = 0; VAR_21->protocol->port[VAR_16]; VAR_16++) {
                if (VAR_21->protocol->port[VAR_16] == VAR_15.port) {
                    VAR_12->protocol = VAR_21->protocol;
                    break;
                }
            }
        }
    }

    for (VAR_16 = 2; VAR_16 < VAR_9->args->nelts; VAR_16++) {

        if (FUNC_11(VAR_13[VAR_16].data, "bind") == 0) {
            VAR_19->bind = 1;
            continue;
        }

        if (FUNC_13(VAR_13[VAR_16].data, "backlog=", 8) == 0) {
            VAR_19->backlog = FUNC_1(VAR_13[VAR_16].data + 8, VAR_13[VAR_16].len - 8);
            VAR_19->bind = 1;

            if (VAR_19->backlog == VAR_2 || VAR_19->backlog == 0) {
                FUNC_3(VAR_4, VAR_9, 0,
                                   "invalid backlog \"%V\"", &VAR_13[VAR_16]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_13(VAR_13[VAR_16].data, "rcvbuf=", 7) == 0) {
            VAR_14.len = VAR_13[VAR_16].len - 7;
            VAR_14.data = VAR_13[VAR_16].data + 7;

            VAR_19->rcvbuf = FUNC_8(&VAR_14);
            VAR_19->bind = 1;

            if (VAR_19->rcvbuf == VAR_2) {
                FUNC_3(VAR_4, VAR_9, 0,
                                   "invalid rcvbuf \"%V\"", &VAR_13[VAR_16]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_13(VAR_13[VAR_16].data, "sndbuf=", 7) == 0) {
            VAR_14.len = VAR_13[VAR_16].len - 7;
            VAR_14.data = VAR_13[VAR_16].data + 7;

            VAR_19->sndbuf = FUNC_8(&VAR_14);
            VAR_19->bind = 1;

            if (VAR_19->sndbuf == VAR_2) {
                FUNC_3(VAR_4, VAR_9, 0,
                                   "invalid sndbuf \"%V\"", &VAR_13[VAR_16]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_13(VAR_13[VAR_16].data, "ipv6only=o", 10) == 0) {
            FUNC_3(VAR_4, VAR_9, 0,
                               "bind ipv6only is not supported "
                               "on this platform");
            return VAR_0;

        }

        if (FUNC_11(VAR_13[VAR_16].data, "ssl") == 0) {
            FUNC_3(VAR_4, VAR_9, 0,
                               "the \"ssl\" parameter requires "
                               "ngx_mail_ssl_module");
            return VAR_0;

        }

        if (FUNC_13(VAR_13[VAR_16].data, "so_keepalive=", 13) == 0) {

            if (FUNC_11(&VAR_13[VAR_16].data[13], "on") == 0) {
                VAR_19->so_keepalive = 1;

            } else if (FUNC_11(&VAR_13[VAR_16].data[13], "off") == 0) {
                VAR_19->so_keepalive = 2;

            } else {
                FUNC_3(VAR_4, VAR_9, 0,
                                   "the \"so_keepalive\" parameter accepts "
                                   "only \"on\" or \"off\" on this platform");
                return VAR_0;


            }

            VAR_19->bind = 1;

            continue;
        }

        FUNC_3(VAR_4, VAR_9, 0,
                           "the invalid \"%V\" parameter", &VAR_13[VAR_16]);
        return VAR_0;
    }

    VAR_20 = VAR_22->listen.elts;

    for (VAR_17 = 0; VAR_17 < VAR_15.naddrs; VAR_17++) {
        VAR_19[VAR_17] = VAR_19[0];

        VAR_19[VAR_17].sockaddr = VAR_15.addrs[VAR_17].sockaddr;
        VAR_19[VAR_17].socklen = VAR_15.addrs[VAR_17].socklen;
        VAR_19[VAR_17].addr_text = VAR_15.addrs[VAR_17].name;
        VAR_19[VAR_17].wildcard = FUNC_4(VAR_19[VAR_17].sockaddr);

        for (VAR_16 = 0; VAR_16 < VAR_22->listen.nelts - VAR_15.naddrs + VAR_17; VAR_16++) {

            if (FUNC_2(VAR_20[VAR_16].sockaddr, VAR_20[VAR_16].socklen,
                                 VAR_19[VAR_17].sockaddr, VAR_19[VAR_17].socklen, 1)
                != VAR_6)
            {
                continue;
            }

            FUNC_3(VAR_4, VAR_9, 0,
                               "duplicate \"%V\" address and port pair",
                               &VAR_19[VAR_17].addr_text);
            return VAR_0;
        }
    }

    return VAR_1;
}
