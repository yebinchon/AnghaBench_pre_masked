
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_6__ {scalar_t__ access_code; int phase_handler; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int ngx_http_phase_handler_t ;
struct TYPE_5__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_3(ngx_http_request_t *VAR_5,
    ngx_http_phase_handler_t *VAR_6)
{
    ngx_int_t VAR_7;

    FUNC_1(VAR_2, VAR_5->connection->log, 0,
                   "post access phase: %ui", VAR_5->phase_handler);

    VAR_7 = VAR_5->access_code;

    if (VAR_7) {
        if (VAR_7 == VAR_1) {
            FUNC_2(VAR_3, VAR_5->connection->log, 0,
                          "access forbidden by rule");
        }

        VAR_5->access_code = 0;
        FUNC_0(VAR_5, VAR_7);
        return VAR_4;
    }

    VAR_5->phase_handler++;
    return VAR_0;
}
