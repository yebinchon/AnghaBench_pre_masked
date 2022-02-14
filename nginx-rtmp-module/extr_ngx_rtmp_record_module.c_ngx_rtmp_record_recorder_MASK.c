
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


typedef int ngx_str_t ;
struct TYPE_21__ {int id; int rec; struct TYPE_21__** rec_conf; int applications; struct TYPE_21__** app_conf; } ;
typedef TYPE_3__ ngx_rtmp_record_app_conf_t ;
struct TYPE_22__ {TYPE_3__* (* create_app_conf ) (TYPE_8__*) ;} ;
typedef TYPE_4__ ngx_rtmp_module_t ;
typedef TYPE_3__ ngx_rtmp_core_app_conf_t ;
struct TYPE_23__ {TYPE_3__** app_conf; int srv_conf; int main_conf; } ;
typedef TYPE_6__ ngx_rtmp_conf_ctx_t ;
struct TYPE_24__ {scalar_t__ type; size_t ctx_index; TYPE_4__* ctx; } ;
typedef TYPE_7__ ngx_module_t ;
typedef size_t ngx_int_t ;
struct TYPE_25__ {int cmd_type; TYPE_6__* ctx; TYPE_2__* cycle; int pool; TYPE_1__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_20__ {TYPE_7__** modules; } ;
struct TYPE_19__ {int * elts; } ;
struct TYPE_18__ {size_t ctx_index; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 char* FUNC_1 (TYPE_8__*,int *) ;
 TYPE_7__** VAR_3 ;
 void* FUNC_2 (int ,int) ;
 void* FUNC_3 (TYPE_8__*,TYPE_12__) ;
 TYPE_12__ VAR_4 ;
 int VAR_5 ;
 TYPE_12__ VAR_6 ;
 TYPE_3__* FUNC_4 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    ngx_int_t VAR_11;
    ngx_str_t *VAR_12;
    ngx_conf_t VAR_13;
    ngx_module_t **VAR_14;
    ngx_rtmp_module_t *VAR_15;
    ngx_rtmp_core_app_conf_t *VAR_16, **VAR_17, *VAR_18;
    ngx_rtmp_record_app_conf_t *VAR_19, **VAR_20, *VAR_21;
    ngx_rtmp_conf_ctx_t *VAR_22, *VAR_23;

    VAR_12 = VAR_7->args->elts;

    VAR_16 = FUNC_3(VAR_7, VAR_4);

    VAR_19 = FUNC_3(VAR_7, VAR_6);

    VAR_22 = FUNC_2(VAR_7->pool, sizeof(ngx_rtmp_conf_ctx_t));
    if (VAR_22 == ((void*)0)) {
        return VAR_0;
    }

    VAR_23 = VAR_7->ctx;

    VAR_22->main_conf = VAR_23->main_conf;
    VAR_22->srv_conf = VAR_23->srv_conf;

    VAR_22->app_conf = FUNC_2(VAR_7->pool, sizeof(void *) * VAR_5);
    if (VAR_22->app_conf == ((void*)0)) {
        return VAR_0;
    }




    VAR_14 = VAR_3;


    for (VAR_11 = 0; VAR_14[VAR_11]; VAR_11++) {
        if (VAR_14[VAR_11]->type != VAR_1) {
            continue;
        }

        VAR_15 = VAR_14[VAR_11]->ctx;

        if (VAR_15->create_app_conf) {
            VAR_22->app_conf[VAR_14[VAR_11]->ctx_index] = VAR_15->create_app_conf(VAR_7);
            if (VAR_22->app_conf[VAR_14[VAR_11]->ctx_index] == ((void*)0)) {
                return VAR_0;
            }
        }
    }


    VAR_18 = VAR_22->app_conf[VAR_4.ctx_index];
    VAR_18->app_conf = VAR_22->app_conf;
    VAR_17 = FUNC_0(&VAR_16->applications);
    if (VAR_17 == ((void*)0)) {
        return VAR_0;
    }
    *VAR_17 = VAR_18;


    VAR_21 = VAR_22->app_conf[VAR_6.ctx_index];
    VAR_21->rec_conf = VAR_22->app_conf;
    VAR_20 = FUNC_0(&VAR_19->rec);
    if (VAR_20 == ((void*)0)) {
        return VAR_0;
    }
    *VAR_20 = VAR_21;

    VAR_21->id = VAR_12[1];


    VAR_13 = *VAR_7;
    VAR_7->ctx = VAR_22;
    VAR_7->cmd_type = VAR_2;

    VAR_10 = FUNC_1(VAR_7, ((void*)0));
    *VAR_7= VAR_13;

    return VAR_10;
}
