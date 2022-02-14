
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_16__ {scalar_t__ fd; } ;
struct TYPE_18__ {int opened; TYPE_2__ file; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
struct TYPE_19__ {scalar_t__ pause; int position; } ;
typedef TYPE_5__ ngx_rtmp_pause_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ,int ) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (TYPE_3__*,char*,char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_rtmp_session_t *VAR_5, ngx_rtmp_pause_t *VAR_6)
{
    ngx_rtmp_play_ctx_t *VAR_7;

    VAR_7 = FUNC_3(VAR_5, VAR_4);

    if (VAR_7 == ((void*)0) || VAR_7->file.fd == VAR_1) {
        goto next;
    }

    if (!VAR_7->opened) {
        FUNC_1(VAR_2, VAR_5->connection->log, 0,
                       "play: pause ignored");
        goto next;
    }

    FUNC_2(VAR_2, VAR_5->connection->log, 0,
                   "play: pause=%i timestamp=%f",
                   (ngx_int_t) VAR_6->pause, VAR_6->position);

    if (VAR_6->pause) {
        if (FUNC_6(VAR_5, "NetStream.Pause.Notify", "status",
                                 "Paused video on demand")
            != VAR_3)
        {
            return VAR_0;
        }

        FUNC_5(VAR_5);

    } else {
        if (FUNC_6(VAR_5, "NetStream.Unpause.Notify", "status",
                                 "Unpaused video on demand")
            != VAR_3)
        {
            return VAR_0;
        }

        FUNC_4(VAR_5);
    }

next:
    return FUNC_0(VAR_5, VAR_6);
}
