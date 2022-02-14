
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_13__ ;
typedef struct TYPE_25__ TYPE_12__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_33__ {scalar_t__ regex; int name; int server; } ;
typedef TYPE_7__ ngx_http_server_name_t ;
struct TYPE_32__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_34__ {TYPE_6__ server_names; } ;
typedef TYPE_8__ ngx_http_core_srv_conf_t ;
struct TYPE_35__ {int server_names_hash_bucket_size; int server_names_hash_max_size; } ;
typedef TYPE_9__ ngx_http_core_main_conf_t ;
struct TYPE_31__ {size_t nelts; TYPE_8__** elts; } ;
struct TYPE_27__ {int addr_text; } ;
struct TYPE_23__ {size_t nregex; TYPE_7__* regex; TYPE_5__ servers; int * wc_tail; int * wc_head; int hash; TYPE_1__ opt; } ;
typedef TYPE_10__ ngx_http_conf_addr_t ;
typedef int ngx_hash_wildcard_t ;
struct TYPE_30__ {scalar_t__ nelts; int elts; } ;
struct TYPE_29__ {scalar_t__ nelts; int elts; } ;
struct TYPE_28__ {scalar_t__ nelts; int elts; } ;
struct TYPE_24__ {int * temp_pool; TYPE_4__ dns_wc_tail; TYPE_3__ dns_wc_head; TYPE_2__ keys; int pool; } ;
typedef TYPE_11__ ngx_hash_keys_arrays_t ;
typedef int ngx_hash_key_t ;
struct TYPE_25__ {char* name; int * hash; int * temp_pool; int pool; int bucket_size; int max_size; int key; } ;
typedef TYPE_12__ ngx_hash_init_t ;
struct TYPE_26__ {int pool; int log; } ;
typedef TYPE_13__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_11__*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_12__*,int ,scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_12__*,int ,scalar_t__) ;
 int VAR_10 ;
 int FUNC_6 (int ,int ,int ,char*,int *,int *) ;
 int FUNC_7 (TYPE_11__*,int) ;
 TYPE_7__* FUNC_8 (int ,size_t) ;
 int FUNC_9 (int ,size_t,int,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_conf_t *VAR_11, ngx_http_core_main_conf_t *VAR_12,
    ngx_http_conf_addr_t *VAR_13)
{
    ngx_int_t VAR_14;
    ngx_uint_t VAR_15, VAR_16;
    ngx_hash_init_t VAR_17;
    ngx_hash_keys_arrays_t VAR_18;
    ngx_http_server_name_t *VAR_19;
    ngx_http_core_srv_conf_t **VAR_20;






    FUNC_7(&VAR_18, sizeof(ngx_hash_keys_arrays_t));

    VAR_18.temp_pool = FUNC_0(VAR_2, VAR_11->log);
    if (VAR_18.temp_pool == ((void*)0)) {
        return VAR_3;
    }

    VAR_18.pool = VAR_11->pool;

    if (FUNC_4(&VAR_18, VAR_4) != VAR_8) {
        goto failed;
    }

    VAR_20 = VAR_13->servers.elts;

    for (VAR_16 = 0; VAR_16 < VAR_13->servers.nelts; VAR_16++) {

        VAR_19 = VAR_20[VAR_16]->server_names.elts;

        for (VAR_15 = 0; VAR_15 < VAR_20[VAR_16]->server_names.nelts; VAR_15++) {
            VAR_14 = FUNC_2(&VAR_18, &VAR_19[VAR_15].name, VAR_19[VAR_15].server,
                                  VAR_5);

            if (VAR_14 == VAR_3) {
                return VAR_3;
            }

            if (VAR_14 == VAR_1) {
                FUNC_6(VAR_6, VAR_11->log, 0,
                              "invalid server name or wildcard \"%V\" on %V",
                              &VAR_19[VAR_15].name, &VAR_13->opt.addr_text);
                return VAR_3;
            }

            if (VAR_14 == VAR_0) {
                FUNC_6(VAR_7, VAR_11->log, 0,
                              "conflicting server name \"%V\" on %V, ignored",
                              &VAR_19[VAR_15].name, &VAR_13->opt.addr_text);
            }
        }
    }

    VAR_17.key = VAR_9;
    VAR_17.max_size = VAR_12->server_names_hash_max_size;
    VAR_17.bucket_size = VAR_12->server_names_hash_bucket_size;
    VAR_17.name = "server_names_hash";
    VAR_17.pool = VAR_11->pool;

    if (VAR_18.keys.nelts) {
        VAR_17.hash = &VAR_13->hash;
        VAR_17.temp_pool = ((void*)0);

        if (FUNC_3(&VAR_17, VAR_18.keys.elts, VAR_18.keys.nelts) != VAR_8) {
            goto failed;
        }
    }

    if (VAR_18.dns_wc_head.nelts) {

        FUNC_9(VAR_18.dns_wc_head.elts, (size_t) VAR_18.dns_wc_head.nelts,
                  sizeof(ngx_hash_key_t), VAR_10);

        VAR_17.hash = ((void*)0);
        VAR_17.temp_pool = VAR_18.temp_pool;

        if (FUNC_5(&VAR_17, VAR_18.dns_wc_head.elts,
                                   VAR_18.dns_wc_head.nelts)
            != VAR_8)
        {
            goto failed;
        }

        VAR_13->wc_head = (ngx_hash_wildcard_t *) VAR_17.hash;
    }

    if (VAR_18.dns_wc_tail.nelts) {

        FUNC_9(VAR_18.dns_wc_tail.elts, (size_t) VAR_18.dns_wc_tail.nelts,
                  sizeof(ngx_hash_key_t), VAR_10);

        VAR_17.hash = ((void*)0);
        VAR_17.temp_pool = VAR_18.temp_pool;

        if (FUNC_5(&VAR_17, VAR_18.dns_wc_tail.elts,
                                   VAR_18.dns_wc_tail.nelts)
            != VAR_8)
        {
            goto failed;
        }

        VAR_13->wc_tail = (ngx_hash_wildcard_t *) VAR_17.hash;
    }

    FUNC_1(VAR_18.temp_pool);
    return VAR_8;

failed:

    FUNC_1(VAR_18.temp_pool);

    return VAR_3;
}
