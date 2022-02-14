
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_20__ {int quote; scalar_t__ status; scalar_t__ ip; int log; TYPE_7__* request; int * sp; } ;
typedef TYPE_4__ ngx_http_script_engine_t ;
typedef int (* ngx_http_script_code_pt ) (TYPE_4__*) ;
struct TYPE_21__ {int stack_size; int log; TYPE_3__* codes; } ;
typedef TYPE_6__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_22__ {scalar_t__ phase_handler; scalar_t__ loc_conf; int pool; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_23__ {TYPE_2__* ctx; } ;
typedef TYPE_8__ ngx_http_core_srv_conf_t ;
struct TYPE_17__ {scalar_t__ location_rewrite_index; } ;
struct TYPE_24__ {TYPE_1__ phase_engine; } ;
typedef TYPE_9__ ngx_http_core_main_conf_t ;
struct TYPE_19__ {scalar_t__ elts; } ;
struct TYPE_18__ {scalar_t__ loc_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_7__*,int ) ;
 TYPE_9__* FUNC_1 (TYPE_7__*,int ) ;
 TYPE_8__* FUNC_2 (TYPE_7__*,int ) ;
 int VAR_3 ;
 void* FUNC_3 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4)
{
    ngx_int_t VAR_5;
    ngx_http_script_code_pt VAR_6;
    ngx_http_script_engine_t *VAR_7;
    ngx_http_core_srv_conf_t *VAR_8;
    ngx_http_core_main_conf_t *VAR_9;
    ngx_http_rewrite_loc_conf_t *VAR_10;

    VAR_9 = FUNC_1(VAR_4, VAR_2);
    VAR_8 = FUNC_2(VAR_4, VAR_2);
    VAR_5 = VAR_9->phase_engine.location_rewrite_index;

    if (VAR_4->phase_handler == VAR_5 && VAR_4->loc_conf == VAR_8->ctx->loc_conf) {

        return VAR_0;
    }

    VAR_10 = FUNC_0(VAR_4, VAR_3);

    if (VAR_10->codes == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = FUNC_3(VAR_4->pool, sizeof(ngx_http_script_engine_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7->sp = FUNC_3(VAR_4->pool,
                        VAR_10->stack_size * sizeof(ngx_http_variable_value_t));
    if (VAR_7->sp == ((void*)0)) {
        return VAR_1;
    }

    VAR_7->ip = VAR_10->codes->elts;
    VAR_7->request = VAR_4;
    VAR_7->quote = 1;
    VAR_7->log = VAR_10->log;
    VAR_7->status = VAR_0;

    while (*(uintptr_t *) VAR_7->ip) {
        VAR_6 = *(ngx_http_script_code_pt *) VAR_7->ip;
        VAR_6(VAR_7);
    }

    return VAR_7->status;
}
