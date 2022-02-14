
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
typedef struct TYPE_13__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {TYPE_3__* data; } ;
struct TYPE_15__ {TYPE_1__ peer; } ;
typedef TYPE_2__ ngx_http_upstream_srv_conf_t ;
struct TYPE_16__ {int number; TYPE_4__* peer; } ;
typedef TYPE_3__ ngx_http_upstream_rr_peers_t ;
struct TYPE_17__ {size_t weight; struct TYPE_17__* next; } ;
typedef TYPE_4__ ngx_http_upstream_rr_peer_t ;
struct TYPE_18__ {TYPE_6__* ranges; } ;
typedef TYPE_5__ ngx_http_upstream_random_srv_conf_t ;
struct TYPE_19__ {size_t range; TYPE_4__* peer; } ;
typedef TYPE_6__ ngx_http_upstream_random_range_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_0 (size_t,int ) ;
 TYPE_11__* VAR_2 ;
 TYPE_5__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_3 ;
 TYPE_6__* FUNC_2 (int *,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_pool_t *VAR_4,
    ngx_http_upstream_srv_conf_t *VAR_5)
{
    size_t VAR_6;
    ngx_uint_t VAR_7, VAR_8;
    ngx_http_upstream_rr_peer_t *VAR_9;
    ngx_http_upstream_rr_peers_t *VAR_10;
    ngx_http_upstream_random_range_t *VAR_11;
    ngx_http_upstream_random_srv_conf_t *VAR_12;

    VAR_12 = FUNC_1(VAR_5, VAR_3);

    VAR_10 = VAR_5->peer.data;

    VAR_6 = VAR_10->number * sizeof(ngx_http_upstream_random_range_t);

    VAR_11 = VAR_4 ? FUNC_2(VAR_4, VAR_6) : FUNC_0(VAR_6, VAR_2->log);
    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = 0;

    for (VAR_9 = VAR_10->peer, VAR_7 = 0; VAR_9; VAR_9 = VAR_9->next, VAR_7++) {
        VAR_11[VAR_7].peer = VAR_9;
        VAR_11[VAR_7].range = VAR_8;
        VAR_8 += VAR_9->weight;
    }

    VAR_12->ranges = VAR_11;

    return VAR_1;
}
