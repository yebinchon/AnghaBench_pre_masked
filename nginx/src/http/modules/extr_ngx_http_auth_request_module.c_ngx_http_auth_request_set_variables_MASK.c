
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_25__ {int len; int data; } ;
typedef TYPE_4__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {int valid; int len; int data; scalar_t__ not_found; } ;
typedef TYPE_5__ ngx_http_variable_value_t ;
struct TYPE_27__ {int data; } ;
typedef TYPE_6__ ngx_http_variable_t ;
struct TYPE_28__ {TYPE_5__* variables; TYPE_1__* connection; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_23__ {TYPE_6__* elts; } ;
struct TYPE_29__ {TYPE_2__ variables; } ;
typedef TYPE_8__ ngx_http_core_main_conf_t ;
struct TYPE_30__ {size_t index; int (* set_handler ) (TYPE_7__*,TYPE_5__*,int ) ;int value; } ;
typedef TYPE_9__ ngx_http_auth_request_variable_t ;
struct TYPE_20__ {int subrequest; } ;
typedef TYPE_10__ ngx_http_auth_request_ctx_t ;
struct TYPE_21__ {TYPE_3__* vars; } ;
typedef TYPE_11__ ngx_http_auth_request_conf_t ;
struct TYPE_24__ {int nelts; TYPE_9__* elts; } ;
struct TYPE_22__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,TYPE_4__*) ;
 int VAR_3 ;
 TYPE_8__* FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_7__*,TYPE_5__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_4,
    ngx_http_auth_request_conf_t *VAR_5, ngx_http_auth_request_ctx_t *VAR_6)
{
    ngx_str_t VAR_7;
    ngx_http_variable_t *VAR_8;
    ngx_http_variable_value_t *VAR_9;
    ngx_http_auth_request_variable_t *VAR_10, *VAR_11;
    ngx_http_core_main_conf_t *VAR_12;

    FUNC_2(VAR_1, VAR_4->connection->log, 0,
                   "auth request set variables");

    if (VAR_5->vars == ((void*)0)) {
        return VAR_2;
    }

    VAR_12 = FUNC_1(VAR_4, VAR_3);
    VAR_8 = VAR_12->variables.elts;

    VAR_10 = VAR_5->vars->elts;
    VAR_11 = VAR_10 + VAR_5->vars->nelts;

    while (VAR_10 < VAR_11) {





        VAR_9 = &VAR_4->variables[VAR_10->index];

        if (FUNC_0(VAR_6->subrequest, &VAR_10->value, &VAR_7)
            != VAR_2)
        {
            return VAR_0;
        }

        VAR_9->valid = 1;
        VAR_9->not_found = 0;
        VAR_9->data = VAR_7.data;
        VAR_9->len = VAR_7.len;

        if (VAR_10->set_handler) {





            VAR_10->set_handler(VAR_4, VAR_9, VAR_8[VAR_10->index].data);
        }

        VAR_10++;
    }

    return VAR_2;
}
