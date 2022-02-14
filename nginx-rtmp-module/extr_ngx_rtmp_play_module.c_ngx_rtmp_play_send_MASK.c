
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_17__ {TYPE_2__* connection; int posted_dry_events; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_18__ {int file; TYPE_1__* fmt; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {TYPE_3__* data; } ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_16__ {int log; } ;
struct TYPE_15__ {scalar_t__ (* send ) (TYPE_3__*,int *,scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int VAR_4 ;
 TYPE_4__* FUNC_4 (TYPE_3__*,int ) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_3__*,char*,char*,scalar_t__,int ) ;
 int FUNC_6 (TYPE_3__*,char*,char*,char*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int *,scalar_t__*) ;

__attribute__((used)) static void
FUNC_9(ngx_event_t *VAR_6)
{
    ngx_rtmp_session_t *VAR_7 = VAR_6->data;
    ngx_rtmp_play_ctx_t *VAR_8;
    ngx_int_t VAR_9;
    ngx_uint_t VAR_10;

    VAR_8 = FUNC_4(VAR_7, VAR_5);

    if (VAR_8 == ((void*)0) || VAR_8->fmt == ((void*)0) || VAR_8->fmt->send == ((void*)0)) {
        return;
    }

    VAR_10 = 0;

    VAR_9 = VAR_8->fmt->send(VAR_7, &VAR_8->file, &VAR_10);

    if (VAR_9 > 0) {
        FUNC_2(VAR_1, VAR_7->connection->log, 0,
                       "play: send schedule %i", VAR_9);

        FUNC_0(VAR_6, VAR_9);
        return;
    }

    if (VAR_9 == VAR_0) {
        FUNC_1(VAR_1, VAR_7->connection->log, 0,
                       "play: send buffer full");

        FUNC_3(VAR_6, &VAR_7->posted_dry_events);
        return;
    }

    if (VAR_9 == VAR_2) {
        FUNC_1(VAR_1, VAR_7->connection->log, 0,
                       "play: send restart");

        FUNC_3(VAR_6, &VAR_4);
        return;
    }


    FUNC_1(VAR_1, VAR_7->connection->log, 0,
                   "play: send done");

    FUNC_7(VAR_7, VAR_3);

    FUNC_5(VAR_7, "NetStream.Play.Complete", "status", VAR_10, 0);

    FUNC_6(VAR_7, "NetStream.Play.Stop", "status", "Stopped");
}
