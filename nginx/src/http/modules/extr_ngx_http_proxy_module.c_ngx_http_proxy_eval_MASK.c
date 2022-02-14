
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_21__ ;
typedef struct TYPE_30__ TYPE_1__ ;
typedef struct TYPE_29__ TYPE_14__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int u_short ;
typedef char u_char ;
struct TYPE_34__ {char* data; scalar_t__ len; } ;
struct TYPE_37__ {size_t len; scalar_t__ data; } ;
struct TYPE_38__ {int default_port; int uri_part; int no_resolve; int port; scalar_t__ no_port; int host; TYPE_6__* addrs; TYPE_4__ uri; TYPE_7__ url; int err; } ;
typedef TYPE_8__ ngx_url_t ;
struct TYPE_39__ {int len; scalar_t__ data; } ;
typedef TYPE_9__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_35__ {size_t len; scalar_t__ data; } ;
struct TYPE_25__ {int ssl; TYPE_14__* resolved; TYPE_5__ schema; } ;
typedef TYPE_10__ ngx_http_upstream_t ;
typedef int ngx_http_upstream_resolved_t ;
struct TYPE_26__ {int pool; TYPE_3__* connection; TYPE_10__* upstream; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_27__ {TYPE_2__* proxy_values; TYPE_1__* proxy_lengths; } ;
typedef TYPE_12__ ngx_http_proxy_loc_conf_t ;
struct TYPE_31__ {TYPE_5__ key_start; } ;
struct TYPE_28__ {TYPE_21__ vars; } ;
typedef TYPE_13__ ngx_http_proxy_ctx_t ;
typedef scalar_t__ in_port_t ;
struct TYPE_36__ {int name; int socklen; int sockaddr; } ;
struct TYPE_33__ {int log; } ;
struct TYPE_32__ {int elts; } ;
struct TYPE_30__ {int elts; } ;
struct TYPE_29__ {int naddrs; scalar_t__ no_port; scalar_t__ port; int host; int name; int socklen; int sockaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_8__*,TYPE_21__*) ;
 int * FUNC_1 (TYPE_11__*,TYPE_9__*,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_9__*,...) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_8__*,int) ;
 scalar_t__ FUNC_5 (int ,TYPE_8__*) ;
 TYPE_14__* FUNC_6 (int ,int) ;
 char* FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_3, ngx_http_proxy_ctx_t *VAR_4,
    ngx_http_proxy_loc_conf_t *VAR_5)
{
    u_char *VAR_6;
    size_t VAR_7;
    u_short VAR_8;
    ngx_str_t VAR_9;
    ngx_url_t VAR_10;
    ngx_http_upstream_t *VAR_11;

    if (FUNC_1(VAR_3, &VAR_9, VAR_5->proxy_lengths->elts, 0,
                            VAR_5->proxy_values->elts)
        == ((void*)0))
    {
        return VAR_0;
    }

    if (VAR_9.len > 7
        && FUNC_8(VAR_9.data, (u_char *) "http://", 7) == 0)
    {
        VAR_7 = 7;
        VAR_8 = 80;
    } else {
        FUNC_2(VAR_1, VAR_3->connection->log, 0,
                      "invalid URL prefix in \"%V\"", &VAR_9);
        return VAR_0;
    }

    VAR_11 = VAR_3->upstream;

    VAR_11->schema.len = VAR_7;
    VAR_11->schema.data = VAR_9.data;

    FUNC_4(&VAR_10, sizeof(ngx_url_t));

    VAR_10.url.len = VAR_9.len - VAR_7;
    VAR_10.url.data = VAR_9.data + VAR_7;
    VAR_10.default_port = VAR_8;
    VAR_10.uri_part = 1;
    VAR_10.no_resolve = 1;

    if (FUNC_5(VAR_3->pool, &VAR_10) != VAR_2) {
        if (VAR_10.err) {
            FUNC_2(VAR_1, VAR_3->connection->log, 0,
                          "%s in upstream \"%V\"", VAR_10.err, &VAR_10.url);
        }

        return VAR_0;
    }

    if (VAR_10.uri.len) {
        if (VAR_10.uri.data[0] == '?') {
            VAR_6 = FUNC_7(VAR_3->pool, VAR_10.uri.len + 1);
            if (VAR_6 == ((void*)0)) {
                return VAR_0;
            }

            *VAR_6++ = '/';
            FUNC_3(VAR_6, VAR_10.uri.data, VAR_10.uri.len);

            VAR_10.uri.len++;
            VAR_10.uri.data = VAR_6 - 1;
        }
    }

    VAR_4->vars.key_start = VAR_11->schema;

    FUNC_0(&VAR_10, &VAR_4->vars);

    VAR_11->resolved = FUNC_6(VAR_3->pool, sizeof(ngx_http_upstream_resolved_t));
    if (VAR_11->resolved == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_10.addrs) {
        VAR_11->resolved->sockaddr = VAR_10.addrs[0].sockaddr;
        VAR_11->resolved->socklen = VAR_10.addrs[0].socklen;
        VAR_11->resolved->name = VAR_10.addrs[0].name;
        VAR_11->resolved->naddrs = 1;
    }

    VAR_11->resolved->host = VAR_10.host;
    VAR_11->resolved->port = (in_port_t) (VAR_10.no_port ? VAR_8 : VAR_10.port);
    VAR_11->resolved->no_port = VAR_10.no_port;

    return VAR_2;
}
