
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_34__ ;
typedef struct TYPE_38__ TYPE_32__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_41__ {scalar_t__ (* preconfiguration ) (TYPE_8__*) ;char* (* init_main_conf ) (TYPE_8__*,TYPE_6__*) ;scalar_t__ (* postconfiguration ) (TYPE_8__*) ;int * (* create_loc_conf ) (TYPE_8__*) ;int * (* create_srv_conf ) (TYPE_8__*) ;TYPE_6__* (* create_main_conf ) (TYPE_8__*) ;} ;
typedef TYPE_4__ ngx_http_module_t ;
struct TYPE_42__ {TYPE_1__* ctx; } ;
typedef TYPE_5__ ngx_http_core_srv_conf_t ;
struct TYPE_37__ {size_t nelts; TYPE_5__** elts; } ;
struct TYPE_43__ {int ports; TYPE_2__ servers; } ;
typedef TYPE_6__ ngx_http_core_main_conf_t ;
typedef int ngx_http_core_loc_conf_t ;
struct TYPE_44__ {TYPE_6__** main_conf; int ** loc_conf; int ** srv_conf; } ;
typedef TYPE_7__ ngx_http_conf_ctx_t ;
struct TYPE_45__ {TYPE_34__* cycle; int cmd_type; scalar_t__ module_type; TYPE_7__* ctx; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_40__ {scalar_t__ type; size_t ctx_index; TYPE_4__* ctx; } ;
struct TYPE_39__ {TYPE_3__** modules; } ;
struct TYPE_38__ {size_t ctx_index; } ;
struct TYPE_36__ {int ** loc_conf; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (TYPE_8__*,int *) ;
 int FUNC_1 (TYPE_34__*,scalar_t__) ;
 TYPE_32__ VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_8__*,TYPE_5__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int *) ;
 int VAR_6 ;
 char* FUNC_7 (TYPE_8__*,TYPE_6__*,TYPE_4__*,size_t) ;
 scalar_t__ FUNC_8 (TYPE_8__*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_9 (TYPE_8__*) ;
 void* FUNC_10 (int ,int) ;
 TYPE_6__* FUNC_11 (TYPE_8__*) ;
 int * FUNC_12 (TYPE_8__*) ;
 int * FUNC_13 (TYPE_8__*) ;
 scalar_t__ FUNC_14 (TYPE_8__*) ;
 char* FUNC_15 (TYPE_8__*,TYPE_6__*) ;
 scalar_t__ FUNC_16 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_17(ngx_conf_t *VAR_7, ngx_command_t *VAR_8, void *VAR_9)
{
    char *VAR_10;
    ngx_uint_t VAR_11, VAR_12, VAR_13;
    ngx_conf_t VAR_14;
    ngx_http_module_t *VAR_15;
    ngx_http_conf_ctx_t *VAR_16;
    ngx_http_core_loc_conf_t *VAR_17;
    ngx_http_core_srv_conf_t **VAR_18;
    ngx_http_core_main_conf_t *VAR_19;

    if (*(ngx_http_conf_ctx_t **) VAR_9) {
        return "is duplicate";
    }



    VAR_16 = FUNC_10(VAR_7->pool, sizeof(ngx_http_conf_ctx_t));
    if (VAR_16 == ((void*)0)) {
        return VAR_0;
    }

    *(ngx_http_conf_ctx_t **) VAR_9 = VAR_16;




    VAR_6 = FUNC_1(VAR_7->cycle, VAR_3);




    VAR_16->main_conf = FUNC_10(VAR_7->pool,
                                 sizeof(void *) * VAR_6);
    if (VAR_16->main_conf == ((void*)0)) {
        return VAR_0;
    }







    VAR_16->srv_conf = FUNC_10(VAR_7->pool, sizeof(void *) * VAR_6);
    if (VAR_16->srv_conf == ((void*)0)) {
        return VAR_0;
    }







    VAR_16->loc_conf = FUNC_10(VAR_7->pool, sizeof(void *) * VAR_6);
    if (VAR_16->loc_conf == ((void*)0)) {
        return VAR_0;
    }







    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_15 = VAR_7->cycle->modules[VAR_12]->ctx;
        VAR_11 = VAR_7->cycle->modules[VAR_12]->ctx_index;

        if (VAR_15->create_main_conf) {
            VAR_16->main_conf[VAR_11] = VAR_15->create_main_conf(VAR_7);
            if (VAR_16->main_conf[VAR_11] == ((void*)0)) {
                return VAR_0;
            }
        }

        if (VAR_15->create_srv_conf) {
            VAR_16->srv_conf[VAR_11] = VAR_15->create_srv_conf(VAR_7);
            if (VAR_16->srv_conf[VAR_11] == ((void*)0)) {
                return VAR_0;
            }
        }

        if (VAR_15->create_loc_conf) {
            VAR_16->loc_conf[VAR_11] = VAR_15->create_loc_conf(VAR_7);
            if (VAR_16->loc_conf[VAR_11] == ((void*)0)) {
                return VAR_0;
            }
        }
    }

    VAR_14 = *VAR_7;
    VAR_7->ctx = VAR_16;

    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_15 = VAR_7->cycle->modules[VAR_12]->ctx;

        if (VAR_15->preconfiguration) {
            if (VAR_15->preconfiguration(VAR_7) != VAR_4) {
                return VAR_0;
            }
        }
    }



    VAR_7->module_type = VAR_3;
    VAR_7->cmd_type = VAR_2;
    VAR_10 = FUNC_0(VAR_7, ((void*)0));

    if (VAR_10 != VAR_1) {
        goto failed;
    }






    VAR_19 = VAR_16->main_conf[VAR_5.ctx_index];
    VAR_18 = VAR_19->servers.elts;

    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_15 = VAR_7->cycle->modules[VAR_12]->ctx;
        VAR_11 = VAR_7->cycle->modules[VAR_12]->ctx_index;



        if (VAR_15->init_main_conf) {
            VAR_10 = VAR_15->init_main_conf(VAR_7, VAR_16->main_conf[VAR_11]);
            if (VAR_10 != VAR_1) {
                goto failed;
            }
        }

        VAR_10 = FUNC_7(VAR_7, VAR_19, VAR_15, VAR_11);
        if (VAR_10 != VAR_1) {
            goto failed;
        }
    }




    for (VAR_13 = 0; VAR_13 < VAR_19->servers.nelts; VAR_13++) {

        VAR_17 = VAR_18[VAR_13]->ctx->loc_conf[VAR_5.ctx_index];

        if (FUNC_3(VAR_7, VAR_18[VAR_13], VAR_17) != VAR_4) {
            return VAR_0;
        }

        if (FUNC_6(VAR_7, VAR_17) != VAR_4) {
            return VAR_0;
        }
    }


    if (FUNC_5(VAR_7, VAR_19) != VAR_4) {
        return VAR_0;
    }

    if (FUNC_2(VAR_7, VAR_19) != VAR_4) {
        return VAR_0;
    }


    for (VAR_12 = 0; VAR_7->cycle->modules[VAR_12]; VAR_12++) {
        if (VAR_7->cycle->modules[VAR_12]->type != VAR_3) {
            continue;
        }

        VAR_15 = VAR_7->cycle->modules[VAR_12]->ctx;

        if (VAR_15->postconfiguration) {
            if (VAR_15->postconfiguration(VAR_7) != VAR_4) {
                return VAR_0;
            }
        }
    }

    if (FUNC_9(VAR_7) != VAR_4) {
        return VAR_0;
    }






    *VAR_7 = VAR_14;


    if (FUNC_4(VAR_7, VAR_19) != VAR_4) {
        return VAR_0;
    }




    if (FUNC_8(VAR_7, VAR_19, VAR_19->ports) != VAR_4) {
        return VAR_0;
    }

    return VAR_1;

failed:

    *VAR_7 = VAR_14;

    return VAR_10;
}
