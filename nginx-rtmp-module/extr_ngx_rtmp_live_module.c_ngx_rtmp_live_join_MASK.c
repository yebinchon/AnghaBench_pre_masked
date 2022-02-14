
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_23__ {int out_buffer; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_24__ {int publishing; scalar_t__ active; TYPE_5__* ctx; } ;
typedef TYPE_4__ ngx_rtmp_live_stream_t ;
struct TYPE_25__ {unsigned int publishing; TYPE_4__* stream; TYPE_2__* cs; struct TYPE_25__* next; TYPE_3__* session; } ;
typedef TYPE_5__ ngx_rtmp_live_ctx_t ;
struct TYPE_26__ {scalar_t__ buflen; scalar_t__ idle_streams; } ;
typedef TYPE_6__ ngx_rtmp_live_app_conf_t ;
struct TYPE_22__ {int csid; } ;
struct TYPE_21__ {int log; int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_5__*,int) ;
 TYPE_5__* FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_6__* FUNC_6 (TYPE_3__*,int ) ;
 TYPE_5__* FUNC_7 (TYPE_3__*,int ) ;
 TYPE_4__** FUNC_8 (TYPE_3__*,int *,int) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,char*,char*,char*) ;
 int FUNC_11 (TYPE_3__*,TYPE_5__*,int ) ;

__attribute__((used)) static void
FUNC_12(ngx_rtmp_session_t *VAR_5, u_char *VAR_6, unsigned VAR_7)
{
    ngx_rtmp_live_ctx_t *VAR_8;
    ngx_rtmp_live_stream_t **VAR_9;
    ngx_rtmp_live_app_conf_t *VAR_10;

    VAR_10 = FUNC_6(VAR_5, VAR_4);
    if (VAR_10 == ((void*)0)) {
        return;
    }

    VAR_8 = FUNC_7(VAR_5, VAR_4);
    if (VAR_8 && VAR_8->stream) {
        FUNC_0(VAR_0, VAR_5->connection->log, 0,
                       "live: already joined");
        return;
    }

    if (VAR_8 == ((void*)0)) {
        VAR_8 = FUNC_4(VAR_5->connection->pool, sizeof(ngx_rtmp_live_ctx_t));
        FUNC_11(VAR_5, VAR_8, VAR_4);
    }

    FUNC_3(VAR_8, sizeof(*VAR_8));

    VAR_8->session = VAR_5;

    FUNC_1(VAR_0, VAR_5->connection->log, 0,
                   "live: join '%s'", VAR_6);

    VAR_9 = FUNC_8(VAR_5, VAR_6, VAR_7 || VAR_10->idle_streams);

    if (VAR_9 == ((void*)0) ||
        !(VAR_7 || (*VAR_9)->publishing || VAR_10->idle_streams))
    {
        FUNC_2(VAR_1, VAR_5->connection->log, 0,
                      "live: stream not found");

        FUNC_10(VAR_5, "NetStream.Play.StreamNotFound", "error",
                             "No such stream");

        FUNC_5(VAR_5);

        return;
    }

    if (VAR_7) {
        if ((*VAR_9)->publishing) {
            FUNC_2(VAR_1, VAR_5->connection->log, 0,
                          "live: already publishing");

            FUNC_10(VAR_5, "NetStream.Publish.BadName", "error",
                                 "Already publishing");

            return;
        }

        (*VAR_9)->publishing = 1;
    }

    VAR_8->stream = *VAR_9;
    VAR_8->publishing = VAR_7;
    VAR_8->next = (*VAR_9)->ctx;

    (*VAR_9)->ctx = VAR_8;

    if (VAR_10->buflen) {
        VAR_5->out_buffer = 1;
    }

    VAR_8->cs[0].csid = VAR_3;
    VAR_8->cs[1].csid = VAR_2;

    if (!VAR_8->publishing && VAR_8->stream->active) {
        FUNC_9(VAR_5);
    }
}
