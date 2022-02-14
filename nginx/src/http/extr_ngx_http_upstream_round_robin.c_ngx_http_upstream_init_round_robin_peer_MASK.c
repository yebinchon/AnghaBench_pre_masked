
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {TYPE_9__* data; } ;
struct TYPE_16__ {TYPE_1__ peer; } ;
typedef TYPE_5__ ngx_http_upstream_srv_conf_t ;
struct TYPE_17__ {TYPE_9__* peers; scalar_t__* tried; scalar_t__ data; scalar_t__ config; int * current; } ;
typedef TYPE_6__ ngx_http_upstream_rr_peer_data_t ;
struct TYPE_18__ {TYPE_4__* upstream; int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_19__ {int number; TYPE_2__* next; } ;
struct TYPE_14__ {int save_session; int set_session; int tries; int free; int get; TYPE_6__* data; } ;
struct TYPE_15__ {TYPE_3__ peer; } ;
struct TYPE_13__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_9__*) ;
 TYPE_6__* FUNC_1 (int ,int) ;
 scalar_t__* FUNC_2 (int ,int) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_6,
    ngx_http_upstream_srv_conf_t *VAR_7)
{
    ngx_uint_t VAR_8;
    ngx_http_upstream_rr_peer_data_t *VAR_9;

    VAR_9 = VAR_6->upstream->peer.data;

    if (VAR_9 == ((void*)0)) {
        VAR_9 = FUNC_1(VAR_6->pool, sizeof(ngx_http_upstream_rr_peer_data_t));
        if (VAR_9 == ((void*)0)) {
            return VAR_0;
        }

        VAR_6->upstream->peer.data = VAR_9;
    }

    VAR_9->peers = VAR_7->peer.data;
    VAR_9->current = ((void*)0);
    VAR_9->config = 0;

    VAR_8 = VAR_9->peers->number;

    if (VAR_9->peers->next && VAR_9->peers->next->number > VAR_8) {
        VAR_8 = VAR_9->peers->next->number;
    }

    if (VAR_8 <= 8 * sizeof(uintptr_t)) {
        VAR_9->tried = &VAR_9->data;
        VAR_9->data = 0;

    } else {
        VAR_8 = (VAR_8 + (8 * sizeof(uintptr_t) - 1)) / (8 * sizeof(uintptr_t));

        VAR_9->tried = FUNC_2(VAR_6->pool, VAR_8 * sizeof(uintptr_t));
        if (VAR_9->tried == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_6->upstream->peer.get = VAR_3;
    VAR_6->upstream->peer.free = VAR_2;
    VAR_6->upstream->peer.tries = FUNC_0(VAR_9->peers);







    return VAR_1;
}
