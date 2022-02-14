
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_rtmp_stream_eof_t ;
struct TYPE_10__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_11__ {int publishing; int * stream; } ;
typedef TYPE_3__ ngx_rtmp_live_ctx_t ;
typedef int ngx_int_t ;
struct TYPE_9__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_2, ngx_rtmp_stream_eof_t *VAR_3)
{
    ngx_rtmp_live_ctx_t *VAR_4;

    VAR_4 = FUNC_2(VAR_2, VAR_1);

    if (VAR_4 == ((void*)0) || VAR_4->stream == ((void*)0) || !VAR_4->publishing) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "live: stream_eof");

    FUNC_3(VAR_2);

next:
    return FUNC_0(VAR_2, VAR_3);
}
