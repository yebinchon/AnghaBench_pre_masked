
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int ping_active; TYPE_1__* connection; scalar_t__ ping_reset; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_15__ {int ping_timeout; scalar_t__ busy; } ;
typedef TYPE_3__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_16__ {TYPE_5__* data; } ;
typedef TYPE_4__ ngx_event_t ;
struct TYPE_17__ {int log; TYPE_2__* data; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_7(ngx_event_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_rtmp_session_t *VAR_7;
    ngx_rtmp_core_srv_conf_t *VAR_8;

    VAR_6 = VAR_5->data;
    VAR_7 = VAR_6->data;

    VAR_8 = FUNC_4(VAR_7, VAR_4);


    if (VAR_7->ping_reset) {
        FUNC_5(VAR_7);
        return;
    }

    if (VAR_7->ping_active) {
        FUNC_2(VAR_1, VAR_6->log, 0,
                "ping: unresponded");
        FUNC_3(VAR_7);
        return;
    }

    if (VAR_8->busy) {
        FUNC_2(VAR_1, VAR_6->log, 0,
                "ping: not busy between pings");
        FUNC_3(VAR_7);
        return;
    }

    FUNC_1(VAR_0, VAR_7->connection->log, 0,
            "ping: schedule %Mms", VAR_8->ping_timeout);

    if (FUNC_6(VAR_7, (uint32_t)VAR_3) != VAR_2) {
        FUNC_3(VAR_7);
        return;
    }

    VAR_7->ping_active = 1;
    FUNC_0(VAR_5, VAR_8->ping_timeout);
}
