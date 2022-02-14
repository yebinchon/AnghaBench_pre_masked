
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int u_char ;
typedef int ngx_rbtree_key_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {scalar_t__ inactive; TYPE_6__* shpool; TYPE_1__* sh; } ;
typedef TYPE_2__ ngx_http_file_cache_t ;
struct TYPE_21__ {int key; } ;
struct TYPE_18__ {int uses; int count; scalar_t__ valid_sec; scalar_t__ error; scalar_t__ uniq; int queue; scalar_t__ expire; scalar_t__ fs_size; scalar_t__ body_start; scalar_t__ exists; scalar_t__ valid_msec; TYPE_7__ node; int * key; } ;
typedef TYPE_3__ ngx_http_file_cache_node_t ;
struct TYPE_19__ {int min_uses; TYPE_3__* node; scalar_t__ error; scalar_t__ uniq; int * key; scalar_t__ body_start; scalar_t__ exists; } ;
typedef TYPE_4__ ngx_http_cache_t ;
struct TYPE_20__ {int mutex; int log_ctx; } ;
struct TYPE_16__ {int queue; int rbtree; int count; } ;
struct TYPE_15__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_14__* VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*,int ) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_7__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (TYPE_6__*,int) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static ngx_int_t
FUNC_12(ngx_http_file_cache_t *VAR_7, ngx_http_cache_t *VAR_8)
{
    ngx_int_t VAR_9;
    ngx_http_file_cache_node_t *VAR_10;

    FUNC_8(&VAR_7->shpool->mutex);

    VAR_10 = VAR_8->node;

    if (VAR_10 == ((void*)0)) {
        VAR_10 = FUNC_1(VAR_7, VAR_8->key);
    }

    if (VAR_10) {
        FUNC_6(&VAR_10->queue);

        if (VAR_8->node == ((void*)0)) {
            VAR_10->uses++;
            VAR_10->count++;
        }

        if (VAR_10->error) {

            if (VAR_10->valid_sec < FUNC_11()) {
                goto renew;
            }

            VAR_9 = VAR_5;

            goto done;
        }

        if (VAR_10->exists || VAR_10->uses >= VAR_8->min_uses) {

            VAR_8->exists = VAR_10->exists;
            if (VAR_10->body_start) {
                VAR_8->body_start = VAR_10->body_start;
            }

            VAR_9 = VAR_5;

            goto done;
        }

        VAR_9 = VAR_0;

        goto done;
    }

    VAR_10 = FUNC_10(VAR_7->shpool,
                                 sizeof(ngx_http_file_cache_node_t));
    if (VAR_10 == ((void*)0)) {
        FUNC_2(VAR_7);

        FUNC_9(&VAR_7->shpool->mutex);

        (void) FUNC_0(VAR_7);

        FUNC_8(&VAR_7->shpool->mutex);

        VAR_10 = FUNC_10(VAR_7->shpool,
                                     sizeof(ngx_http_file_cache_node_t));
        if (VAR_10 == ((void*)0)) {
            FUNC_3(VAR_4, VAR_6->log, 0,
                          "could not allocate node%s", VAR_7->shpool->log_ctx);
            VAR_9 = VAR_2;
            goto failed;
        }
    }

    VAR_7->sh->count++;

    FUNC_4((u_char *) &VAR_10->node.key, VAR_8->key, sizeof(ngx_rbtree_key_t));

    FUNC_4(VAR_10->key, &VAR_8->key[sizeof(ngx_rbtree_key_t)],
               VAR_3 - sizeof(ngx_rbtree_key_t));

    FUNC_7(&VAR_7->sh->rbtree, &VAR_10->node);

    VAR_10->uses = 1;
    VAR_10->count = 1;

renew:

    VAR_9 = VAR_1;

    VAR_10->valid_msec = 0;
    VAR_10->error = 0;
    VAR_10->exists = 0;
    VAR_10->valid_sec = 0;
    VAR_10->uniq = 0;
    VAR_10->body_start = 0;
    VAR_10->fs_size = 0;

done:

    VAR_10->expire = FUNC_11() + VAR_7->inactive;

    FUNC_5(&VAR_7->sh->queue, &VAR_10->queue);

    VAR_8->uniq = VAR_10->uniq;
    VAR_8->error = VAR_10->error;
    VAR_8->node = VAR_10;

failed:

    FUNC_9(&VAR_7->shpool->mutex);

    return VAR_9;
}
