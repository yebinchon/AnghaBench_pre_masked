
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef size_t ngx_uint_t ;
struct TYPE_24__ {scalar_t__ (* init_upstream ) (TYPE_6__*,TYPE_4__*) ;} ;
struct TYPE_26__ {TYPE_2__ peer; } ;
typedef TYPE_4__ ngx_http_upstream_srv_conf_t ;
struct TYPE_23__ {size_t nelts; TYPE_4__** elts; } ;
struct TYPE_27__ {int headers_in_hash; TYPE_1__ upstreams; } ;
typedef TYPE_5__ ngx_http_upstream_main_conf_t ;
typedef scalar_t__ (* ngx_http_upstream_init_pt ) (TYPE_6__*,TYPE_4__*) ;
struct TYPE_25__ {scalar_t__ len; int data; } ;
struct TYPE_29__ {TYPE_3__ name; } ;
typedef TYPE_8__ ngx_http_upstream_header_t ;
struct TYPE_30__ {TYPE_8__* value; int key_hash; TYPE_3__ key; } ;
typedef TYPE_9__ ngx_hash_key_t ;
struct TYPE_21__ {int max_size; char* name; int * temp_pool; int pool; int bucket_size; int (* key ) (int ,scalar_t__) ;int * hash; } ;
typedef TYPE_10__ ngx_hash_init_t ;
struct TYPE_28__ {int pool; int temp_pool; } ;
typedef TYPE_6__ ngx_conf_t ;
struct TYPE_22__ {int nelts; int elts; } ;
typedef TYPE_12__ ngx_array_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (TYPE_12__*,int ,int,int) ;
 TYPE_9__* FUNC_2 (TYPE_12__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_10__*,int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 TYPE_8__* VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_4__*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_5, void *VAR_6)
{
    ngx_http_upstream_main_conf_t *VAR_7 = VAR_6;

    ngx_uint_t VAR_8;
    ngx_array_t VAR_9;
    ngx_hash_key_t *VAR_10;
    ngx_hash_init_t VAR_11;
    ngx_http_upstream_init_pt VAR_12;
    ngx_http_upstream_header_t *VAR_13;
    ngx_http_upstream_srv_conf_t **VAR_14;

    VAR_14 = VAR_7->upstreams.elts;

    for (VAR_8 = 0; VAR_8 < VAR_7->upstreams.nelts; VAR_8++) {

        VAR_12 = VAR_14[VAR_8]->peer.init_upstream ? VAR_14[VAR_8]->peer.init_upstream:
                                            FUNC_5;

        if (VAR_12(VAR_5, VAR_14[VAR_8]) != VAR_2) {
            return VAR_0;
        }
    }




    if (FUNC_1(&VAR_9, VAR_5->temp_pool, 32, sizeof(ngx_hash_key_t))
        != VAR_2)
    {
        return VAR_0;
    }

    for (VAR_13 = VAR_4; VAR_13->name.len; VAR_13++) {
        VAR_10 = FUNC_2(&VAR_9);
        if (VAR_10 == ((void*)0)) {
            return VAR_0;
        }

        VAR_10->key = VAR_13->name;
        VAR_10->key_hash = FUNC_4(VAR_13->name.data, VAR_13->name.len);
        VAR_10->value = VAR_13;
    }

    VAR_11.hash = &VAR_7->headers_in_hash;
    VAR_11.key = FUNC_4;
    VAR_11.max_size = 512;
    VAR_11.bucket_size = FUNC_0(64, VAR_3);
    VAR_11.name = "upstream_headers_in_hash";
    VAR_11.pool = VAR_5->pool;
    VAR_11.temp_pool = ((void*)0);

    if (FUNC_3(&VAR_11, VAR_9.elts, VAR_9.nelts) != VAR_2) {
        return VAR_0;
    }

    return VAR_1;
}
