
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int framedrop_flags; scalar_t__ hwdec_request_reinit; int skip_frame; scalar_t__ intra_only; struct vd_lavc_params* opts; TYPE_2__* avctx; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct vd_lavc_params {int framedrop; } ;
struct mp_filter {TYPE_1__* priv; } ;
struct TYPE_4__ {int skip_frame; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_2)
{
    vd_ffmpeg_ctx *VAR_3 = VAR_2->priv;
    AVCodecContext *VAR_4 = VAR_3->avctx;
    struct vd_lavc_params *VAR_5 = VAR_3->opts;

    if (!VAR_4)
        return;

    int VAR_6 = VAR_3->framedrop_flags;
    if (VAR_6 == 1) {
        VAR_4->skip_frame = VAR_5->framedrop;
    } else if (VAR_6 == 2) {
        VAR_4->skip_frame = VAR_1;

        if (VAR_3->intra_only)
            VAR_4->skip_frame = VAR_0;
    } else {
        VAR_4->skip_frame = VAR_3->skip_frame;
    }

    if (VAR_3->hwdec_request_reinit)
        FUNC_0(VAR_2);
}
