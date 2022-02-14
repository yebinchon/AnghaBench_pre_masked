
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {int no_resolve; int no_port; int port; int host; TYPE_2__* addrs; int url; scalar_t__ err; } ;
typedef TYPE_3__ ngx_url_t ;
struct TYPE_17__ {TYPE_10__* resolved; } ;
typedef TYPE_4__ ngx_stream_upstream_t ;
typedef int ngx_stream_upstream_resolved_t ;
struct TYPE_18__ {TYPE_1__* connection; TYPE_4__* upstream; } ;
typedef TYPE_5__ ngx_stream_session_t ;
struct TYPE_19__ {int upstream_value; } ;
typedef TYPE_6__ ngx_stream_proxy_srv_conf_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int name; int socklen; int sockaddr; } ;
struct TYPE_14__ {int pool; int log; } ;
struct TYPE_13__ {int naddrs; int no_port; int port; int host; int name; int socklen; int sockaddr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*) ;
 TYPE_10__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,int ,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_stream_session_t *VAR_3,
    ngx_stream_proxy_srv_conf_t *VAR_4)
{
    ngx_str_t VAR_5;
    ngx_url_t VAR_6;
    ngx_stream_upstream_t *VAR_7;

    if (FUNC_4(VAR_3, VAR_4->upstream_value, &VAR_5) != VAR_2) {
        return VAR_0;
    }

    FUNC_1(&VAR_6, sizeof(ngx_url_t));

    VAR_6.url = VAR_5;
    VAR_6.no_resolve = 1;

    if (FUNC_2(VAR_3->connection->pool, &VAR_6) != VAR_2) {
        if (VAR_6.err) {
            FUNC_0(VAR_1, VAR_3->connection->log, 0,
                          "%s in upstream \"%V\"", VAR_6.err, &VAR_6.url);
        }

        return VAR_0;
    }

    VAR_7 = VAR_3->upstream;

    VAR_7->resolved = FUNC_3(VAR_3->connection->pool,
                              sizeof(ngx_stream_upstream_resolved_t));
    if (VAR_7->resolved == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_6.addrs) {
        VAR_7->resolved->sockaddr = VAR_6.addrs[0].sockaddr;
        VAR_7->resolved->socklen = VAR_6.addrs[0].socklen;
        VAR_7->resolved->name = VAR_6.addrs[0].name;
        VAR_7->resolved->naddrs = 1;
    }

    VAR_7->resolved->host = VAR_6.host;
    VAR_7->resolved->port = VAR_6.port;
    VAR_7->resolved->no_port = VAR_6.no_port;

    return VAR_2;
}
