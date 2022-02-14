
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {TYPE_2__* www_authenticate; } ;
struct TYPE_16__ {scalar_t__ access_code; scalar_t__ phase_handler; TYPE_3__ headers_out; TYPE_1__* connection; struct TYPE_16__* main; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {scalar_t__ (* handler ) (TYPE_4__*) ;scalar_t__ next; } ;
typedef TYPE_5__ ngx_http_phase_handler_t ;
struct TYPE_18__ {scalar_t__ satisfy; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {scalar_t__ hash; } ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,scalar_t__) ;
 TYPE_6__* FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;

ngx_int_t
FUNC_4(ngx_http_request_t *VAR_9, ngx_http_phase_handler_t *VAR_10)
{
    ngx_int_t VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;

    if (VAR_9 != VAR_9->main) {
        VAR_9->phase_handler = VAR_10->next;
        return VAR_0;
    }

    FUNC_2(VAR_6, VAR_9->connection->log, 0,
                   "access phase: %ui", VAR_9->phase_handler);

    VAR_11 = VAR_10->handler(VAR_9);

    if (VAR_11 == VAR_1) {
        VAR_9->phase_handler++;
        return VAR_0;
    }

    if (VAR_11 == VAR_0 || VAR_11 == VAR_2) {
        return VAR_7;
    }

    VAR_12 = FUNC_1(VAR_9, VAR_8);

    if (VAR_12->satisfy == VAR_4) {

        if (VAR_11 == VAR_7) {
            VAR_9->phase_handler++;
            return VAR_0;
        }

    } else {
        if (VAR_11 == VAR_7) {
            VAR_9->access_code = 0;

            if (VAR_9->headers_out.www_authenticate) {
                VAR_9->headers_out.www_authenticate->hash = 0;
            }

            VAR_9->phase_handler = VAR_10->next;
            return VAR_0;
        }

        if (VAR_11 == VAR_3 || VAR_11 == VAR_5) {
            if (VAR_9->access_code != VAR_5) {
                VAR_9->access_code = VAR_11;
            }

            VAR_9->phase_handler++;
            return VAR_0;
        }
    }



    FUNC_0(VAR_9, VAR_11);
    return VAR_7;
}
