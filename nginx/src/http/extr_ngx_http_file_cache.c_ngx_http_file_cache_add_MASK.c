
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int u_char ;
typedef int ngx_rbtree_key_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {scalar_t__ fail_time; scalar_t__ inactive; TYPE_6__* shpool; TYPE_1__* sh; } ;
typedef TYPE_2__ ngx_http_file_cache_t ;
struct TYPE_20__ {int key; } ;
struct TYPE_17__ {int uses; int exists; int queue; scalar_t__ expire; scalar_t__ fs_size; TYPE_7__ node; int * key; } ;
typedef TYPE_3__ ngx_http_file_cache_node_t ;
struct TYPE_18__ {scalar_t__ fs_size; int * key; } ;
typedef TYPE_4__ ngx_http_cache_t ;
struct TYPE_19__ {int mutex; int log_ctx; } ;
struct TYPE_15__ {int queue; int size; int rbtree; int count; } ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_13__* VAR_4 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_7__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_3__* FUNC_9 (TYPE_6__*,int) ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_http_file_cache_t *VAR_5, ngx_http_cache_t *VAR_6)
{
    ngx_http_file_cache_node_t *VAR_7;

    FUNC_7(&VAR_5->shpool->mutex);

    VAR_7 = FUNC_0(VAR_5, VAR_6->key);

    if (VAR_7 == ((void*)0)) {

        VAR_7 = FUNC_9(VAR_5->shpool,
                                     sizeof(ngx_http_file_cache_node_t));
        if (VAR_7 == ((void*)0)) {
            FUNC_1(VAR_5);

            if (VAR_5->fail_time != FUNC_10()) {
                VAR_5->fail_time = FUNC_10();
                FUNC_2(VAR_2, VAR_4->log, 0,
                           "could not allocate node%s", VAR_5->shpool->log_ctx);
            }

            FUNC_8(&VAR_5->shpool->mutex);
            return VAR_0;
        }

        VAR_5->sh->count++;

        FUNC_3((u_char *) &VAR_7->node.key, VAR_6->key, sizeof(ngx_rbtree_key_t));

        FUNC_3(VAR_7->key, &VAR_6->key[sizeof(ngx_rbtree_key_t)],
                   VAR_1 - sizeof(ngx_rbtree_key_t));

        FUNC_6(&VAR_5->sh->rbtree, &VAR_7->node);

        VAR_7->uses = 1;
        VAR_7->exists = 1;
        VAR_7->fs_size = VAR_6->fs_size;

        VAR_5->sh->size += VAR_6->fs_size;

    } else {
        FUNC_5(&VAR_7->queue);
    }

    VAR_7->expire = FUNC_10() + VAR_5->inactive;

    FUNC_4(&VAR_5->sh->queue, &VAR_7->queue);

    FUNC_8(&VAR_5->shpool->mutex);

    return VAR_3;
}
