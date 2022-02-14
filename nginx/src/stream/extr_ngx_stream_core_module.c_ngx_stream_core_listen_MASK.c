
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_8__ ;
typedef struct TYPE_42__ TYPE_7__ ;
typedef struct TYPE_41__ TYPE_6__ ;
typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_4__ ;
typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_31__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


struct TYPE_41__ {int len; struct TYPE_41__* data; } ;
typedef TYPE_6__ u_char ;
typedef void* time_t ;
struct TYPE_42__ {int listen; size_t naddrs; scalar_t__ backlog; int rcvbuf; int sndbuf; scalar_t__ type; int ipv6only; int bind; int reuseport; int ssl; int so_keepalive; scalar_t__ tcp_keepcnt; int proxy_protocol; TYPE_6__ addr_text; int socklen; int sockaddr; int wildcard; TYPE_5__* addrs; void* tcp_keepintvl; void* tcp_keepidle; int ctx; TYPE_6__ url; scalar_t__ err; } ;
typedef TYPE_7__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_43__ {int listen; int line; int file; } ;
typedef TYPE_8__ ngx_stream_ssl_conf_t ;
typedef TYPE_7__ ngx_stream_listen_t ;
struct TYPE_32__ {int listen; } ;
typedef TYPE_10__ ngx_stream_core_srv_conf_t ;
struct TYPE_37__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_33__ {TYPE_31__ listen; } ;
typedef TYPE_11__ ngx_stream_core_main_conf_t ;
typedef TYPE_6__ ngx_str_t ;
struct TYPE_34__ {TYPE_4__* conf_file; TYPE_1__* args; int ctx; int pool; } ;
typedef TYPE_13__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_40__ {TYPE_6__ name; int socklen; int sockaddr; } ;
struct TYPE_36__ {int data; } ;
struct TYPE_38__ {TYPE_2__ name; } ;
struct TYPE_39__ {int line; TYPE_3__ file; } ;
struct TYPE_35__ {size_t nelts; TYPE_6__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__* FUNC_0 (TYPE_31__*,size_t) ;
 void* FUNC_1 (TYPE_6__*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int ,TYPE_13__*,int ,char*,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,int) ;
 void* FUNC_6 (TYPE_6__*) ;
 void* FUNC_7 (TYPE_6__*,int) ;
 scalar_t__ FUNC_8 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_9 (TYPE_6__*,char*) ;
 TYPE_11__* FUNC_10 (TYPE_13__*,int ) ;
 TYPE_8__* FUNC_11 (TYPE_13__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__* FUNC_12 (TYPE_6__*,TYPE_6__*,char) ;
 scalar_t__ FUNC_13 (TYPE_6__*,char*,int) ;

__attribute__((used)) static char *
FUNC_14(ngx_conf_t *VAR_10, ngx_command_t *VAR_11, void *VAR_12)
{
    ngx_stream_core_srv_conf_t *VAR_13 = VAR_12;

    ngx_str_t *VAR_14, VAR_15;
    ngx_url_t VAR_16;
    ngx_uint_t VAR_17, VAR_18, VAR_19;
    ngx_stream_listen_t *VAR_20, *VAR_21;
    ngx_stream_core_main_conf_t *VAR_22;

    VAR_13->listen = 1;

    VAR_14 = VAR_10->args->elts;

    FUNC_5(&VAR_16, sizeof(ngx_url_t));

    VAR_16.url = VAR_14[1];
    VAR_16.listen = 1;

    if (FUNC_8(VAR_10->pool, &VAR_16) != VAR_5) {
        if (VAR_16.err) {
            FUNC_3(VAR_4, VAR_10, 0,
                               "%s in \"%V\" of the \"listen\" directive",
                               VAR_16.err, &VAR_16.url);
        }

        return VAR_0;
    }

    VAR_22 = FUNC_10(VAR_10, VAR_8);

    VAR_20 = FUNC_0(&VAR_22->listen, VAR_16.naddrs);
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_5(VAR_20, sizeof(ngx_stream_listen_t));

    VAR_20->backlog = VAR_3;
    VAR_20->rcvbuf = -1;
    VAR_20->sndbuf = -1;
    VAR_20->type = VAR_7;
    VAR_20->ctx = VAR_10->ctx;





    VAR_19 = 0;

    for (VAR_17 = 2; VAR_17 < VAR_10->args->nelts; VAR_17++) {


        if (FUNC_9(VAR_14[VAR_17].data, "udp") == 0) {
            VAR_20->type = VAR_6;
            continue;
        }


        if (FUNC_9(VAR_14[VAR_17].data, "bind") == 0) {
            VAR_20->bind = 1;
            continue;
        }

        if (FUNC_13(VAR_14[VAR_17].data, "backlog=", 8) == 0) {
            VAR_20->backlog = FUNC_1(VAR_14[VAR_17].data + 8, VAR_14[VAR_17].len - 8);
            VAR_20->bind = 1;

            if (VAR_20->backlog == VAR_2 || VAR_20->backlog == 0) {
                FUNC_3(VAR_4, VAR_10, 0,
                                   "invalid backlog \"%V\"", &VAR_14[VAR_17]);
                return VAR_0;
            }

            VAR_19 = 1;

            continue;
        }

        if (FUNC_13(VAR_14[VAR_17].data, "rcvbuf=", 7) == 0) {
            VAR_15.len = VAR_14[VAR_17].len - 7;
            VAR_15.data = VAR_14[VAR_17].data + 7;

            VAR_20->rcvbuf = FUNC_6(&VAR_15);
            VAR_20->bind = 1;

            if (VAR_20->rcvbuf == VAR_2) {
                FUNC_3(VAR_4, VAR_10, 0,
                                   "invalid rcvbuf \"%V\"", &VAR_14[VAR_17]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_13(VAR_14[VAR_17].data, "sndbuf=", 7) == 0) {
            VAR_15.len = VAR_14[VAR_17].len - 7;
            VAR_15.data = VAR_14[VAR_17].data + 7;

            VAR_20->sndbuf = FUNC_6(&VAR_15);
            VAR_20->bind = 1;

            if (VAR_20->sndbuf == VAR_2) {
                FUNC_3(VAR_4, VAR_10, 0,
                                   "invalid sndbuf \"%V\"", &VAR_14[VAR_17]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_13(VAR_14[VAR_17].data, "ipv6only=o", 10) == 0) {
            FUNC_3(VAR_4, VAR_10, 0,
                               "bind ipv6only is not supported "
                               "on this platform");
            return VAR_0;

        }

        if (FUNC_9(VAR_14[VAR_17].data, "reuseport") == 0) {




            FUNC_3(VAR_4, VAR_10, 0,
                               "reuseport is not supported "
                               "on this platform, ignored");

            continue;
        }

        if (FUNC_9(VAR_14[VAR_17].data, "ssl") == 0) {
            FUNC_3(VAR_4, VAR_10, 0,
                               "the \"ssl\" parameter requires "
                               "ngx_stream_ssl_module");
            return VAR_0;

        }

        if (FUNC_13(VAR_14[VAR_17].data, "so_keepalive=", 13) == 0) {

            if (FUNC_9(&VAR_14[VAR_17].data[13], "on") == 0) {
                VAR_20->so_keepalive = 1;

            } else if (FUNC_9(&VAR_14[VAR_17].data[13], "off") == 0) {
                VAR_20->so_keepalive = 2;

            } else {
                FUNC_3(VAR_4, VAR_10, 0,
                                   "the \"so_keepalive\" parameter accepts "
                                   "only \"on\" or \"off\" on this platform");
                return VAR_0;


            }

            VAR_20->bind = 1;

            continue;
        }

        if (FUNC_9(VAR_14[VAR_17].data, "proxy_protocol") == 0) {
            VAR_20->proxy_protocol = 1;
            continue;
        }

        FUNC_3(VAR_4, VAR_10, 0,
                           "the invalid \"%V\" parameter", &VAR_14[VAR_17]);
        return VAR_0;
    }

    if (VAR_20->type == VAR_6) {
        if (VAR_19) {
            return "\"backlog\" parameter is incompatible with \"udp\"";
        }







        if (VAR_20->so_keepalive) {
            return "\"so_keepalive\" parameter is incompatible with \"udp\"";
        }

        if (VAR_20->proxy_protocol) {
            return "\"proxy_protocol\" parameter is incompatible with \"udp\"";
        }
    }

    VAR_21 = VAR_22->listen.elts;

    for (VAR_18 = 0; VAR_18 < VAR_16.naddrs; VAR_18++) {
        VAR_20[VAR_18] = VAR_20[0];

        VAR_20[VAR_18].sockaddr = VAR_16.addrs[VAR_18].sockaddr;
        VAR_20[VAR_18].socklen = VAR_16.addrs[VAR_18].socklen;
        VAR_20[VAR_18].addr_text = VAR_16.addrs[VAR_18].name;
        VAR_20[VAR_18].wildcard = FUNC_4(VAR_20[VAR_18].sockaddr);

        for (VAR_17 = 0; VAR_17 < VAR_22->listen.nelts - VAR_16.naddrs + VAR_18; VAR_17++) {
            if (VAR_20[VAR_18].type != VAR_21[VAR_17].type) {
                continue;
            }

            if (FUNC_2(VAR_21[VAR_17].sockaddr, VAR_21[VAR_17].socklen,
                                 VAR_20[VAR_18].sockaddr, VAR_20[VAR_18].socklen, 1)
                != VAR_5)
            {
                continue;
            }

            FUNC_3(VAR_4, VAR_10, 0,
                               "duplicate \"%V\" address and port pair",
                               &VAR_20[VAR_18].addr_text);
            return VAR_0;
        }
    }

    return VAR_1;
}
