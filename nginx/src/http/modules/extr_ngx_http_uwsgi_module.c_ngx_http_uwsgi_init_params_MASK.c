
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_34__ {scalar_t__ len; } ;
struct TYPE_35__ {int len; scalar_t__ data; } ;
struct TYPE_37__ {TYPE_3__ value; TYPE_4__ key; } ;
typedef TYPE_6__ ngx_keyval_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_32__ {void* buckets; } ;
struct TYPE_38__ {size_t number; TYPE_1__ hash; int * lengths; int * values; int flushes; } ;
typedef TYPE_7__ ngx_http_uwsgi_params_t ;
struct TYPE_39__ {TYPE_2__* params_source; } ;
typedef TYPE_8__ ngx_http_uwsgi_loc_conf_t ;
struct TYPE_40__ {int skip_empty; TYPE_3__ value; TYPE_4__ key; } ;
typedef TYPE_9__ ngx_http_upstream_param_t ;
struct TYPE_26__ {int len; void* code; } ;
typedef TYPE_10__ ngx_http_script_copy_code_t ;
struct TYPE_27__ {int ** values; int ** lengths; int * flushes; TYPE_3__* source; TYPE_14__* cf; } ;
typedef TYPE_11__ ngx_http_script_compile_t ;
typedef void* ngx_http_script_code_pt ;
struct TYPE_36__ {int len; scalar_t__ data; } ;
struct TYPE_28__ {void* value; TYPE_5__ key; int key_hash; } ;
typedef TYPE_12__ ngx_hash_key_t ;
struct TYPE_29__ {int max_size; int bucket_size; char* name; int * temp_pool; int pool; int (* key ) (scalar_t__,int) ;TYPE_1__* hash; } ;
typedef TYPE_13__ ngx_hash_init_t ;
struct TYPE_30__ {int pool; int temp_pool; } ;
typedef TYPE_14__ ngx_conf_t ;
struct TYPE_31__ {size_t nelts; TYPE_9__* elts; } ;
typedef TYPE_15__ ngx_array_t ;
struct TYPE_33__ {size_t nelts; TYPE_9__* elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_15__*,int ,int,int) ;
 void* FUNC_2 (TYPE_15__*) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_13__*,TYPE_9__*,size_t) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (TYPE_11__*) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int *,scalar_t__,int) ;
 int FUNC_8 (TYPE_11__*,int) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_11(ngx_conf_t *VAR_4, ngx_http_uwsgi_loc_conf_t *VAR_5,
    ngx_http_uwsgi_params_t *VAR_6, ngx_keyval_t *VAR_7)
{
    u_char *VAR_8;
    size_t VAR_9;
    uintptr_t *VAR_10;
    ngx_uint_t VAR_11, VAR_12;
    ngx_array_t VAR_13, VAR_14;
    ngx_keyval_t *VAR_15;
    ngx_hash_key_t *VAR_16;
    ngx_hash_init_t VAR_17;
    ngx_http_upstream_param_t *VAR_18, *VAR_19;
    ngx_http_script_compile_t VAR_20;
    ngx_http_script_copy_code_t *VAR_21;

    if (VAR_6->hash.buckets) {
        return VAR_1;
    }

    if (VAR_5->params_source == ((void*)0) && VAR_7 == ((void*)0)) {
        VAR_6->hash.buckets = (void *) 1;
        return VAR_1;
    }

    VAR_6->lengths = FUNC_0(VAR_4->pool, 64, 1);
    if (VAR_6->lengths == ((void*)0)) {
        return VAR_0;
    }

    VAR_6->values = FUNC_0(VAR_4->pool, 512, 1);
    if (VAR_6->values == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_1(&VAR_13, VAR_4->temp_pool, 4, sizeof(ngx_hash_key_t))
        != VAR_1)
    {
        return VAR_0;
    }

    if (VAR_5->params_source) {
        VAR_18 = VAR_5->params_source->elts;
        VAR_12 = VAR_5->params_source->nelts;

    } else {
        VAR_18 = ((void*)0);
        VAR_12 = 0;
    }

    if (VAR_7) {
        if (FUNC_1(&VAR_14, VAR_4->temp_pool, 4,
                           sizeof(ngx_http_upstream_param_t))
            != VAR_1)
        {
            return VAR_0;
        }

        for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

            VAR_19 = FUNC_2(&VAR_14);
            if (VAR_19 == ((void*)0)) {
                return VAR_0;
            }

            *VAR_19 = VAR_18[VAR_11];
        }

        VAR_15 = VAR_7;

        while (VAR_15->key.len) {

            VAR_18 = VAR_14.elts;
            VAR_12 = VAR_14.nelts;

            for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
                if (FUNC_9(VAR_15->key.data, VAR_18[VAR_11].key.data) == 0) {
                    goto next;
                }
            }

            VAR_19 = FUNC_2(&VAR_14);
            if (VAR_19 == ((void*)0)) {
                return VAR_0;
            }

            VAR_19->key = VAR_15->key;
            VAR_19->value = VAR_15->value;
            VAR_19->skip_empty = 1;

        next:

            VAR_15++;
        }

        VAR_18 = VAR_14.elts;
        VAR_12 = VAR_14.nelts;
    }

    for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {

        if (VAR_18[VAR_11].key.len > sizeof("HTTP_") - 1
            && FUNC_10(VAR_18[VAR_11].key.data, "HTTP_", sizeof("HTTP_") - 1) == 0)
        {
            VAR_16 = FUNC_2(&VAR_13);
            if (VAR_16 == ((void*)0)) {
                return VAR_0;
            }

            VAR_16->key.len = VAR_18[VAR_11].key.len - 5;
            VAR_16->key.data = VAR_18[VAR_11].key.data + 5;
            VAR_16->key_hash = FUNC_5(VAR_16->key.data, VAR_16->key.len);
            VAR_16->value = (void *) 1;

            if (VAR_18[VAR_11].value.len == 0) {
                continue;
            }
        }

        VAR_21 = FUNC_3(VAR_6->lengths,
                                sizeof(ngx_http_script_copy_code_t));
        if (VAR_21 == ((void*)0)) {
            return VAR_0;
        }

        VAR_21->code = (ngx_http_script_code_pt) (void *)
                                                 VAR_3;
        VAR_21->len = VAR_18[VAR_11].key.len;

        VAR_21 = FUNC_3(VAR_6->lengths,
                                sizeof(ngx_http_script_copy_code_t));
        if (VAR_21 == ((void*)0)) {
            return VAR_0;
        }

        VAR_21->code = (ngx_http_script_code_pt) (void *)
                                                 VAR_3;
        VAR_21->len = VAR_18[VAR_11].skip_empty;


        VAR_9 = (sizeof(ngx_http_script_copy_code_t)
                + VAR_18[VAR_11].key.len + sizeof(uintptr_t) - 1)
               & ~(sizeof(uintptr_t) - 1);

        VAR_21 = FUNC_3(VAR_6->values, VAR_9);
        if (VAR_21 == ((void*)0)) {
            return VAR_0;
        }

        VAR_21->code = VAR_2;
        VAR_21->len = VAR_18[VAR_11].key.len;

        VAR_8 = (u_char *) VAR_21 + sizeof(ngx_http_script_copy_code_t);
        FUNC_7(VAR_8, VAR_18[VAR_11].key.data, VAR_18[VAR_11].key.len);


        FUNC_8(&VAR_20, sizeof(ngx_http_script_compile_t));

        VAR_20.cf = VAR_4;
        VAR_20.source = &VAR_18[VAR_11].value;
        VAR_20.flushes = &VAR_6->flushes;
        VAR_20.lengths = &VAR_6->lengths;
        VAR_20.values = &VAR_6->values;

        if (FUNC_6(&VAR_20) != VAR_1) {
            return VAR_0;
        }

        VAR_10 = FUNC_3(VAR_6->lengths, sizeof(uintptr_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_10 = (uintptr_t) ((void*)0);


        VAR_10 = FUNC_3(VAR_6->values, sizeof(uintptr_t));
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_10 = (uintptr_t) ((void*)0);
    }

    VAR_10 = FUNC_3(VAR_6->lengths, sizeof(uintptr_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_10 = (uintptr_t) ((void*)0);

    VAR_6->number = VAR_13.nelts;

    VAR_17.hash = &VAR_6->hash;
    VAR_17.key = FUNC_5;
    VAR_17.max_size = 512;
    VAR_17.bucket_size = 64;
    VAR_17.name = "uwsgi_params_hash";
    VAR_17.pool = VAR_4->pool;
    VAR_17.temp_pool = ((void*)0);

    return FUNC_4(&VAR_17, VAR_13.elts, VAR_13.nelts);
}
