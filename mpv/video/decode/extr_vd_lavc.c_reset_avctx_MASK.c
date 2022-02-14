
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flushing; int hwdec_request_reinit; scalar_t__ avctx; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_1__* priv; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mp_filter *VAR_0)
{
    vd_ffmpeg_ctx *VAR_1 = VAR_0->priv;

    if (VAR_1->avctx && FUNC_1(VAR_1->avctx))
        FUNC_0(VAR_1->avctx);
    VAR_1->flushing = 0;
    VAR_1->hwdec_request_reinit = 0;
}
