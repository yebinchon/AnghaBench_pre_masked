
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_14__ {int pid; int sid; int cc; int pts; int dts; } ;
typedef TYPE_3__ ngx_rtmp_mpegts_frame_t ;
struct TYPE_15__ {int audio_cc; int file; int aframe_pts; TYPE_5__* aframe; int opened; } ;
typedef TYPE_4__ ngx_rtmp_hls_ctx_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_16__ {scalar_t__ pos; scalar_t__ last; scalar_t__ start; } ;
typedef TYPE_5__ ngx_buf_t ;
typedef int frame ;
struct TYPE_12__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,TYPE_5__*) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4)
{
    ngx_rtmp_hls_ctx_t *VAR_5;
    ngx_rtmp_mpegts_frame_t VAR_6;
    ngx_int_t VAR_7;
    ngx_buf_t *VAR_8;

    VAR_5 = FUNC_3(VAR_4, VAR_3);

    if (VAR_5 == ((void*)0) || !VAR_5->opened) {
        return VAR_2;
    }

    VAR_8 = VAR_5->aframe;

    if (VAR_8 == ((void*)0) || VAR_8->pos == VAR_8->last) {
        return VAR_2;
    }

    FUNC_2(&VAR_6, sizeof(VAR_6));

    VAR_6.dts = VAR_5->aframe_pts;
    VAR_6.pts = VAR_6.dts;
    VAR_6.cc = VAR_5->audio_cc;
    VAR_6.pid = 0x101;
    VAR_6.sid = 0xc0;

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
                   "hls: flush audio pts=%uL", VAR_6.pts);

    VAR_7 = FUNC_4(&VAR_5->file, &VAR_6, VAR_8);

    if (VAR_7 != VAR_2) {
        FUNC_1(VAR_1, VAR_4->connection->log, 0,
                      "hls: audio flush failed");
    }

    VAR_5->audio_cc = VAR_6.cc;
    VAR_8->pos = VAR_8->last = VAR_8->start;

    return VAR_7;
}
