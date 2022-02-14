
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_hls_ctx_t ;
struct TYPE_12__ {int hls; } ;
typedef TYPE_3__ ngx_rtmp_hls_app_conf_t ;
typedef int ngx_rtmp_close_stream_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_rtmp_close_stream_t *VAR_3)
{
    ngx_rtmp_hls_app_conf_t *VAR_4;
    ngx_rtmp_hls_ctx_t *VAR_5;

    VAR_4 = FUNC_2(VAR_2, VAR_1);

    VAR_5 = FUNC_3(VAR_2, VAR_1);

    if (VAR_4 == ((void*)0) || !VAR_4->hls || VAR_5 == ((void*)0)) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
                   "hls: close stream");

    FUNC_4(VAR_2);

next:
    return FUNC_0(VAR_2, VAR_3);
}
