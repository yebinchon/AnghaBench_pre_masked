
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_20__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_21__ {struct TYPE_21__* next; } ;
typedef TYPE_4__ ngx_rtmp_live_stream_t ;
struct TYPE_22__ {scalar_t__ publishing; int silent; TYPE_2__* stream; TYPE_3__* session; struct TYPE_22__* next; } ;
typedef TYPE_5__ ngx_rtmp_live_ctx_t ;
struct TYPE_23__ {int play_restart; TYPE_2__* free_streams; int idle_streams; } ;
typedef TYPE_6__ ngx_rtmp_live_app_conf_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;
struct TYPE_19__ {struct TYPE_19__* next; int name; TYPE_5__* ctx; scalar_t__ active; scalar_t__ publishing; } ;
struct TYPE_18__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_6__* FUNC_4 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_5 (TYPE_3__*,int ) ;
 TYPE_4__** FUNC_6 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,char*,char*,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_rtmp_session_t *VAR_2, ngx_rtmp_close_stream_t *VAR_3)
{
    ngx_rtmp_session_t *VAR_4;
    ngx_rtmp_live_ctx_t *VAR_5, **VAR_6, *VAR_7;
    ngx_rtmp_live_stream_t **VAR_8;
    ngx_rtmp_live_app_conf_t *VAR_9;

    VAR_9 = FUNC_4(VAR_2, VAR_1);
    if (VAR_9 == ((void*)0)) {
        goto next;
    }

    VAR_5 = FUNC_5(VAR_2, VAR_1);
    if (VAR_5 == ((void*)0)) {
        goto next;
    }

    if (VAR_5->stream == ((void*)0)) {
        FUNC_1(VAR_0, VAR_2->connection->log, 0,
                       "live: not joined");
        goto next;
    }

    FUNC_2(VAR_0, VAR_2->connection->log, 0,
                   "live: leave '%s'", VAR_5->stream->name);

    if (VAR_5->stream->publishing && VAR_5->publishing) {
        VAR_5->stream->publishing = 0;
    }

    for (VAR_6 = &VAR_5->stream->ctx; *VAR_6; VAR_6 = &(*VAR_6)->next) {
        if (*VAR_6 == VAR_5) {
            *VAR_6 = VAR_5->next;
            break;
        }
    }

    if (VAR_5->publishing || VAR_5->stream->active) {
        FUNC_7(VAR_2);
    }

    if (VAR_5->publishing) {
        FUNC_8(VAR_2, "NetStream.Unpublish.Success",
                             "status", "Stop publishing");
        if (!VAR_9->idle_streams) {
            for (VAR_7 = VAR_5->stream->ctx; VAR_7; VAR_7 = VAR_7->next) {
                if (VAR_7->publishing == 0) {
                    VAR_4 = VAR_7->session;
                    FUNC_1(VAR_0, VAR_4->connection->log, 0,
                                   "live: no publisher");
                    FUNC_3(VAR_4);
                }
            }
        }
    }

    if (VAR_5->stream->ctx) {
        VAR_5->stream = ((void*)0);
        goto next;
    }

    FUNC_2(VAR_0, VAR_2->connection->log, 0,
                   "live: delete empty stream '%s'",
                   VAR_5->stream->name);

    VAR_8 = FUNC_6(VAR_2, VAR_5->stream->name, 0);
    if (VAR_8 == ((void*)0)) {
        goto next;
    }
    *VAR_8 = (*VAR_8)->next;

    VAR_5->stream->next = VAR_9->free_streams;
    VAR_9->free_streams = VAR_5->stream;
    VAR_5->stream = ((void*)0);

    if (!VAR_5->silent && !VAR_5->publishing && !VAR_9->play_restart) {
        FUNC_8(VAR_2, "NetStream.Play.Stop", "status", "Stop live");
    }

next:
    return FUNC_0(VAR_2, VAR_3);
}
