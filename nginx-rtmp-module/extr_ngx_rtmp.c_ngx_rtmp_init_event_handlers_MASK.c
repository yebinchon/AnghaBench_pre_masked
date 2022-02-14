
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int pm_events ;
typedef int ngx_rtmp_handler_pt ;
struct TYPE_22__ {size_t nelts; TYPE_5__* elts; } ;
struct TYPE_15__ {size_t nelts; TYPE_4__* elts; } ;
struct TYPE_17__ {TYPE_8__ amf_arrays; int amf_hash; TYPE_1__ amf; TYPE_8__* events; } ;
typedef TYPE_3__ ngx_rtmp_core_main_conf_t ;
struct TYPE_16__ {scalar_t__ len; int data; } ;
struct TYPE_18__ {int handler; TYPE_2__ name; } ;
typedef TYPE_4__ ngx_rtmp_amf_handler_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {int * value; TYPE_2__ key; int key_hash; } ;
typedef TYPE_5__ ngx_hash_key_t ;
struct TYPE_20__ {int max_size; char* name; int * temp_pool; int pool; int bucket_size; int (* key ) (int ,scalar_t__) ;int * hash; } ;
typedef TYPE_6__ ngx_hash_init_t ;
struct TYPE_21__ {int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef TYPE_8__ ngx_array_t ;
typedef int amf_events ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 size_t VAR_2 ;
 size_t VAR_3 ;
 int * FUNC_0 (int ,int,int) ;
 int FUNC_1 (TYPE_8__*,int ,int,int) ;
 void* FUNC_2 (TYPE_8__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*,size_t) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_conf_t *VAR_9, ngx_rtmp_core_main_conf_t *VAR_10)
{
    ngx_hash_init_t VAR_11;
    ngx_rtmp_handler_pt *VAR_12;
    ngx_rtmp_amf_handler_t *VAR_13;
    ngx_hash_key_t *VAR_14;
    size_t VAR_15, VAR_16;

    static size_t VAR_17[] = {
        128,
        138,
        137,
        136,
        129
    };

    static size_t VAR_18[] = {
        132,
        131,
        130,
        135,
        134,
        133
    };


    for(VAR_15 = 0; VAR_15 < sizeof(VAR_17) / sizeof(VAR_17[0]); ++VAR_15) {
        VAR_12 = FUNC_2(&VAR_10->events[VAR_17[VAR_15]]);
        *VAR_12 = VAR_7;
    }


    for(VAR_15 = 0; VAR_15 < sizeof(VAR_18) / sizeof(VAR_18[0]); ++VAR_15) {
        VAR_12 = FUNC_2(&VAR_10->events[VAR_18[VAR_15]]);
        *VAR_12 = VAR_6;
    }


    VAR_12 = FUNC_2(&VAR_10->events[VAR_3]);
    *VAR_12 = VAR_8;


    VAR_12 = FUNC_2(&VAR_10->events[VAR_2]);
    *VAR_12 = VAR_5;


    FUNC_1(&VAR_10->amf_arrays, VAR_9->pool, 1, sizeof(ngx_hash_key_t));

    VAR_13 = VAR_10->amf.elts;
    for(VAR_15 = 0; VAR_15 < VAR_10->amf.nelts; ++VAR_15, ++VAR_13) {
        VAR_14 = VAR_10->amf_arrays.elts;
        for(VAR_16 = 0; VAR_16 < VAR_10->amf_arrays.nelts; ++VAR_16, ++VAR_14) {
            if (VAR_13->name.len == VAR_14->key.len
                    && !FUNC_5(VAR_13->name.data, VAR_14->key.data, VAR_14->key.len))
            {
                break;
            }
        }
        if (VAR_16 == VAR_10->amf_arrays.nelts) {
            VAR_14 = FUNC_2(&VAR_10->amf_arrays);
            VAR_14->key = VAR_13->name;
            VAR_14->key_hash = FUNC_4(VAR_14->key.data, VAR_14->key.len);
            VAR_14->value = FUNC_0(VAR_9->pool, 1,
                    sizeof(ngx_rtmp_handler_pt));
            if (VAR_14->value == ((void*)0)) {
                return VAR_0;
            }
        }

        VAR_12 = FUNC_2((ngx_array_t*)VAR_14->value);
        *VAR_12 = VAR_13->handler;
    }

    VAR_11.hash = &VAR_10->amf_hash;
    VAR_11.key = FUNC_4;
    VAR_11.max_size = 512;
    VAR_11.bucket_size = VAR_4;
    VAR_11.name = "amf_hash";
    VAR_11.pool = VAR_9->pool;
    VAR_11.temp_pool = ((void*)0);

    if (FUNC_3(&VAR_11, VAR_10->amf_arrays.elts, VAR_10->amf_arrays.nelts)
            != VAR_1)
    {
        return VAR_0;
    }

    return VAR_1;
}
