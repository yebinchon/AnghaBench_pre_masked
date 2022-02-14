
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


typedef int ngx_str_t ;
struct TYPE_19__ {TYPE_5__* (* create_app_conf ) (TYPE_8__*) ;} ;
typedef TYPE_3__ ngx_rtmp_module_t ;
struct TYPE_20__ {int applications; } ;
typedef TYPE_4__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_21__ {int name; struct TYPE_21__** app_conf; } ;
typedef TYPE_5__ ngx_rtmp_core_app_conf_t ;
struct TYPE_22__ {TYPE_4__** srv_conf; TYPE_5__** app_conf; int main_conf; } ;
typedef TYPE_6__ ngx_rtmp_conf_ctx_t ;
struct TYPE_23__ {scalar_t__ type; size_t ctx_index; TYPE_3__* ctx; } ;
typedef TYPE_7__ ngx_module_t ;
typedef size_t ngx_int_t ;
struct TYPE_24__ {int cmd_type; TYPE_6__* ctx; TYPE_2__* args; TYPE_1__* cycle; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_18__ {int * elts; } ;
struct TYPE_17__ {TYPE_7__** modules; } ;
struct TYPE_16__ {size_t ctx_index; } ;


 char* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__** FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_8__*,int *) ;
 TYPE_7__** VAR_3 ;
 void* FUNC_2 (int ,int) ;
 TYPE_11__ VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_3 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    char *VAR_9;
    ngx_int_t VAR_10;
    ngx_str_t *VAR_11;
    ngx_conf_t VAR_12;
    ngx_module_t **VAR_13;
    ngx_rtmp_module_t *VAR_14;
    ngx_rtmp_conf_ctx_t *VAR_15, *VAR_16;
    ngx_rtmp_core_srv_conf_t *VAR_17;
    ngx_rtmp_core_app_conf_t *VAR_18, **VAR_19;

    VAR_15 = FUNC_2(VAR_6->pool, sizeof(ngx_rtmp_conf_ctx_t));
    if (VAR_15 == ((void*)0)) {
        return VAR_0;
    }

    VAR_16 = VAR_6->ctx;
    VAR_15->main_conf = VAR_16->main_conf;
    VAR_15->srv_conf = VAR_16->srv_conf;

    VAR_15->app_conf = FUNC_2(VAR_6->pool, sizeof(void *) * VAR_5);
    if (VAR_15->app_conf == ((void*)0)) {
        return VAR_0;
    }




    VAR_13 = VAR_3;


    for (VAR_10 = 0; VAR_13[VAR_10]; VAR_10++) {
        if (VAR_13[VAR_10]->type != VAR_2) {
            continue;
        }

        VAR_14 = VAR_13[VAR_10]->ctx;

        if (VAR_14->create_app_conf) {
            VAR_15->app_conf[VAR_13[VAR_10]->ctx_index] = VAR_14->create_app_conf(VAR_6);
            if (VAR_15->app_conf[VAR_13[VAR_10]->ctx_index] == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    VAR_18 = VAR_15->app_conf[VAR_4.ctx_index];
    VAR_18->app_conf = VAR_15->app_conf;

    VAR_11 = VAR_6->args->elts;

    VAR_18->name = VAR_11[1];
    VAR_17 = VAR_16->srv_conf[VAR_4.ctx_index];

    VAR_19 = FUNC_0(&VAR_17->applications);
    if (VAR_19 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_19 = VAR_18;

    VAR_12 = *VAR_6;
    VAR_6->ctx = VAR_15;
    VAR_6->cmd_type = VAR_1;

    VAR_9 = FUNC_1(VAR_6, ((void*)0));

    *VAR_6= VAR_12;

    return VAR_9;
}
