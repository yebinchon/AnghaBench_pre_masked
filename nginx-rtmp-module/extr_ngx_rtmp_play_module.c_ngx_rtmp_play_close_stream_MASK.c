
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_15__ {scalar_t__ fd; } ;
struct TYPE_18__ {scalar_t__ file_id; TYPE_1__ file; } ;
typedef TYPE_4__ ngx_rtmp_play_ctx_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_3__*,char*,char*,char*) ;
 int FUNC_9 (TYPE_3__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_rtmp_session_t *VAR_4, ngx_rtmp_close_stream_t *VAR_5)
{
    ngx_rtmp_play_ctx_t *VAR_6;

    VAR_6 = FUNC_3(VAR_4, VAR_3);
    if (VAR_6 == ((void*)0)) {
        goto next;
    }

    FUNC_2(VAR_1, VAR_4->connection->log, 0,
                   "play: close_stream");

    FUNC_6(VAR_4);

    FUNC_5(VAR_4);

    if (VAR_6->file.fd != VAR_0) {
        FUNC_1(VAR_6->file.fd);
        VAR_6->file.fd = VAR_0;

        FUNC_9(VAR_4, VAR_2);

        FUNC_8(VAR_4, "NetStream.Play.Stop", "status",
                             "Stop video on demand");
    }

    if (VAR_6->file_id) {
        FUNC_4(VAR_4);
    }

    FUNC_7(VAR_4);

next:
    return FUNC_0(VAR_4, VAR_5);
}
