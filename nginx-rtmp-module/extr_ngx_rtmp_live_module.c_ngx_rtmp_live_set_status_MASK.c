
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
struct TYPE_23__ {scalar_t__ timer_set; int handler; int log; TYPE_1__* data; } ;
struct TYPE_21__ {unsigned int active; scalar_t__ publishing; TYPE_3__* cs; int silent; TYPE_4__* session; struct TYPE_21__* next; TYPE_2__* stream; TYPE_7__ idle_evt; } ;
typedef TYPE_5__ ngx_rtmp_live_ctx_t ;
struct TYPE_22__ {scalar_t__ idle_timeout; } ;
typedef TYPE_6__ ngx_rtmp_live_app_conf_t ;
typedef TYPE_7__ ngx_event_t ;
typedef int ngx_chain_t ;
struct TYPE_19__ {scalar_t__ dropped; scalar_t__ active; } ;
struct TYPE_18__ {unsigned int active; TYPE_5__* ctx; } ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_7__*,scalar_t__) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ,char*,unsigned int) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_6__* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_5__* FUNC_5 (TYPE_4__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(ngx_rtmp_session_t *VAR_4, ngx_chain_t *VAR_5,
                         ngx_chain_t **VAR_6, size_t VAR_7,
                         unsigned VAR_8)
{
    ngx_rtmp_live_app_conf_t *VAR_9;
    ngx_rtmp_live_ctx_t *VAR_10, *VAR_11;
    ngx_chain_t **VAR_12;
    ngx_event_t *VAR_13;
    size_t VAR_14;

    VAR_9 = FUNC_4(VAR_4, VAR_3);

    VAR_10 = FUNC_5(VAR_4, VAR_3);

    FUNC_2(VAR_0, VAR_4->connection->log, 0,
                   "live: set active=%ui", VAR_8);

    if (VAR_10->active == VAR_8) {
        FUNC_2(VAR_0, VAR_4->connection->log, 0,
                       "live: unchanged active=%ui", VAR_8);
        return;
    }

    VAR_10->active = VAR_8;

    if (VAR_10->publishing) {



        if (VAR_9->idle_timeout) {
            VAR_13 = &VAR_10->idle_evt;

            if (VAR_8 && !VAR_10->idle_evt.timer_set) {
                VAR_13->data = VAR_4->connection;
                VAR_13->log = VAR_4->connection->log;
                VAR_13->handler = VAR_2;

                FUNC_0(VAR_13, VAR_9->idle_timeout);

            } else if (!VAR_8 && VAR_10->idle_evt.timer_set) {
                FUNC_1(VAR_13);
            }
        }

        VAR_10->stream->active = VAR_8;

        for (VAR_11 = VAR_10->stream->ctx; VAR_11; VAR_11 = VAR_11->next) {
            if (VAR_11->publishing == 0) {
                FUNC_7(VAR_11->session, VAR_5, VAR_6,
                                         VAR_7, VAR_8);
            }
        }

        return;
    }



    if (VAR_5 && FUNC_6(VAR_4, VAR_5, 0) != VAR_1) {
        FUNC_3(VAR_4);
        return;
    }

    if (!VAR_10->silent) {
        VAR_12 = VAR_6;

        for (VAR_14 = 0; VAR_14 < VAR_7; ++VAR_14, ++VAR_12) {
            if (*VAR_12 && FUNC_6(VAR_4, *VAR_12, 0) != VAR_1) {
                FUNC_3(VAR_4);
                return;
            }
        }
    }

    VAR_10->cs[0].active = 0;
    VAR_10->cs[0].dropped = 0;

    VAR_10->cs[1].active = 0;
    VAR_10->cs[1].dropped = 0;
}
