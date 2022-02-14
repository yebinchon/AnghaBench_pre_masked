
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_27__ ;
typedef struct TYPE_34__ TYPE_22__ ;
typedef struct TYPE_33__ TYPE_1__ ;
typedef struct TYPE_32__ TYPE_14__ ;
typedef struct TYPE_31__ TYPE_13__ ;
typedef struct TYPE_30__ TYPE_12__ ;
typedef struct TYPE_29__ TYPE_11__ ;
typedef struct TYPE_28__ TYPE_10__ ;


struct TYPE_41__ {char* data; int len; } ;
typedef TYPE_7__ ngx_str_t ;
typedef int ngx_pool_t ;
struct TYPE_42__ {uintptr_t data; int flags; int get_handler; } ;
typedef TYPE_8__ ngx_http_variable_t ;
typedef int ngx_http_map_regex_t ;
struct TYPE_38__ {int * wc_tail; int * wc_head; int hash; } ;
struct TYPE_39__ {scalar_t__ nregex; int regex; TYPE_4__ hash; } ;
struct TYPE_43__ {TYPE_5__ map; scalar_t__ hostnames; int * default_value; int value; } ;
typedef TYPE_9__ ngx_http_map_ctx_t ;
struct TYPE_28__ {scalar_t__ hash_max_size; scalar_t__ hash_bucket_size; } ;
typedef TYPE_10__ ngx_http_map_conf_t ;
struct TYPE_35__ {scalar_t__ nelts; int elts; } ;
struct TYPE_36__ {scalar_t__ nelts; int elts; } ;
struct TYPE_33__ {scalar_t__ nelts; int elts; } ;
struct TYPE_40__ {scalar_t__ nelts; int elts; } ;
struct TYPE_34__ {int hsize; TYPE_2__ dns_wc_tail; TYPE_1__ dns_wc_head; TYPE_6__ keys; int * temp_pool; int * pool; } ;
struct TYPE_29__ {TYPE_27__ regexes; TYPE_22__ keys; scalar_t__ hostnames; int * default_value; scalar_t__ no_cacheable; TYPE_14__* cf; int * values_hash; } ;
typedef TYPE_11__ ngx_http_map_conf_ctx_t ;
struct TYPE_30__ {int * complex_value; TYPE_7__* value; TYPE_14__* cf; } ;
typedef TYPE_12__ ngx_http_compile_complex_value_t ;
typedef int ngx_hash_wildcard_t ;
typedef int ngx_hash_key_t ;
struct TYPE_31__ {int max_size; scalar_t__ bucket_size; char* name; int * hash; int * temp_pool; int * pool; int key; } ;
typedef TYPE_13__ ngx_hash_init_t ;
struct TYPE_32__ {int * pool; void* handler_conf; int handler; TYPE_11__* ctx; int log; TYPE_3__* args; } ;
typedef TYPE_14__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_37__ {TYPE_7__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_27__*,int *,int,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ,TYPE_14__*,int ,char*,TYPE_7__*) ;
 char* FUNC_3 (TYPE_14__*,int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_13__*,int ,scalar_t__) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (TYPE_22__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_13__*,int ,scalar_t__) ;
 TYPE_8__* FUNC_9 (TYPE_14__*,TYPE_7__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_12__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (TYPE_12__*,int) ;
 void* FUNC_12 (int *,int) ;
 int FUNC_13 (int ,size_t,int,int ) ;

__attribute__((used)) static char *
FUNC_14(ngx_conf_t *VAR_15, ngx_command_t *VAR_16, void *VAR_17)
{
    ngx_http_map_conf_t *VAR_18 = VAR_17;

    char *VAR_19;
    ngx_str_t *VAR_20, VAR_21;
    ngx_conf_t VAR_22;
    ngx_pool_t *VAR_23;
    ngx_hash_init_t VAR_24;
    ngx_http_map_ctx_t *VAR_25;
    ngx_http_variable_t *VAR_26;
    ngx_http_map_conf_ctx_t VAR_27;
    ngx_http_compile_complex_value_t VAR_28;

    if (VAR_18->hash_max_size == VAR_2) {
        VAR_18->hash_max_size = 2048;
    }

    if (VAR_18->hash_bucket_size == VAR_2) {
        VAR_18->hash_bucket_size = VAR_9;

    } else {
        VAR_18->hash_bucket_size = FUNC_0(VAR_18->hash_bucket_size,
                                          VAR_9);
    }

    VAR_25 = FUNC_12(VAR_15->pool, sizeof(ngx_http_map_ctx_t));
    if (VAR_25 == ((void*)0)) {
        return VAR_0;
    }

    VAR_20 = VAR_15->args->elts;

    FUNC_11(&VAR_28, sizeof(ngx_http_compile_complex_value_t));

    VAR_28.cf = VAR_15;
    VAR_28.value = &VAR_20[1];
    VAR_28.complex_value = &VAR_25->value;

    if (FUNC_10(&VAR_28) != VAR_8) {
        return VAR_0;
    }

    VAR_21 = VAR_20[2];

    if (VAR_21.data[0] != '$') {
        FUNC_2(VAR_7, VAR_15, 0,
                           "invalid variable name \"%V\"", &VAR_21);
        return VAR_0;
    }

    VAR_21.len--;
    VAR_21.data++;

    VAR_26 = FUNC_9(VAR_15, &VAR_21, VAR_5);
    if (VAR_26 == ((void*)0)) {
        return VAR_0;
    }

    VAR_26->get_handler = VAR_13;
    VAR_26->data = (uintptr_t) VAR_25;

    VAR_23 = FUNC_4(VAR_3, VAR_15->log);
    if (VAR_23 == ((void*)0)) {
        return VAR_0;
    }

    VAR_27.keys.pool = VAR_15->pool;
    VAR_27.keys.temp_pool = VAR_23;

    if (FUNC_7(&VAR_27.keys, VAR_4) != VAR_8) {
        FUNC_5(VAR_23);
        return VAR_0;
    }

    VAR_27.values_hash = FUNC_12(VAR_23, sizeof(ngx_array_t) * VAR_27.keys.hsize);
    if (VAR_27.values_hash == ((void*)0)) {
        FUNC_5(VAR_23);
        return VAR_0;
    }
    VAR_27.default_value = ((void*)0);
    VAR_27.cf = &VAR_22;
    VAR_27.hostnames = 0;
    VAR_27.no_cacheable = 0;

    VAR_22 = *VAR_15;
    VAR_15->pool = VAR_23;
    VAR_15->ctx = &VAR_27;
    VAR_15->handler = VAR_11;
    VAR_15->handler_conf = VAR_17;

    VAR_19 = FUNC_3(VAR_15, ((void*)0));

    *VAR_15 = VAR_22;

    if (VAR_19 != VAR_1) {
        FUNC_5(VAR_23);
        return VAR_19;
    }

    if (VAR_27.no_cacheable) {
        VAR_26->flags |= VAR_6;
    }

    VAR_25->default_value = VAR_27.default_value ? VAR_27.default_value:
                                             &VAR_14;

    VAR_25->hostnames = VAR_27.hostnames;

    VAR_24.key = VAR_10;
    VAR_24.max_size = VAR_18->hash_max_size;
    VAR_24.bucket_size = VAR_18->hash_bucket_size;
    VAR_24.name = "map_hash";
    VAR_24.pool = VAR_15->pool;

    if (VAR_27.keys.keys.nelts) {
        VAR_24.hash = &VAR_25->map.hash.hash;
        VAR_24.temp_pool = ((void*)0);

        if (FUNC_6(&VAR_24, VAR_27.keys.keys.elts, VAR_27.keys.keys.nelts)
            != VAR_8)
        {
            FUNC_5(VAR_23);
            return VAR_0;
        }
    }

    if (VAR_27.keys.dns_wc_head.nelts) {

        FUNC_13(VAR_27.keys.dns_wc_head.elts,
                  (size_t) VAR_27.keys.dns_wc_head.nelts,
                  sizeof(ngx_hash_key_t), VAR_12);

        VAR_24.hash = ((void*)0);
        VAR_24.temp_pool = VAR_23;

        if (FUNC_8(&VAR_24, VAR_27.keys.dns_wc_head.elts,
                                   VAR_27.keys.dns_wc_head.nelts)
            != VAR_8)
        {
            FUNC_5(VAR_23);
            return VAR_0;
        }

        VAR_25->map.hash.wc_head = (ngx_hash_wildcard_t *) VAR_24.hash;
    }

    if (VAR_27.keys.dns_wc_tail.nelts) {

        FUNC_13(VAR_27.keys.dns_wc_tail.elts,
                  (size_t) VAR_27.keys.dns_wc_tail.nelts,
                  sizeof(ngx_hash_key_t), VAR_12);

        VAR_24.hash = ((void*)0);
        VAR_24.temp_pool = VAR_23;

        if (FUNC_8(&VAR_24, VAR_27.keys.dns_wc_tail.elts,
                                   VAR_27.keys.dns_wc_tail.nelts)
            != VAR_8)
        {
            FUNC_5(VAR_23);
            return VAR_0;
        }

        VAR_25->map.hash.wc_tail = (ngx_hash_wildcard_t *) VAR_24.hash;
    }
    FUNC_5(VAR_23);

    return VAR_19;
}
