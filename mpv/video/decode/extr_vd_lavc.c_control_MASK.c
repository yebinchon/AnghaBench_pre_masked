
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* method_name; } ;
struct TYPE_5__ {int framedrop_flags; TYPE_3__* avctx; int use_hwdec; TYPE_1__ hwdec; } ;
typedef TYPE_2__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_2__* priv; } ;
typedef enum dec_ctrl { ____Placeholder_dec_ctrl } dec_ctrl ;
struct TYPE_6__ {int has_b_frames; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (struct mp_filter*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct mp_filter *VAR_5, enum dec_ctrl VAR_6, void *VAR_7)
{
    vd_ffmpeg_ctx *VAR_8 = VAR_5->priv;
    switch (VAR_6) {
    case 128:
        VAR_8->framedrop_flags = *(int *)VAR_7;
        return VAR_3;
    case 131: {
        AVCodecContext *VAR_9 = VAR_8->avctx;
        if (!VAR_9)
            break;
        if (VAR_8->use_hwdec && FUNC_2(VAR_8->hwdec.method_name, "mmal") == 0)
            break;
        *(int *)VAR_7 = VAR_9->has_b_frames;
        return VAR_3;
    }
    case 130: {
        *(char **)VAR_7 = VAR_8->use_hwdec ? VAR_8->hwdec.method_name : ((void*)0);
        return VAR_3;
    }
    case 132:
        if (VAR_8->use_hwdec) {
            FUNC_0(VAR_5);
            return VAR_8->avctx ? VAR_2 : VAR_0;
        }
        return VAR_1;
    case 129:
        FUNC_1(VAR_5);
        return VAR_3;
    }
    return VAR_4;
}
