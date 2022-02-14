
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_19__ ;
typedef struct TYPE_20__ TYPE_12__ ;


struct TYPE_25__ {int no_resolve; int no_port; int host; } ;
typedef TYPE_4__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
struct TYPE_26__ {TYPE_19__* servers; struct TYPE_26__** srv_conf; } ;
typedef TYPE_5__ ngx_http_upstream_srv_conf_t ;
typedef int ngx_http_upstream_server_t ;
struct TYPE_27__ {void* (* create_loc_conf ) (TYPE_8__*) ;void* (* create_srv_conf ) (TYPE_8__*) ;} ;
typedef TYPE_6__ ngx_http_module_t ;
struct TYPE_28__ {void** loc_conf; TYPE_5__** srv_conf; int main_conf; } ;
typedef TYPE_7__ ngx_http_conf_ctx_t ;
struct TYPE_29__ {int cmd_type; TYPE_7__* ctx; int pool; TYPE_3__* cycle; TYPE_1__* args; } ;
typedef TYPE_8__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_24__ {TYPE_2__** modules; } ;
struct TYPE_23__ {scalar_t__ type; size_t ctx_index; TYPE_6__* ctx; } ;
struct TYPE_22__ {int * elts; } ;
struct TYPE_21__ {scalar_t__ nelts; } ;
struct TYPE_20__ {size_t ctx_index; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_19__* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,TYPE_8__*,int ,char*) ;
 char* FUNC_2 (TYPE_8__*,int *) ;
 int VAR_12 ;
 TYPE_5__* FUNC_3 (TYPE_8__*,TYPE_4__*,int) ;
 TYPE_12__ VAR_13 ;
 int FUNC_4 (TYPE_4__*,int) ;
 void* FUNC_5 (int ,int) ;
 void* FUNC_6 (TYPE_8__*) ;
 void* FUNC_7 (TYPE_8__*) ;

__attribute__((used)) static char *
FUNC_8(ngx_conf_t *VAR_14, ngx_command_t *VAR_15, void *VAR_16)
{
    char *VAR_17;
    void *VAR_18;
    ngx_str_t *VAR_19;
    ngx_url_t VAR_20;
    ngx_uint_t VAR_21;
    ngx_conf_t VAR_22;
    ngx_http_module_t *VAR_23;
    ngx_http_conf_ctx_t *VAR_24, *VAR_25;
    ngx_http_upstream_srv_conf_t *VAR_26;

    FUNC_4(&VAR_20, sizeof(ngx_url_t));

    VAR_19 = VAR_14->args->elts;
    VAR_20.host = VAR_19[1];
    VAR_20.no_resolve = 1;
    VAR_20.no_port = 1;

    VAR_26 = FUNC_3(VAR_14, &VAR_20, VAR_4
                                         |VAR_9
                                         |VAR_7
                                         |VAR_8
                                         |VAR_6
                                         |VAR_5
                                         |VAR_3);
    if (VAR_26 == ((void*)0)) {
        return VAR_0;
    }


    VAR_24 = FUNC_5(VAR_14->pool, sizeof(ngx_http_conf_ctx_t));
    if (VAR_24 == ((void*)0)) {
        return VAR_0;
    }

    VAR_25 = VAR_14->ctx;
    VAR_24->main_conf = VAR_25->main_conf;



    VAR_24->srv_conf = FUNC_5(VAR_14->pool, sizeof(void *) * VAR_12);
    if (VAR_24->srv_conf == ((void*)0)) {
        return VAR_0;
    }

    VAR_24->srv_conf[VAR_13.ctx_index] = VAR_26;

    VAR_26->srv_conf = VAR_24->srv_conf;




    VAR_24->loc_conf = FUNC_5(VAR_14->pool, sizeof(void *) * VAR_12);
    if (VAR_24->loc_conf == ((void*)0)) {
        return VAR_0;
    }

    for (VAR_21 = 0; VAR_14->cycle->modules[VAR_21]; VAR_21++) {
        if (VAR_14->cycle->modules[VAR_21]->type != VAR_2) {
            continue;
        }

        VAR_23 = VAR_14->cycle->modules[VAR_21]->ctx;

        if (VAR_23->create_srv_conf) {
            VAR_18 = VAR_23->create_srv_conf(VAR_14);
            if (VAR_18 == ((void*)0)) {
                return VAR_0;
            }

            VAR_24->srv_conf[VAR_14->cycle->modules[VAR_21]->ctx_index] = VAR_18;
        }

        if (VAR_23->create_loc_conf) {
            VAR_18 = VAR_23->create_loc_conf(VAR_14);
            if (VAR_18 == ((void*)0)) {
                return VAR_0;
            }

            VAR_24->loc_conf[VAR_14->cycle->modules[VAR_21]->ctx_index] = VAR_18;
        }
    }

    VAR_26->servers = FUNC_0(VAR_14->pool, 4,
                                     sizeof(ngx_http_upstream_server_t));
    if (VAR_26->servers == ((void*)0)) {
        return VAR_0;
    }




    VAR_22 = *VAR_14;
    VAR_14->ctx = VAR_24;
    VAR_14->cmd_type = VAR_10;

    VAR_17 = FUNC_2(VAR_14, ((void*)0));

    *VAR_14 = VAR_22;

    if (VAR_17 != VAR_1) {
        return VAR_17;
    }

    if (VAR_26->servers->nelts == 0) {
        FUNC_1(VAR_11, VAR_14, 0,
                           "no servers are inside upstream");
        return VAR_0;
    }

    return VAR_17;
}
