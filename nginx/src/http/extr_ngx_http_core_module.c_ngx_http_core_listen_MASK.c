
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {int len; struct TYPE_26__* data; } ;
typedef TYPE_3__ u_char ;
typedef void* time_t ;
struct TYPE_27__ {int listen; int default_port; int backlog; int rcvbuf; int sndbuf; int setfib; int fastopen; int ipv6only; int default_server; int set; int bind; char* accept_filter; int deferred_accept; int reuseport; int ssl; int http2; int so_keepalive; int tcp_keepcnt; int proxy_protocol; size_t naddrs; int sockaddr; int wildcard; TYPE_2__* addrs; int addr_text; int socklen; void* tcp_keepintvl; void* tcp_keepidle; TYPE_3__ url; scalar_t__ err; } ;
typedef TYPE_4__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef TYPE_3__ ngx_str_t ;
typedef TYPE_4__ ngx_http_listen_opt_t ;
struct TYPE_28__ {int listen; } ;
typedef TYPE_7__ ngx_http_core_srv_conf_t ;
struct TYPE_29__ {TYPE_1__* args; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_25__ {int name; int socklen; int sockaddr; } ;
struct TYPE_24__ {size_t nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,TYPE_8__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_7__*,TYPE_4__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*,int) ;
 void* FUNC_5 (TYPE_3__*) ;
 void* FUNC_6 (TYPE_3__*,int) ;
 scalar_t__ FUNC_7 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,char*) ;
 TYPE_3__* FUNC_9 (TYPE_3__*,TYPE_3__*,char) ;
 scalar_t__ FUNC_10 (TYPE_3__*,char*,int) ;

__attribute__((used)) static char *
FUNC_11(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    ngx_http_core_srv_conf_t *VAR_10 = VAR_9;

    ngx_str_t *VAR_11, VAR_12;
    ngx_url_t VAR_13;
    ngx_uint_t VAR_14;
    ngx_http_listen_opt_t VAR_15;

    VAR_10->listen = 1;

    VAR_11 = VAR_7->args->elts;

    FUNC_4(&VAR_13, sizeof(ngx_url_t));

    VAR_13.url = VAR_11[1];
    VAR_13.listen = 1;
    VAR_13.default_port = 80;

    if (FUNC_7(VAR_7->pool, &VAR_13) != VAR_6) {
        if (VAR_13.err) {
            FUNC_1(VAR_4, VAR_7, 0,
                               "%s in \"%V\" of the \"listen\" directive",
                               VAR_13.err, &VAR_13.url);
        }

        return VAR_0;
    }

    FUNC_4(&VAR_15, sizeof(ngx_http_listen_opt_t));

    VAR_15.backlog = VAR_3;
    VAR_15.rcvbuf = -1;
    VAR_15.sndbuf = -1;
    for (VAR_14 = 2; VAR_14 < VAR_7->args->nelts; VAR_14++) {

        if (FUNC_8(VAR_11[VAR_14].data, "default_server") == 0
            || FUNC_8(VAR_11[VAR_14].data, "default") == 0)
        {
            VAR_15.default_server = 1;
            continue;
        }

        if (FUNC_8(VAR_11[VAR_14].data, "bind") == 0) {
            VAR_15.set = 1;
            VAR_15.bind = 1;
            continue;
        }
        if (FUNC_10(VAR_11[VAR_14].data, "backlog=", 8) == 0) {
            VAR_15.backlog = FUNC_0(VAR_11[VAR_14].data + 8, VAR_11[VAR_14].len - 8);
            VAR_15.set = 1;
            VAR_15.bind = 1;

            if (VAR_15.backlog == VAR_2 || VAR_15.backlog == 0) {
                FUNC_1(VAR_4, VAR_7, 0,
                                   "invalid backlog \"%V\"", &VAR_11[VAR_14]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_10(VAR_11[VAR_14].data, "rcvbuf=", 7) == 0) {
            VAR_12.len = VAR_11[VAR_14].len - 7;
            VAR_12.data = VAR_11[VAR_14].data + 7;

            VAR_15.rcvbuf = FUNC_5(&VAR_12);
            VAR_15.set = 1;
            VAR_15.bind = 1;

            if (VAR_15.rcvbuf == VAR_2) {
                FUNC_1(VAR_4, VAR_7, 0,
                                   "invalid rcvbuf \"%V\"", &VAR_11[VAR_14]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_10(VAR_11[VAR_14].data, "sndbuf=", 7) == 0) {
            VAR_12.len = VAR_11[VAR_14].len - 7;
            VAR_12.data = VAR_11[VAR_14].data + 7;

            VAR_15.sndbuf = FUNC_5(&VAR_12);
            VAR_15.set = 1;
            VAR_15.bind = 1;

            if (VAR_15.sndbuf == VAR_2) {
                FUNC_1(VAR_4, VAR_7, 0,
                                   "invalid sndbuf \"%V\"", &VAR_11[VAR_14]);
                return VAR_0;
            }

            continue;
        }

        if (FUNC_10(VAR_11[VAR_14].data, "accept_filter=", 14) == 0) {





            FUNC_1(VAR_4, VAR_7, 0,
                               "accept filters \"%V\" are not supported "
                               "on this platform, ignored",
                               &VAR_11[VAR_14]);

            continue;
        }

        if (FUNC_8(VAR_11[VAR_14].data, "deferred") == 0) {





            FUNC_1(VAR_4, VAR_7, 0,
                               "the deferred accept is not supported "
                               "on this platform, ignored");

            continue;
        }

        if (FUNC_10(VAR_11[VAR_14].data, "ipv6only=o", 10) == 0) {
            FUNC_1(VAR_4, VAR_7, 0,
                               "ipv6only is not supported "
                               "on this platform");
            return VAR_0;

        }

        if (FUNC_8(VAR_11[VAR_14].data, "reuseport") == 0) {





            FUNC_1(VAR_4, VAR_7, 0,
                               "reuseport is not supported "
                               "on this platform, ignored");

            continue;
        }

        if (FUNC_8(VAR_11[VAR_14].data, "ssl") == 0) {




            FUNC_1(VAR_4, VAR_7, 0,
                               "the \"ssl\" parameter requires "
                               "ngx_http_ssl_module");
            return VAR_0;

        }

        if (FUNC_8(VAR_11[VAR_14].data, "http2") == 0) {




            FUNC_1(VAR_4, VAR_7, 0,
                               "the \"http2\" parameter requires "
                               "ngx_http_v2_module");
            return VAR_0;

        }

        if (FUNC_8(VAR_11[VAR_14].data, "spdy") == 0) {
            FUNC_1(VAR_5, VAR_7, 0,
                               "invalid parameter \"spdy\": "
                               "ngx_http_spdy_module was superseded "
                               "by ngx_http_v2_module");
            continue;
        }

        if (FUNC_10(VAR_11[VAR_14].data, "so_keepalive=", 13) == 0) {

            if (FUNC_8(&VAR_11[VAR_14].data[13], "on") == 0) {
                VAR_15.so_keepalive = 1;

            } else if (FUNC_8(&VAR_11[VAR_14].data[13], "off") == 0) {
                VAR_15.so_keepalive = 2;

            } else {
                FUNC_1(VAR_4, VAR_7, 0,
                                   "the \"so_keepalive\" parameter accepts "
                                   "only \"on\" or \"off\" on this platform");
                return VAR_0;


            }

            VAR_15.set = 1;
            VAR_15.bind = 1;

            continue;
        }

        if (FUNC_8(VAR_11[VAR_14].data, "proxy_protocol") == 0) {
            VAR_15.proxy_protocol = 1;
            continue;
        }

        FUNC_1(VAR_4, VAR_7, 0,
                           "invalid parameter \"%V\"", &VAR_11[VAR_14]);
        return VAR_0;
    }

    for (VAR_14 = 0; VAR_14 < VAR_13.naddrs; VAR_14++) {
        VAR_15.sockaddr = VAR_13.addrs[VAR_14].sockaddr;
        VAR_15.socklen = VAR_13.addrs[VAR_14].socklen;
        VAR_15.addr_text = VAR_13.addrs[VAR_14].name;
        VAR_15.wildcard = FUNC_3(VAR_15.sockaddr);

        if (FUNC_2(VAR_7, VAR_10, &VAR_15) != VAR_6) {
            return VAR_0;
        }
    }

    return VAR_1;
}
