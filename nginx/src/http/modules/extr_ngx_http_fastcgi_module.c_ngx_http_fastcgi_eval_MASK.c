
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int no_resolve; int no_port; int port; int host; TYPE_4__* addrs; int url; scalar_t__ err; } ;
typedef TYPE_5__ ngx_url_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {TYPE_9__* resolved; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
typedef int ngx_http_upstream_resolved_t ;
struct TYPE_21__ {int pool; TYPE_6__* upstream; TYPE_3__* connection; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_22__ {TYPE_2__* fastcgi_values; TYPE_1__* fastcgi_lengths; } ;
typedef TYPE_8__ ngx_http_fastcgi_loc_conf_t ;
struct TYPE_23__ {int naddrs; int no_port; int port; int host; int name; int socklen; int sockaddr; } ;
struct TYPE_18__ {int name; int socklen; int sockaddr; } ;
struct TYPE_17__ {int log; } ;
struct TYPE_16__ {int elts; } ;
struct TYPE_15__ {int elts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (TYPE_7__*,int *,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__,int *) ;
 int FUNC_2 (TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (int ,TYPE_5__*) ;
 TYPE_9__* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_3, ngx_http_fastcgi_loc_conf_t *VAR_4)
{
    ngx_url_t VAR_5;
    ngx_http_upstream_t *VAR_6;

    FUNC_2(&VAR_5, sizeof(ngx_url_t));

    if (FUNC_0(VAR_3, &VAR_5.url, VAR_4->fastcgi_lengths->elts, 0,
                            VAR_4->fastcgi_values->elts)
        == ((void*)0))
    {
        return VAR_0;
    }

    VAR_5.no_resolve = 1;

    if (FUNC_3(VAR_3->pool, &VAR_5) != VAR_2) {
        if (VAR_5.err) {
            FUNC_1(VAR_1, VAR_3->connection->log, 0,
                          "%s in upstream \"%V\"", VAR_5.err, &VAR_5.url);
        }

        return VAR_0;
    }

    VAR_6 = VAR_3->upstream;

    VAR_6->resolved = FUNC_4(VAR_3->pool, sizeof(ngx_http_upstream_resolved_t));
    if (VAR_6->resolved == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_5.addrs) {
        VAR_6->resolved->sockaddr = VAR_5.addrs[0].sockaddr;
        VAR_6->resolved->socklen = VAR_5.addrs[0].socklen;
        VAR_6->resolved->name = VAR_5.addrs[0].name;
        VAR_6->resolved->naddrs = 1;
    }

    VAR_6->resolved->host = VAR_5.host;
    VAR_6->resolved->port = VAR_5.port;
    VAR_6->resolved->no_port = VAR_5.no_port;

    return VAR_2;
}
