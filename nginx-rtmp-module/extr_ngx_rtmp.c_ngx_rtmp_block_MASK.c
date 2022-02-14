
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_44__ TYPE_8__ ;
typedef struct TYPE_43__ TYPE_7__ ;
typedef struct TYPE_42__ TYPE_6__ ;
typedef struct TYPE_41__ TYPE_5__ ;
typedef struct TYPE_40__ TYPE_4__ ;
typedef struct TYPE_39__ TYPE_3__ ;
typedef struct TYPE_38__ TYPE_33__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_29__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_39__ {scalar_t__ (* preconfiguration ) (TYPE_8__*) ;char* (* init_main_conf ) (TYPE_8__*,TYPE_5__*) ;char* (* merge_srv_conf ) (TYPE_8__*,TYPE_4__*,TYPE_4__*) ;char* (* merge_app_conf ) (TYPE_8__*,int *,int *) ;scalar_t__ (* postconfiguration ) (TYPE_8__*) ;int * (* create_app_conf ) (TYPE_8__*) ;TYPE_4__* (* create_srv_conf ) (TYPE_8__*) ;TYPE_5__* (* create_main_conf ) (TYPE_8__*) ;} ;
typedef TYPE_3__ ngx_rtmp_module_t ;
typedef int ngx_rtmp_listen_t ;
struct TYPE_40__ {TYPE_6__* ctx; int applications; } ;
typedef TYPE_4__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_37__ {size_t nelts; int * elts; } ;
struct TYPE_35__ {size_t nelts; TYPE_4__** elts; } ;
struct TYPE_41__ {TYPE_2__ listen; TYPE_1__ servers; } ;
typedef TYPE_5__ ngx_rtmp_core_main_conf_t ;
typedef int ngx_rtmp_conf_port_t ;
struct TYPE_42__ {int ** app_conf; TYPE_4__** srv_conf; TYPE_5__** main_conf; } ;
typedef TYPE_6__ ngx_rtmp_conf_ctx_t ;
struct TYPE_43__ {scalar_t__ type; size_t ctx_index; TYPE_3__* ctx; } ;
typedef TYPE_7__ ngx_module_t ;
struct TYPE_44__ {int temp_pool; TYPE_6__* ctx; int cmd_type; scalar_t__ module_type; TYPE_33__* cycle; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_38__ {TYPE_7__** modules; } ;
struct TYPE_36__ {size_t ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 char* FUNC_1 (TYPE_8__*,int *) ;
 int FUNC_2 (TYPE_33__*,scalar_t__) ;
 TYPE_7__** VAR_5 ;
 void* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int *,int *) ;
 TYPE_29__ VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_8__*,TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,TYPE_5__*) ;
 int VAR_7 ;
 char* FUNC_7 (TYPE_8__*,int *,int **,TYPE_3__*,size_t) ;
 char* FUNC_8 (TYPE_8__*,int *) ;
 TYPE_5__* FUNC_9 (TYPE_8__*) ;
 TYPE_4__* FUNC_10 (TYPE_8__*) ;
 int * FUNC_11 (TYPE_8__*) ;
 scalar_t__ FUNC_12 (TYPE_8__*) ;
 char* FUNC_13 (TYPE_8__*,TYPE_5__*) ;
 char* FUNC_14 (TYPE_8__*,TYPE_4__*,TYPE_4__*) ;
 char* FUNC_15 (TYPE_8__*,int *,int *) ;
 scalar_t__ FUNC_16 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_17(ngx_conf_t *VAR_8, ngx_command_t *VAR_9, void *VAR_10)
{
    char *VAR_11;
    ngx_uint_t VAR_12, VAR_13, VAR_14, VAR_15;
    ngx_conf_t VAR_16;
    ngx_array_t VAR_17;
    ngx_module_t **VAR_18;
    ngx_rtmp_listen_t *VAR_19;
    ngx_rtmp_module_t *VAR_20;
    ngx_rtmp_conf_ctx_t *VAR_21;
    ngx_rtmp_core_srv_conf_t *VAR_22, **VAR_23;
    ngx_rtmp_core_main_conf_t *VAR_24;

    VAR_21 = FUNC_3(VAR_8->pool, sizeof(ngx_rtmp_conf_ctx_t));
    if (VAR_21 == ((void*)0)) {
        return VAR_0;
    }

    *(ngx_rtmp_conf_ctx_t **) VAR_10 = VAR_21;
    VAR_7 = 0;
    for (VAR_13 = 0; VAR_5[VAR_13]; VAR_13++) {
        if (VAR_5[VAR_13]->type != VAR_4) {
            continue;
        }

        VAR_5[VAR_13]->ctx_index = VAR_7++;
    }






    VAR_21->main_conf = FUNC_3(VAR_8->pool,
                                 sizeof(void *) * VAR_7);
    if (VAR_21->main_conf == ((void*)0)) {
        return VAR_0;
    }







    VAR_21->srv_conf = FUNC_3(VAR_8->pool, sizeof(void *) * VAR_7);
    if (VAR_21->srv_conf == ((void*)0)) {
        return VAR_0;
    }







    VAR_21->app_conf = FUNC_3(VAR_8->pool, sizeof(void *) * VAR_7);
    if (VAR_21->app_conf == ((void*)0)) {
        return VAR_0;
    }
    VAR_18 = VAR_5;


    for (VAR_13 = 0; VAR_18[VAR_13]; VAR_13++) {
        if (VAR_18[VAR_13]->type != VAR_4) {
            continue;
        }

        VAR_20 = VAR_18[VAR_13]->ctx;
        VAR_14 = VAR_18[VAR_13]->ctx_index;

        if (VAR_20->create_main_conf) {
            VAR_21->main_conf[VAR_14] = VAR_20->create_main_conf(VAR_8);
            if (VAR_21->main_conf[VAR_14] == ((void*)0)) {
                return VAR_0;
            }
        }

        if (VAR_20->create_srv_conf) {
            VAR_21->srv_conf[VAR_14] = VAR_20->create_srv_conf(VAR_8);
            if (VAR_21->srv_conf[VAR_14] == ((void*)0)) {
                return VAR_0;
            }
        }

        if (VAR_20->create_app_conf) {
            VAR_21->app_conf[VAR_14] = VAR_20->create_app_conf(VAR_8);
            if (VAR_21->app_conf[VAR_14] == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    VAR_16 = *VAR_8;
    VAR_8->ctx = VAR_21;

    for (VAR_13 = 0; VAR_18[VAR_13]; VAR_13++) {
        if (VAR_18[VAR_13]->type != VAR_4) {
            continue;
        }

        VAR_20 = VAR_18[VAR_13]->ctx;

        if (VAR_20->preconfiguration) {
            if (VAR_20->preconfiguration(VAR_8) != VAR_2) {
                return VAR_0;
            }
        }
    }



    VAR_8->module_type = VAR_4;
    VAR_8->cmd_type = VAR_3;
    VAR_11 = FUNC_1(VAR_8, ((void*)0));

    if (VAR_11 != VAR_1) {
        *VAR_8 = VAR_16;
        return VAR_11;
    }




    VAR_24 = VAR_21->main_conf[VAR_6.ctx_index];
    VAR_23 = VAR_24->servers.elts;

    for (VAR_13 = 0; VAR_18[VAR_13]; VAR_13++) {
        if (VAR_18[VAR_13]->type != VAR_4) {
            continue;
        }

        VAR_20 = VAR_18[VAR_13]->ctx;
        VAR_14 = VAR_18[VAR_13]->ctx_index;



        VAR_8->ctx = VAR_21;

        if (VAR_20->init_main_conf) {
            VAR_11 = VAR_20->init_main_conf(VAR_8, VAR_21->main_conf[VAR_14]);
            if (VAR_11 != VAR_1) {
                *VAR_8 = VAR_16;
                return VAR_11;
            }
        }

        for (VAR_15 = 0; VAR_15 < VAR_24->servers.nelts; VAR_15++) {



            VAR_8->ctx = VAR_23[VAR_15]->ctx;

            if (VAR_20->merge_srv_conf) {
                VAR_11 = VAR_20->merge_srv_conf(VAR_8,
                                            VAR_21->srv_conf[VAR_14],
                                            VAR_23[VAR_15]->ctx->srv_conf[VAR_14]);
                if (VAR_11 != VAR_1) {
                    *VAR_8 = VAR_16;
                    return VAR_11;
                }
            }

            if (VAR_20->merge_app_conf) {





                VAR_11 = VAR_20->merge_app_conf(VAR_8,
                                            VAR_21->app_conf[VAR_14],
                                            VAR_23[VAR_15]->ctx->app_conf[VAR_14]);
                if (VAR_11 != VAR_1) {
                    *VAR_8 = VAR_16;
                    return VAR_11;
                }



                VAR_22 = VAR_23[VAR_15]->ctx->srv_conf[VAR_6.ctx_index];

                VAR_11 = FUNC_7(VAR_8, &VAR_22->applications,
                                            VAR_23[VAR_15]->ctx->app_conf,
                                            VAR_20, VAR_14);
                if (VAR_11 != VAR_1) {
                    *VAR_8 = VAR_16;
                    return VAR_11;
                }
            }

        }
    }


    if (FUNC_6(VAR_8, VAR_24) != VAR_2) {
        return VAR_0;
    }

    for (VAR_13 = 0; VAR_18[VAR_13]; VAR_13++) {
        if (VAR_18[VAR_13]->type != VAR_4) {
            continue;
        }

        VAR_20 = VAR_18[VAR_13]->ctx;

        if (VAR_20->postconfiguration) {
            if (VAR_20->postconfiguration(VAR_8) != VAR_2) {
                return VAR_0;
            }
        }
    }

    *VAR_8 = VAR_16;

    if (FUNC_5(VAR_8, VAR_24) != VAR_2) {
        return VAR_0;
    }

    if (FUNC_0(&VAR_17, VAR_8->temp_pool, 4, sizeof(ngx_rtmp_conf_port_t))
        != VAR_2)
    {
        return VAR_0;
    }

    VAR_19 = VAR_24->listen.elts;

    for (VAR_12 = 0; VAR_12 < VAR_24->listen.nelts; VAR_12++) {
        if (FUNC_4(VAR_8, &VAR_17, &VAR_19[VAR_12]) != VAR_2) {
            return VAR_0;
        }
    }

    return FUNC_8(VAR_8, &VAR_17);
}
