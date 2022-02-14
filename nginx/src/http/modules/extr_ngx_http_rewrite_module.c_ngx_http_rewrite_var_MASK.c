
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_int_t ;
typedef int ngx_http_variable_value_t ;
struct TYPE_14__ {int name; } ;
typedef TYPE_3__ ngx_http_variable_t ;
struct TYPE_15__ {scalar_t__ uninitialized_variable_warn; } ;
typedef TYPE_4__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_16__ {TYPE_1__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_13__ {TYPE_3__* elts; } ;
struct TYPE_17__ {TYPE_2__ variables; } ;
typedef TYPE_6__ ngx_http_core_main_conf_t ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (TYPE_5__*,int ) ;
 TYPE_6__* FUNC_1 (TYPE_5__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_http_request_t *VAR_5, ngx_http_variable_value_t *VAR_6,
    uintptr_t VAR_7)
{
    ngx_http_variable_t *VAR_8;
    ngx_http_core_main_conf_t *VAR_9;
    ngx_http_rewrite_loc_conf_t *VAR_10;

    VAR_10 = FUNC_0(VAR_5, VAR_3);

    if (VAR_10->uninitialized_variable_warn == 0) {
        *VAR_6 = VAR_4;
        return VAR_1;
    }

    VAR_9 = FUNC_1(VAR_5, VAR_2);

    VAR_8 = VAR_9->variables.elts;







    FUNC_2(VAR_0, VAR_5->connection->log, 0,
                  "using uninitialized \"%V\" variable", &VAR_8[VAR_7].name);

    *VAR_6 = VAR_4;

    return VAR_1;
}
