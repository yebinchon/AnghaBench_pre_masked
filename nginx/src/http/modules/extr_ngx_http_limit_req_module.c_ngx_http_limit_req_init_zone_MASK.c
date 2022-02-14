
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {scalar_t__ log_nomem; int * log_ctx; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_slab_pool_t ;
struct TYPE_20__ {size_t len; } ;
struct TYPE_16__ {TYPE_7__ name; scalar_t__ exists; scalar_t__ addr; int log; } ;
struct TYPE_18__ {TYPE_3__ shm; TYPE_6__* data; } ;
typedef TYPE_5__ ngx_shm_zone_t ;
typedef int ngx_int_t ;
typedef int ngx_http_limit_req_shctx_t ;
struct TYPE_13__ {scalar_t__ len; int data; } ;
struct TYPE_14__ {TYPE_10__ value; } ;
struct TYPE_19__ {TYPE_4__* shpool; TYPE_2__* sh; TYPE_1__ key; } ;
typedef TYPE_6__ ngx_http_limit_req_ctx_t ;
struct TYPE_15__ {int queue; int sentinel; int rbtree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_7__*,TYPE_10__*,TYPE_10__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ) ;
 void* FUNC_3 (TYPE_4__*,size_t) ;
 int FUNC_4 (int *,char*,TYPE_7__*) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_shm_zone_t *VAR_4, void *VAR_5)
{
    ngx_http_limit_req_ctx_t *VAR_6 = VAR_5;

    size_t VAR_7;
    ngx_http_limit_req_ctx_t *VAR_8;

    VAR_8 = VAR_4->data;

    if (VAR_6) {
        if (VAR_8->key.value.len != VAR_6->key.value.len
            || FUNC_5(VAR_8->key.value.data, VAR_6->key.value.data,
                           VAR_8->key.value.len)
               != 0)
        {
            FUNC_0(VAR_1, VAR_4->shm.log, 0,
                          "limit_req \"%V\" uses the \"%V\" key "
                          "while previously it used the \"%V\" key",
                          &VAR_4->shm.name, &VAR_8->key.value,
                          &VAR_6->key.value);
            return VAR_0;
        }

        VAR_8->sh = VAR_6->sh;
        VAR_8->shpool = VAR_6->shpool;

        return VAR_2;
    }

    VAR_8->shpool = (ngx_slab_pool_t *) VAR_4->shm.addr;

    if (VAR_4->shm.exists) {
        VAR_8->sh = VAR_8->shpool->data;

        return VAR_2;
    }

    VAR_8->sh = FUNC_3(VAR_8->shpool, sizeof(ngx_http_limit_req_shctx_t));
    if (VAR_8->sh == ((void*)0)) {
        return VAR_0;
    }

    VAR_8->shpool->data = VAR_8->sh;

    FUNC_2(&VAR_8->sh->rbtree, &VAR_8->sh->sentinel,
                    VAR_3);

    FUNC_1(&VAR_8->sh->queue);

    VAR_7 = sizeof(" in limit_req zone \"\"") + VAR_4->shm.name.len;

    VAR_8->shpool->log_ctx = FUNC_3(VAR_8->shpool, VAR_7);
    if (VAR_8->shpool->log_ctx == ((void*)0)) {
        return VAR_0;
    }

    FUNC_4(VAR_8->shpool->log_ctx, " in limit_req zone \"%V\"%Z",
                &VAR_4->shm.name);

    VAR_8->shpool->log_nomem = 0;

    return VAR_2;
}
