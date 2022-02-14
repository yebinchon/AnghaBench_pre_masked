
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_16__ {scalar_t__ pause; int position; } ;
typedef TYPE_3__ ngx_rtmp_pause_t ;
struct TYPE_17__ {int paused; int * stream; } ;
typedef TYPE_4__ ngx_rtmp_live_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int ) ;
 TYPE_4__* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,char*,char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_4, ngx_rtmp_pause_t *VAR_5)
{
    ngx_rtmp_live_ctx_t *VAR_6;

    VAR_6 = FUNC_2(VAR_4, VAR_3);

    if (VAR_6 == ((void*)0) || VAR_6->stream == ((void*)0)) {
        goto next;
    }

    FUNC_1(VAR_1, VAR_4->connection->log, 0,
                   "live: pause=%i timestamp=%f",
                   (ngx_int_t) VAR_5->pause, VAR_5->position);

    if (VAR_5->pause) {
        if (FUNC_5(VAR_4, "NetStream.Pause.Notify", "status",
                                 "Paused live")
            != VAR_2)
        {
            return VAR_0;
        }

        VAR_6->paused = 1;

        FUNC_4(VAR_4);

    } else {
        if (FUNC_5(VAR_4, "NetStream.Unpause.Notify", "status",
                                 "Unpaused live")
            != VAR_2)
        {
            return VAR_0;
        }

        VAR_6->paused = 0;

        FUNC_3(VAR_4);
    }

next:
    return FUNC_0(VAR_4, VAR_5);
}
