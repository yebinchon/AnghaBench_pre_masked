
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ time_t ;
struct TYPE_15__ {int count; scalar_t__ lingering_time; int lingering_close; TYPE_2__* connection; TYPE_1__* header_in; scalar_t__ keepalive; scalar_t__ reading_body; struct TYPE_15__* main; int read_event_handler; scalar_t__ discard_body; scalar_t__ stream; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_16__ {int lingering_time; scalar_t__ keepalive_timeout; scalar_t__ lingering_close; int lingering_timeout; } ;
typedef TYPE_4__ ngx_http_core_loc_conf_t ;
struct TYPE_14__ {TYPE_11__* read; } ;
struct TYPE_13__ {scalar_t__ pos; scalar_t__ last; } ;
struct TYPE_12__ {scalar_t__ ready; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_11__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_6)
{
    ngx_http_core_loc_conf_t *VAR_7;
    VAR_7 = FUNC_2(VAR_6, VAR_3);

    if (VAR_6->main->count != 1) {

        if (VAR_6->discard_body) {
            VAR_6->read_event_handler = VAR_4;
            FUNC_0(VAR_6->connection->read, VAR_7->lingering_timeout);

            if (VAR_6->lingering_time == 0) {
                VAR_6->lingering_time = FUNC_5()
                                      + (time_t) (VAR_7->lingering_time / 1000);
            }
        }

        FUNC_1(VAR_6, 0);
        return;
    }

    VAR_6 = VAR_6->main;

    if (VAR_6->reading_body) {
        VAR_6->keepalive = 0;
        VAR_6->lingering_close = 1;
    }

    if (!VAR_5
         && !VAR_2
         && VAR_6->keepalive
         && VAR_7->keepalive_timeout > 0)
    {
        FUNC_3(VAR_6);
        return;
    }

    if (VAR_7->lingering_close == VAR_0
        || (VAR_7->lingering_close == VAR_1
            && (VAR_6->lingering_close
                || VAR_6->header_in->pos < VAR_6->header_in->last
                || VAR_6->connection->read->ready)))
    {
        FUNC_4(VAR_6);
        return;
    }

    FUNC_1(VAR_6, 0);
}
