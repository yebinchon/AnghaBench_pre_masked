
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_10__ {int log; TYPE_2__* data; scalar_t__ timedout; } ;
typedef TYPE_1__ ngx_event_t ;
struct TYPE_11__ {int fd; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_12__ {scalar_t__ command; size_t slot; int fd; int pid; } ;
typedef TYPE_3__ ngx_channel_t ;
struct TYPE_13__ {int* channel; int pid; } ;


 scalar_t__ VAR_0 ;





 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,char*,size_t,int ,int) ;
 int FUNC_7 (int ,int ,int ,char*,size_t,int ,int ,int) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 TYPE_5__* VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (int ,TYPE_3__*,int,int ) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void
FUNC_10(ngx_event_t *VAR_13)
{
    ngx_int_t VAR_14;
    ngx_channel_t VAR_15;
    ngx_connection_t *VAR_16;

    if (VAR_13->timedout) {
        VAR_13->timedout = 0;
        return;
    }

    VAR_16 = VAR_13->data;

    FUNC_4(VAR_3, VAR_13->log, 0, "channel handler");

    for ( ;; ) {

        VAR_14 = FUNC_9(VAR_16->fd, &VAR_15, sizeof(ngx_channel_t), VAR_13->log);

        FUNC_5(VAR_3, VAR_13->log, 0, "channel: %i", VAR_14);

        if (VAR_14 == VAR_1) {

            if (VAR_8 & VAR_5) {
                FUNC_3(VAR_16, 0);
            }

            FUNC_2(VAR_16);
            return;
        }

        if (VAR_8 & VAR_6) {
            if (FUNC_1(VAR_13, VAR_4, 0) == VAR_1) {
                return;
            }
        }

        if (VAR_14 == VAR_0) {
            return;
        }

        FUNC_5(VAR_3, VAR_13->log, 0,
                       "channel command: %ui", VAR_15.command);

        switch (VAR_15.command) {

        case 130:
            VAR_10 = 1;
            break;

        case 128:
            VAR_12 = 1;
            break;

        case 129:
            VAR_11 = 1;
            break;

        case 131:

            FUNC_6(VAR_3, VAR_13->log, 0,
                           "get channel s:%i pid:%P fd:%d",
                           VAR_15.slot, VAR_15.pid, VAR_15.fd);

            VAR_9[VAR_15.slot].pid = VAR_15.pid;
            VAR_9[VAR_15.slot].channel[0] = VAR_15.fd;
            break;

        case 132:

            FUNC_7(VAR_3, VAR_13->log, 0,
                           "close channel s:%i pid:%P our:%P fd:%d",
                           VAR_15.slot, VAR_15.pid, VAR_9[VAR_15.slot].pid,
                           VAR_9[VAR_15.slot].channel[0]);

            if (FUNC_0(VAR_9[VAR_15.slot].channel[0]) == -1) {
                FUNC_8(VAR_2, VAR_13->log, VAR_7,
                              "close() channel failed");
            }

            VAR_9[VAR_15.slot].channel[0] = -1;
            break;
        }
    }
}
