
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int hs_stage; TYPE_5__* hs_buf; TYPE_1__* connection; int hs_old; int timeout; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {scalar_t__ active; scalar_t__ timer_set; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_16__ {int timedout; scalar_t__ (* send ) (TYPE_4__*,scalar_t__,scalar_t__) ;int read; int log; int write; scalar_t__ destroyed; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_17__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;




 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (TYPE_4__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_12(ngx_event_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_connection_t *VAR_9;
    ngx_rtmp_session_t *VAR_10;
    ngx_buf_t *VAR_11;

    VAR_9 = VAR_7->data;
    VAR_10 = VAR_9->data;

    if (VAR_9->destroyed) {
        return;
    }

    if (VAR_7->timedout) {
        FUNC_6(VAR_4, VAR_9->log, VAR_2,
                "handshake: send: client timed out");
        VAR_9->timedout = 1;
        FUNC_7(VAR_10);
        return;
    }

    if (VAR_7->timer_set) {
        FUNC_2(VAR_7);
    }

    VAR_11 = VAR_10->hs_buf;

    while(VAR_11->pos != VAR_11->last) {
        VAR_8 = VAR_9->send(VAR_9, VAR_11->pos, VAR_11->last - VAR_11->pos);

        if (VAR_8 == VAR_1) {
            FUNC_7(VAR_10);
            return;
        }

        if (VAR_8 == VAR_0 || VAR_8 == 0) {
            FUNC_0(VAR_9->write, VAR_10->timeout);
            if (FUNC_3(VAR_9->write, 0) != VAR_5) {
                FUNC_7(VAR_10);
            }
            return;
        }

        VAR_11->pos += VAR_8;
    }

    if (VAR_7->active) {
        FUNC_1(VAR_7, VAR_6, 0);
    }

    ++VAR_10->hs_stage;
    FUNC_5(VAR_3, VAR_10->connection->log, 0,
            "handshake: stage %ui", VAR_10->hs_stage);

    switch (VAR_10->hs_stage) {
        case 128:
            if (VAR_10->hs_old) {
                FUNC_4(VAR_3, VAR_10->connection->log, 0,
                        "handshake: old-style response");
                VAR_10->hs_buf->pos = VAR_10->hs_buf->start + 1;
                VAR_10->hs_buf->last = VAR_10->hs_buf->end;
            } else if (FUNC_8(VAR_10) != VAR_5) {
                FUNC_6(VAR_4, VAR_9->log, 0,
                        "handshake: response error");
                FUNC_7(VAR_10);
                return;
            }
            FUNC_12(VAR_7);
            break;

        case 129:
            VAR_10->hs_buf->pos = VAR_10->hs_buf->last = VAR_10->hs_buf->start + 1;
            FUNC_10(VAR_9->read);
            break;

        case 130:
            VAR_10->hs_buf->pos = VAR_10->hs_buf->last = VAR_10->hs_buf->start;
            FUNC_10(VAR_9->read);
            break;

        case 131:
            FUNC_9(VAR_10);
            break;
    }
}
