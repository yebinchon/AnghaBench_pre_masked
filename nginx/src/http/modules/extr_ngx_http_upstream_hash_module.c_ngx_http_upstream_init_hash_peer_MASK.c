
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_upstream_srv_conf_t ;
struct TYPE_15__ {int key; } ;
typedef TYPE_4__ ngx_http_upstream_hash_srv_conf_t ;
struct TYPE_16__ {int get_rr_peer; scalar_t__ hash; scalar_t__ rehash; scalar_t__ tries; TYPE_4__* conf; int key; int rrp; } ;
typedef TYPE_5__ ngx_http_upstream_hash_peer_data_t ;
struct TYPE_17__ {TYPE_3__* connection; TYPE_2__* upstream; int pool; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_14__ {int log; } ;
struct TYPE_12__ {int get; int * data; } ;
struct TYPE_13__ {TYPE_1__ peer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *,int *) ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (int ,int ,int ,char*,int *) ;
 TYPE_5__* FUNC_4 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_6,
    ngx_http_upstream_srv_conf_t *VAR_7)
{
    ngx_http_upstream_hash_srv_conf_t *VAR_8;
    ngx_http_upstream_hash_peer_data_t *VAR_9;

    VAR_9 = FUNC_4(VAR_6->pool, sizeof(ngx_http_upstream_hash_peer_data_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->upstream->peer.data = &VAR_9->rrp;

    if (FUNC_2(VAR_6, VAR_7) != VAR_2) {
        return VAR_0;
    }

    VAR_6->upstream->peer.get = VAR_3;

    VAR_8 = FUNC_1(VAR_7, VAR_5);

    if (FUNC_0(VAR_6, &VAR_8->key, &VAR_9->key) != VAR_2) {
        return VAR_0;
    }

    FUNC_3(VAR_1, VAR_6->connection->log, 0,
                   "upstream hash key:\"%V\"", &VAR_9->key);

    VAR_9->conf = VAR_8;
    VAR_9->tries = 0;
    VAR_9->rehash = 0;
    VAR_9->hash = 0;
    VAR_9->get_rr_peer = VAR_4;

    return VAR_2;
}
