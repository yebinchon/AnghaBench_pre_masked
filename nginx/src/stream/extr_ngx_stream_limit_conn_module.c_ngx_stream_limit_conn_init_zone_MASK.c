
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {scalar_t__ len; int data; } ;
struct TYPE_13__ {TYPE_10__ value; } ;
struct TYPE_15__ {int * rbtree; TYPE_1__ key; } ;
typedef TYPE_3__ ngx_stream_limit_conn_ctx_t ;
struct TYPE_16__ {int * log_ctx; int * data; } ;
typedef TYPE_4__ ngx_slab_pool_t ;
struct TYPE_18__ {size_t len; } ;
struct TYPE_14__ {TYPE_7__ name; scalar_t__ exists; scalar_t__ addr; int log; } ;
struct TYPE_17__ {TYPE_2__ shm; TYPE_3__* data; } ;
typedef TYPE_5__ ngx_shm_zone_t ;
typedef int ngx_rbtree_t ;
typedef int ngx_rbtree_node_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_7__*,TYPE_10__*,TYPE_10__*) ;
 int FUNC_1 (int *,int *,int ) ;
 void* FUNC_2 (TYPE_4__*,size_t) ;
 int FUNC_3 (int *,char*,TYPE_7__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_shm_zone_t *VAR_4, void *VAR_5)
{
    ngx_stream_limit_conn_ctx_t *VAR_6 = VAR_5;

    size_t VAR_7;
    ngx_slab_pool_t *VAR_8;
    ngx_rbtree_node_t *VAR_9;
    ngx_stream_limit_conn_ctx_t *VAR_10;

    VAR_10 = VAR_4->data;

    if (VAR_6) {
        if (VAR_10->key.value.len != VAR_6->key.value.len
            || FUNC_4(VAR_10->key.value.data, VAR_6->key.value.data,
                           VAR_10->key.value.len)
               != 0)
        {
            FUNC_0(VAR_1, VAR_4->shm.log, 0,
                          "limit_conn_zone \"%V\" uses the \"%V\" key "
                          "while previously it used the \"%V\" key",
                          &VAR_4->shm.name, &VAR_10->key.value,
                          &VAR_6->key.value);
            return VAR_0;
        }

        VAR_10->rbtree = VAR_6->rbtree;

        return VAR_2;
    }

    VAR_8 = (ngx_slab_pool_t *) VAR_4->shm.addr;

    if (VAR_4->shm.exists) {
        VAR_10->rbtree = VAR_8->data;

        return VAR_2;
    }

    VAR_10->rbtree = FUNC_2(VAR_8, sizeof(ngx_rbtree_t));
    if (VAR_10->rbtree == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->data = VAR_10->rbtree;

    VAR_9 = FUNC_2(VAR_8, sizeof(ngx_rbtree_node_t));
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_1(VAR_10->rbtree, VAR_9,
                    VAR_3);

    VAR_7 = sizeof(" in limit_conn_zone \"\"") + VAR_4->shm.name.len;

    VAR_8->log_ctx = FUNC_2(VAR_8, VAR_7);
    if (VAR_8->log_ctx == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(VAR_8->log_ctx, " in limit_conn_zone \"%V\"%Z",
                &VAR_4->shm.name);

    return VAR_2;
}
