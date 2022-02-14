
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int single; int number; TYPE_6__* peer; TYPE_4__* name; } ;
typedef TYPE_5__ ngx_http_upstream_rr_peers_t ;
struct TYPE_16__ {size_t len; int * data; } ;
struct TYPE_18__ {int socklen; int weight; int effective_weight; int max_fails; int fail_timeout; struct TYPE_18__* next; scalar_t__ max_conns; scalar_t__ current_weight; TYPE_4__ name; struct sockaddr* sockaddr; } ;
typedef TYPE_6__ ngx_http_upstream_rr_peer_t ;
struct TYPE_19__ {TYPE_5__* peers; scalar_t__* tried; scalar_t__ data; scalar_t__ config; int * current; } ;
typedef TYPE_7__ ngx_http_upstream_rr_peer_data_t ;
struct TYPE_20__ {int naddrs; int socklen; int port; TYPE_3__* addrs; TYPE_4__ host; TYPE_4__ name; struct sockaddr* sockaddr; } ;
typedef TYPE_8__ ngx_http_upstream_resolved_t ;
struct TYPE_21__ {TYPE_2__* upstream; int pool; } ;
typedef TYPE_9__ ngx_http_request_t ;
struct TYPE_15__ {int socklen; int sockaddr; } ;
struct TYPE_13__ {int save_session; int set_session; int tries; int free; int get; TYPE_7__* data; } ;
struct TYPE_14__ {TYPE_1__ peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct sockaddr*,int ) ;
 int FUNC_2 (struct sockaddr*,int ,int) ;
 void* FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,size_t) ;
 int * FUNC_5 (int ,int ) ;
 size_t FUNC_6 (struct sockaddr*,int,int *,int ,int) ;

ngx_int_t
FUNC_7(ngx_http_request_t *VAR_7,
    ngx_http_upstream_resolved_t *VAR_8)
{
    u_char *VAR_9;
    size_t VAR_10;
    socklen_t VAR_11;
    ngx_uint_t VAR_12, VAR_13;
    struct sockaddr *VAR_14;
    ngx_http_upstream_rr_peer_t *VAR_15, **VAR_16;
    ngx_http_upstream_rr_peers_t *VAR_17;
    ngx_http_upstream_rr_peer_data_t *VAR_18;

    VAR_18 = VAR_7->upstream->peer.data;

    if (VAR_18 == ((void*)0)) {
        VAR_18 = FUNC_3(VAR_7->pool, sizeof(ngx_http_upstream_rr_peer_data_t));
        if (VAR_18 == ((void*)0)) {
            return VAR_0;
        }

        VAR_7->upstream->peer.data = VAR_18;
    }

    VAR_17 = FUNC_4(VAR_7->pool, sizeof(ngx_http_upstream_rr_peers_t));
    if (VAR_17 == ((void*)0)) {
        return VAR_0;
    }

    VAR_15 = FUNC_4(VAR_7->pool, sizeof(ngx_http_upstream_rr_peer_t)
                                * VAR_8->naddrs);
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_17->single = (VAR_8->naddrs == 1);
    VAR_17->number = VAR_8->naddrs;
    VAR_17->name = &VAR_8->host;

    if (VAR_8->sockaddr) {
        VAR_15[0].sockaddr = VAR_8->sockaddr;
        VAR_15[0].socklen = VAR_8->socklen;
        VAR_15[0].name = VAR_8->name.data ? VAR_8->name : VAR_8->host;
        VAR_15[0].weight = 1;
        VAR_15[0].effective_weight = 1;
        VAR_15[0].current_weight = 0;
        VAR_15[0].max_conns = 0;
        VAR_15[0].max_fails = 1;
        VAR_15[0].fail_timeout = 10;
        VAR_17->peer = VAR_15;

    } else {
        VAR_16 = &VAR_17->peer;

        for (VAR_12 = 0; VAR_12 < VAR_8->naddrs; VAR_12++) {

            VAR_11 = VAR_8->addrs[VAR_12].socklen;

            VAR_14 = FUNC_3(VAR_7->pool, VAR_11);
            if (VAR_14 == ((void*)0)) {
                return VAR_0;
            }

            FUNC_2(VAR_14, VAR_8->addrs[VAR_12].sockaddr, VAR_11);
            FUNC_1(VAR_14, VAR_8->port);

            VAR_9 = FUNC_5(VAR_7->pool, VAR_2);
            if (VAR_9 == ((void*)0)) {
                return VAR_0;
            }

            VAR_10 = FUNC_6(VAR_14, VAR_11, VAR_9, VAR_2, 1);

            VAR_15[VAR_12].sockaddr = VAR_14;
            VAR_15[VAR_12].socklen = VAR_11;
            VAR_15[VAR_12].name.len = VAR_10;
            VAR_15[VAR_12].name.data = VAR_9;
            VAR_15[VAR_12].weight = 1;
            VAR_15[VAR_12].effective_weight = 1;
            VAR_15[VAR_12].current_weight = 0;
            VAR_15[VAR_12].max_conns = 0;
            VAR_15[VAR_12].max_fails = 1;
            VAR_15[VAR_12].fail_timeout = 10;
            *VAR_16 = &VAR_15[VAR_12];
            VAR_16 = &VAR_15[VAR_12].next;
        }
    }

    VAR_18->peers = VAR_17;
    VAR_18->current = ((void*)0);
    VAR_18->config = 0;

    if (VAR_18->peers->number <= 8 * sizeof(uintptr_t)) {
        VAR_18->tried = &VAR_18->data;
        VAR_18->data = 0;

    } else {
        VAR_13 = (VAR_18->peers->number + (8 * sizeof(uintptr_t) - 1))
                / (8 * sizeof(uintptr_t));

        VAR_18->tried = FUNC_4(VAR_7->pool, VAR_13 * sizeof(uintptr_t));
        if (VAR_18->tried == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_7->upstream->peer.get = VAR_6;
    VAR_7->upstream->peer.free = VAR_5;
    VAR_7->upstream->peer.tries = FUNC_0(VAR_18->peers);





    return VAR_1;
}
