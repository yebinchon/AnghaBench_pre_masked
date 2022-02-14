
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_6__ {scalar_t__ not_first; } ;
struct TYPE_5__ {TYPE_2__ cursor; } ;
typedef TYPE_1__ ngx_rtmp_mp4_track_t ;
typedef TYPE_2__ ngx_rtmp_mp4_cursor_t ;
struct TYPE_7__ {scalar_t__ ntracks; TYPE_1__* tracks; } ;
typedef TYPE_3__ ngx_rtmp_mp4_ctx_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_rtmp_session_t *VAR_2)
{
    ngx_rtmp_mp4_ctx_t *VAR_3;
    ngx_rtmp_mp4_cursor_t *VAR_4;
    ngx_rtmp_mp4_track_t *VAR_5;
    ngx_uint_t VAR_6;

    VAR_3 = FUNC_0(VAR_2, VAR_1);

    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    VAR_5 = &VAR_3->tracks[0];
    for (VAR_6 = 0; VAR_6 < VAR_3->ntracks; ++VAR_6, ++VAR_5) {
        VAR_4 = &VAR_5->cursor;
        VAR_4->not_first = 0;
    }

    return VAR_0;
}
