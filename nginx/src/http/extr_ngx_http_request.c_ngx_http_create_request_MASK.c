
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int stat_reading; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_15__ {TYPE_2__* current_request; TYPE_2__* request; } ;
typedef TYPE_3__ ngx_http_log_ctx_t ;
struct TYPE_16__ {int error_log; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_17__ {TYPE_1__* log; int requests; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_13__ {TYPE_3__* data; } ;


 int FUNC_0 (int ,int) ;
 TYPE_2__* FUNC_1 (TYPE_5__*) ;
 int VAR_0 ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

ngx_http_request_t *
FUNC_4(ngx_connection_t *VAR_3)
{
    ngx_http_request_t *VAR_4;
    ngx_http_log_ctx_t *VAR_5;
    ngx_http_core_loc_conf_t *VAR_6;

    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3->requests++;

    VAR_6 = FUNC_2(VAR_4, VAR_0);

    FUNC_3(VAR_3, VAR_6->error_log);

    VAR_5 = VAR_3->log->data;
    VAR_5->request = VAR_4;
    VAR_5->current_request = VAR_4;







    return VAR_4;
}
