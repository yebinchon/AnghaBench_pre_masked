
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_27__ {int name; scalar_t__ regex; } ;
typedef TYPE_6__ ngx_http_server_name_t ;
struct TYPE_25__ {int * wc_tail; int * wc_head; int hash; } ;
struct TYPE_28__ {int no_referer; int blocked_referer; int server_names; TYPE_17__* keys; int server_name_regex; int regex; TYPE_4__ hash; int referer_hash_bucket_size; int referer_hash_max_size; } ;
typedef TYPE_7__ ngx_http_referer_conf_t ;
struct TYPE_22__ {size_t nelts; TYPE_6__* elts; } ;
struct TYPE_29__ {TYPE_1__ server_names; } ;
typedef TYPE_8__ ngx_http_core_srv_conf_t ;
typedef int ngx_hash_wildcard_t ;
typedef int ngx_hash_key_t ;
struct TYPE_30__ {char* name; int * hash; int * temp_pool; int pool; int bucket_size; int max_size; int key; } ;
typedef TYPE_9__ ngx_hash_init_t ;
struct TYPE_20__ {int * temp_pool; int pool; int log; } ;
typedef TYPE_10__ ngx_conf_t ;
struct TYPE_26__ {scalar_t__ nelts; int elts; } ;
struct TYPE_24__ {scalar_t__ nelts; int elts; } ;
struct TYPE_23__ {scalar_t__ nelts; int elts; } ;
struct TYPE_21__ {TYPE_5__ dns_wc_tail; TYPE_3__ dns_wc_head; TYPE_2__ keys; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_9__*,int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_9__*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_10__*,TYPE_17__*,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_10__*,TYPE_7__*,scalar_t__) ;
 int VAR_7 ;
 TYPE_8__* FUNC_8 (TYPE_10__*,int ) ;
 int VAR_8 ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int FUNC_10 (int ,size_t,int,int ) ;

__attribute__((used)) static char *
FUNC_11(ngx_conf_t *VAR_9, void *VAR_10, void *VAR_11)
{
    ngx_http_referer_conf_t *VAR_12 = VAR_10;
    ngx_http_referer_conf_t *VAR_13 = VAR_11;

    ngx_uint_t VAR_14;
    ngx_hash_init_t VAR_15;
    ngx_http_server_name_t *VAR_16;
    ngx_http_core_srv_conf_t *VAR_17;

    if (VAR_13->keys == ((void*)0)) {
        VAR_13->hash = VAR_12->hash;






        FUNC_3(VAR_13->no_referer, VAR_12->no_referer, 0);
        FUNC_3(VAR_13->blocked_referer, VAR_12->blocked_referer, 0);
        FUNC_2(VAR_13->referer_hash_max_size,
                                  VAR_12->referer_hash_max_size, 2048);
        FUNC_2(VAR_13->referer_hash_bucket_size,
                                  VAR_12->referer_hash_bucket_size, 64);

        return VAR_1;
    }

    if (VAR_13->server_names == 1) {
        VAR_17 = FUNC_8(VAR_9, VAR_8);

        VAR_16 = VAR_17->server_names.elts;
        for (VAR_14 = 0; VAR_14 < VAR_17->server_names.nelts; VAR_14++) {
            if (FUNC_6(VAR_9, VAR_13->keys, &VAR_16[VAR_14].name, ((void*)0))
                != VAR_4)
            {
                return VAR_0;
            }
        }
    }

    if ((VAR_13->no_referer == 1 || VAR_13->blocked_referer == 1)
        && VAR_13->keys->keys.nelts == 0
        && VAR_13->keys->dns_wc_head.nelts == 0
        && VAR_13->keys->dns_wc_tail.nelts == 0)
    {
        FUNC_9(VAR_3, VAR_9->log, 0,
                      "the \"none\" or \"blocked\" referers are specified "
                      "in the \"valid_referers\" directive "
                      "without any valid referer");
        return VAR_0;
    }

    FUNC_2(VAR_13->referer_hash_max_size,
                              VAR_12->referer_hash_max_size, 2048);
    FUNC_2(VAR_13->referer_hash_bucket_size,
                              VAR_12->referer_hash_bucket_size, 64);
    VAR_13->referer_hash_bucket_size = FUNC_0(VAR_13->referer_hash_bucket_size,
                                               VAR_5);

    VAR_15.key = VAR_6;
    VAR_15.max_size = VAR_13->referer_hash_max_size;
    VAR_15.bucket_size = VAR_13->referer_hash_bucket_size;
    VAR_15.name = "referer_hash";
    VAR_15.pool = VAR_9->pool;

    if (VAR_13->keys->keys.nelts) {
        VAR_15.hash = &VAR_13->hash.hash;
        VAR_15.temp_pool = ((void*)0);

        if (FUNC_4(&VAR_15, VAR_13->keys->keys.elts, VAR_13->keys->keys.nelts)
            != VAR_4)
        {
            return VAR_0;
        }
    }

    if (VAR_13->keys->dns_wc_head.nelts) {

        FUNC_10(VAR_13->keys->dns_wc_head.elts,
                  (size_t) VAR_13->keys->dns_wc_head.nelts,
                  sizeof(ngx_hash_key_t),
                  VAR_7);

        VAR_15.hash = ((void*)0);
        VAR_15.temp_pool = VAR_9->temp_pool;

        if (FUNC_5(&VAR_15, VAR_13->keys->dns_wc_head.elts,
                                   VAR_13->keys->dns_wc_head.nelts)
            != VAR_4)
        {
            return VAR_0;
        }

        VAR_13->hash.wc_head = (ngx_hash_wildcard_t *) VAR_15.hash;
    }

    if (VAR_13->keys->dns_wc_tail.nelts) {

        FUNC_10(VAR_13->keys->dns_wc_tail.elts,
                  (size_t) VAR_13->keys->dns_wc_tail.nelts,
                  sizeof(ngx_hash_key_t),
                  VAR_7);

        VAR_15.hash = ((void*)0);
        VAR_15.temp_pool = VAR_9->temp_pool;

        if (FUNC_5(&VAR_15, VAR_13->keys->dns_wc_tail.elts,
                                   VAR_13->keys->dns_wc_tail.nelts)
            != VAR_4)
        {
            return VAR_0;
        }

        VAR_13->hash.wc_tail = (ngx_hash_wildcard_t *) VAR_15.hash;
    }







    if (VAR_13->no_referer == VAR_2) {
        VAR_13->no_referer = 0;
    }

    if (VAR_13->blocked_referer == VAR_2) {
        VAR_13->blocked_referer = 0;
    }

    VAR_13->keys = ((void*)0);

    return VAR_1;
}
