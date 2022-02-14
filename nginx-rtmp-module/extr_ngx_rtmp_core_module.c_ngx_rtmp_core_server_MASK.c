
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


typedef size_t ngx_uint_t ;
struct TYPE_17__ {void* (* create_app_conf ) (TYPE_7__*) ;void* (* create_srv_conf ) (TYPE_7__*) ;} ;
typedef TYPE_2__ ngx_rtmp_module_t ;
struct TYPE_18__ {TYPE_5__* ctx; } ;
typedef TYPE_3__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_19__ {int servers; } ;
typedef TYPE_4__ ngx_rtmp_core_main_conf_t ;
struct TYPE_20__ {TYPE_4__** main_conf; TYPE_3__** srv_conf; void** app_conf; } ;
typedef TYPE_5__ ngx_rtmp_conf_ctx_t ;
struct TYPE_21__ {scalar_t__ type; size_t ctx_index; TYPE_2__* ctx; } ;
typedef TYPE_6__ ngx_module_t ;
struct TYPE_22__ {int cmd_type; TYPE_5__* ctx; TYPE_1__* cycle; int pool; } ;
typedef TYPE_7__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_16__ {TYPE_6__** modules; } ;
struct TYPE_15__ {size_t ctx_index; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__** FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_7__*,int *) ;
 TYPE_6__** VAR_3 ;
 void* FUNC_2 (int ,int) ;
 TYPE_11__ VAR_4 ;
 int VAR_5 ;
 void* FUNC_3 (TYPE_7__*) ;
 void* FUNC_4 (TYPE_7__*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    char *VAR_9;
    void *VAR_10;
    ngx_uint_t VAR_11;
    ngx_conf_t VAR_12;
    ngx_module_t **VAR_13;
    ngx_rtmp_module_t *VAR_14;
    ngx_rtmp_conf_ctx_t *VAR_15, *VAR_16;
    ngx_rtmp_core_srv_conf_t *VAR_17, **VAR_18;
    ngx_rtmp_core_main_conf_t *VAR_19;

    VAR_15 = FUNC_2(VAR_6->pool, sizeof(ngx_rtmp_conf_ctx_t));
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_16 = VAR_6->ctx;
    VAR_15->main_conf = VAR_16->main_conf;



    VAR_15->srv_conf = FUNC_2(VAR_6->pool, sizeof(void *) * VAR_5);
    if (VAR_15->srv_conf == ((void*)0)) {
        return VAR_0;
    }

    VAR_15->app_conf = FUNC_2(VAR_6->pool, sizeof(void *) * VAR_5);
    if (VAR_15->app_conf == ((void*)0)) {
        return VAR_0;
    }




    VAR_13 = VAR_3;


    for (VAR_11 = 0; VAR_13[VAR_11]; VAR_11++) {
        if (VAR_13[VAR_11]->type != VAR_1) {
            continue;
        }

        VAR_14 = VAR_13[VAR_11]->ctx;

        if (VAR_14->create_srv_conf) {
            VAR_10 = VAR_14->create_srv_conf(VAR_6);
            if (VAR_10 == ((void*)0)) {
                return VAR_0;
            }

            VAR_15->srv_conf[VAR_13[VAR_11]->ctx_index] = VAR_10;
        }

        if (VAR_14->create_app_conf) {
            VAR_10 = VAR_14->create_app_conf(VAR_6);
            if (VAR_10 == ((void*)0)) {
                return VAR_0;
            }

            VAR_15->app_conf[VAR_13[VAR_11]->ctx_index] = VAR_10;
        }
    }



    VAR_17 = VAR_15->srv_conf[VAR_4.ctx_index];
    VAR_17->ctx = VAR_15;

    VAR_19 = VAR_15->main_conf[VAR_4.ctx_index];

    VAR_18 = FUNC_0(&VAR_19->servers);
    if (VAR_18 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_18 = VAR_17;




    VAR_12 = *VAR_6;
    VAR_6->ctx = VAR_15;
    VAR_6->cmd_type = VAR_2;

    VAR_9 = FUNC_1(VAR_6, ((void*)0));

    *VAR_6 = VAR_12;

    return VAR_9;
}
