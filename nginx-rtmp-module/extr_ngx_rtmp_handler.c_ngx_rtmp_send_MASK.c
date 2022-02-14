
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {size_t out_pos; size_t out_last; scalar_t__ out_bpos; int ping_reset; size_t out_queue; int posted_dry_events; TYPE_8__* out_chain; TYPE_8__** out; int out_bytes; int timeout; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ active; scalar_t__ timer_set; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
typedef int ngx_cycle_t ;
struct TYPE_15__ {int timedout; scalar_t__ (* send ) (TYPE_4__*,scalar_t__,scalar_t__) ;int write; int log; scalar_t__ destroyed; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_16__ {TYPE_1__* buf; struct TYPE_16__* next; } ;
struct TYPE_12__ {scalar_t__ pos; scalar_t__ last; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_8__*) ;
 int * FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ FUNC_10 (TYPE_4__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_11(ngx_event_t *VAR_8)
{
    ngx_connection_t *VAR_9;
    ngx_rtmp_session_t *VAR_10;
    ngx_int_t VAR_11;
    ngx_rtmp_core_srv_conf_t *VAR_12;

    VAR_9 = VAR_8->data;
    VAR_10 = VAR_9->data;

    if (VAR_9->destroyed) {
        return;
    }

    if (VAR_8->timedout) {
        FUNC_5(VAR_2, VAR_9->log, VAR_1,
                "client timed out");
        VAR_9->timedout = 1;
        FUNC_6(VAR_10);
        return;
    }

    if (VAR_8->timer_set) {
        FUNC_2(VAR_8);
    }

    if (VAR_10->out_chain == ((void*)0) && VAR_10->out_pos != VAR_10->out_last) {
        VAR_10->out_chain = VAR_10->out[VAR_10->out_pos];
        VAR_10->out_bpos = VAR_10->out_chain->buf->pos;
    }

    while (VAR_10->out_chain) {
        VAR_11 = VAR_9->send(VAR_9, VAR_10->out_bpos, VAR_10->out_chain->buf->last - VAR_10->out_bpos);

        if (VAR_11 == VAR_0 || VAR_11 == 0) {
            FUNC_0(VAR_9->write, VAR_10->timeout);
            if (FUNC_4(VAR_9->write, 0) != VAR_3) {
                FUNC_6(VAR_10);
            }
            return;
        }

        if (VAR_11 < 0) {
            FUNC_6(VAR_10);
            return;
        }

        VAR_10->out_bytes += VAR_11;
        VAR_10->ping_reset = 1;
        FUNC_9(&VAR_6, VAR_11);
        VAR_10->out_bpos += VAR_11;
        if (VAR_10->out_bpos == VAR_10->out_chain->buf->last) {
            VAR_10->out_chain = VAR_10->out_chain->next;
            if (VAR_10->out_chain == ((void*)0)) {
                VAR_12 = FUNC_8(VAR_10, VAR_7);
                FUNC_7(VAR_12, VAR_10->out[VAR_10->out_pos]);
                ++VAR_10->out_pos;
                VAR_10->out_pos %= VAR_10->out_queue;
                if (VAR_10->out_pos == VAR_10->out_last) {
                    break;
                }
                VAR_10->out_chain = VAR_10->out[VAR_10->out_pos];
            }
            VAR_10->out_bpos = VAR_10->out_chain->buf->pos;
        }
    }

    if (VAR_8->active) {
        FUNC_1(VAR_8, VAR_4, 0);
    }

    FUNC_3((ngx_cycle_t *) VAR_5, &VAR_10->posted_dry_events);
}
