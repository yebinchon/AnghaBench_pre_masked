
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hwdec_fail_count; int hwdec_failed; scalar_t__ use_hwdec; struct vd_lavc_params* opts; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct vd_lavc_params {scalar_t__ software_fallback; } ;
struct mp_filter {TYPE_1__* priv; } ;


 int FUNC_0 (struct mp_filter*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct mp_filter *VAR_0)
{
    vd_ffmpeg_ctx *VAR_1 = VAR_0->priv;
    struct vd_lavc_params *VAR_2 = VAR_1->opts;

    FUNC_0(VAR_0, "Error while decoding frame%s!\n",
            VAR_1->use_hwdec ? " (hardware decoding)" : "");

    if (VAR_1->use_hwdec) {
        VAR_1->hwdec_fail_count += 1;
        if (VAR_1->hwdec_fail_count >= VAR_2->software_fallback)
            VAR_1->hwdec_failed = 1;
    }
}
