
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_queue_t ;
struct TYPE_9__ {char* (* merge_loc_conf ) (TYPE_5__*,void*,void*) ;} ;
typedef TYPE_1__ ngx_http_module_t ;
struct TYPE_10__ {TYPE_3__* inclusive; TYPE_3__* exact; } ;
typedef TYPE_2__ ngx_http_location_queue_t ;
struct TYPE_11__ {void** loc_conf; int * locations; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_12__ {void** loc_conf; } ;
typedef TYPE_4__ ngx_http_conf_ctx_t ;
struct TYPE_13__ {scalar_t__ ctx; } ;
typedef TYPE_5__ ngx_conf_t ;


 char* VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 char* FUNC_3 (TYPE_5__*,void*,void*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_1, ngx_queue_t *VAR_2,
    void **VAR_3, ngx_http_module_t *VAR_4, ngx_uint_t VAR_5)
{
    char *VAR_6;
    ngx_queue_t *VAR_7;
    ngx_http_conf_ctx_t *VAR_8, VAR_9;
    ngx_http_core_loc_conf_t *VAR_10;
    ngx_http_location_queue_t *VAR_11;

    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }

    VAR_8 = (ngx_http_conf_ctx_t *) VAR_1->ctx;
    VAR_9 = *VAR_8;

    for (VAR_7 = FUNC_0(VAR_2);
         VAR_7 != FUNC_2(VAR_2);
         VAR_7 = FUNC_1(VAR_7))
    {
        VAR_11 = (ngx_http_location_queue_t *) VAR_7;

        VAR_10 = VAR_11->exact ? VAR_11->exact : VAR_11->inclusive;
        VAR_8->loc_conf = VAR_10->loc_conf;

        VAR_6 = VAR_4->merge_loc_conf(VAR_1, VAR_3[VAR_5],
                                    VAR_10->loc_conf[VAR_5]);
        if (VAR_6 != VAR_0) {
            return VAR_6;
        }

        VAR_6 = FUNC_4(VAR_1, VAR_10->locations, VAR_10->loc_conf,
                                      VAR_4, VAR_5);
        if (VAR_6 != VAR_0) {
            return VAR_6;
        }
    }

    *VAR_8 = VAR_9;

    return VAR_0;
}
