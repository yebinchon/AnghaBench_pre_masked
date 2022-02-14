
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_18__ {int hs_stage; TYPE_5__* hs_buf; TYPE_1__* connection; int hs_old; int timeout; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_19__ {scalar_t__ active; scalar_t__ timer_set; scalar_t__ timedout; TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_20__ {int timedout; scalar_t__ (* recv ) (TYPE_4__*,scalar_t__,scalar_t__) ;int write; int log; TYPE_3__* read; scalar_t__ destroyed; TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_21__ {scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_17__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *,int *) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (TYPE_4__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_14(ngx_event_t *VAR_12)
{
    ssize_t VAR_13;
    ngx_connection_t *VAR_14;
    ngx_rtmp_session_t *VAR_15;
    ngx_buf_t *VAR_16;

    VAR_14 = VAR_12->data;
    VAR_15 = VAR_14->data;

    if (VAR_14->destroyed) {
        return;
    }

    if (VAR_12->timedout) {
        FUNC_6(VAR_4, VAR_14->log, VAR_2,
                "handshake: recv: client timed out");
        VAR_14->timedout = 1;
        FUNC_7(VAR_15);
        return;
    }

    if (VAR_12->timer_set) {
        FUNC_2(VAR_12);
    }

    VAR_16 = VAR_15->hs_buf;

    while (VAR_16->last != VAR_16->end) {
        VAR_13 = VAR_14->recv(VAR_14, VAR_16->last, VAR_16->end - VAR_16->last);

        if (VAR_13 == VAR_1 || VAR_13 == 0) {
            FUNC_7(VAR_15);
            return;
        }

        if (VAR_13 == VAR_0) {
            FUNC_0(VAR_12, VAR_15->timeout);
            if (FUNC_3(VAR_14->read, 0) != VAR_5) {
                FUNC_7(VAR_15);
            }
            return;
        }

        VAR_16->last += VAR_13;
    }

    if (VAR_12->active) {
        FUNC_1(VAR_12, VAR_6, 0);
    }

    ++VAR_15->hs_stage;
    FUNC_5(VAR_3, VAR_15->connection->log, 0,
            "handshake: stage %ui", VAR_15->hs_stage);

    switch (VAR_15->hs_stage) {
        case 128:
            if (FUNC_11(VAR_15,
                    &VAR_8,
                    &VAR_9) != VAR_5)
            {
                FUNC_6(VAR_4, VAR_14->log, 0,
                        "handshake: error parsing challenge");
                FUNC_7(VAR_15);
                return;
            }
            if (VAR_15->hs_old) {
                FUNC_4(VAR_3, VAR_15->connection->log, 0,
                        "handshake: old-style challenge");
                VAR_15->hs_buf->pos = VAR_15->hs_buf->start;
                VAR_15->hs_buf->last = VAR_15->hs_buf->end;
            } else if (FUNC_8(VAR_15,
                        VAR_11,
                        &VAR_10) != VAR_5)
            {
                FUNC_6(VAR_4, VAR_14->log, 0,
                        "handshake: error creating challenge");
                FUNC_7(VAR_15);
                return;
            }
            FUNC_12(VAR_14->write);
            break;

        case 129:
            FUNC_10(VAR_15);
            break;

        case 131:
            if (FUNC_11(VAR_15,
                    &VAR_10,
                    &VAR_7) != VAR_5)
            {
                FUNC_6(VAR_4, VAR_14->log, 0,
                        "handshake: error parsing challenge");
                FUNC_7(VAR_15);
                return;
            }
            VAR_15->hs_buf->pos = VAR_15->hs_buf->last = VAR_15->hs_buf->start + 1;
            FUNC_14(VAR_14->read);
            break;

        case 130:
            if (FUNC_9(VAR_15) != VAR_5) {
                FUNC_6(VAR_4, VAR_14->log, 0,
                        "handshake: response error");
                FUNC_7(VAR_15);
                return;
            }
            FUNC_12(VAR_14->write);
            break;
    }
}
