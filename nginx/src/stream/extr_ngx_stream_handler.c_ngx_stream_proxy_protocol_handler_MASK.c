
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_stream_session_t ;
struct TYPE_16__ {int proxy_protocol_timeout; } ;
typedef TYPE_1__ ngx_stream_core_srv_conf_t ;
struct TYPE_17__ {scalar_t__ timer_set; scalar_t__ ready; scalar_t__ timedout; TYPE_3__* data; } ;
typedef TYPE_2__ ngx_event_t ;
typedef scalar_t__ ngx_err_t ;
struct TYPE_18__ {int (* recv ) (TYPE_3__*,int *,size_t) ;TYPE_9__* log; int fd; int * data; } ;
typedef TYPE_3__ ngx_connection_t ;
typedef int buf ;
struct TYPE_19__ {char* action; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_3__*,scalar_t__,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,TYPE_9__*,int ,char*) ;
 int FUNC_5 (int ,TYPE_9__*,int ,char*,int) ;
 int FUNC_6 (int ,TYPE_9__*,int ,char*) ;
 int * FUNC_7 (TYPE_3__*,int *,int *) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int *,int ) ;
 TYPE_1__* FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,char*,int,int ) ;
 int FUNC_12 (TYPE_3__*,int *,size_t) ;

__attribute__((used)) static void
FUNC_13(ngx_event_t *VAR_12)
{
    u_char *VAR_13, VAR_14[VAR_6];
    size_t VAR_15;
    ssize_t VAR_16;
    ngx_err_t VAR_17;
    ngx_connection_t *VAR_18;
    ngx_stream_session_t *VAR_19;
    ngx_stream_core_srv_conf_t *VAR_20;

    VAR_18 = VAR_12->data;
    VAR_19 = VAR_18->data;

    FUNC_4(VAR_3, VAR_18->log, 0,
                   "stream PROXY protocol handler");

    if (VAR_12->timedout) {
        FUNC_6(VAR_4, VAR_18->log, VAR_2, "client timed out");
        FUNC_8(VAR_19, VAR_9);
        return;
    }

    VAR_16 = FUNC_11(VAR_18->fd, (char *) VAR_14, sizeof(VAR_14), VAR_0);

    VAR_17 = VAR_10;

    FUNC_5(VAR_3, VAR_18->log, 0, "recv(): %z", VAR_16);

    if (VAR_16 == -1) {
        if (VAR_17 == VAR_1) {
            VAR_12->ready = 0;

            if (!VAR_12->timer_set) {
                VAR_20 = FUNC_9(VAR_19,
                                                      VAR_11);

                FUNC_0(VAR_12, VAR_20->proxy_protocol_timeout);
            }

            if (FUNC_3(VAR_12, 0) != VAR_5) {
                FUNC_8(VAR_19,
                                            VAR_8);
            }

            return;
        }

        FUNC_1(VAR_18, VAR_17, "recv() failed");

        FUNC_8(VAR_19, VAR_9);
        return;
    }

    if (VAR_12->timer_set) {
        FUNC_2(VAR_12);
    }

    VAR_13 = FUNC_7(VAR_18, VAR_14, VAR_14 + VAR_16);

    if (VAR_13 == ((void*)0)) {
        FUNC_8(VAR_19, VAR_7);
        return;
    }

    VAR_15 = VAR_13 - VAR_14;

    if (VAR_18->recv(VAR_18, VAR_14, VAR_15) != (ssize_t) VAR_15) {
        FUNC_8(VAR_19, VAR_8);
        return;
    }

    VAR_18->log->action = "initializing session";

    FUNC_10(VAR_12);
}
