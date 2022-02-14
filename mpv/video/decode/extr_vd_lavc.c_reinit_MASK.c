
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int use_hwdec; int avctx; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_1__* priv; } ;


 int FUNC_0 (struct mp_filter*) ;
 int FUNC_1 (struct mp_filter*) ;
 int FUNC_2 (struct mp_filter*) ;
 int FUNC_3 (struct mp_filter*) ;

__attribute__((used)) static void FUNC_4(struct mp_filter *VAR_0)
{
    vd_ffmpeg_ctx *VAR_1 = VAR_0->priv;

    FUNC_3(VAR_0);

    FUNC_2(VAR_0);

    bool VAR_2 = VAR_1->use_hwdec;
    FUNC_1(VAR_0);
    if (!VAR_1->avctx && VAR_2)
        FUNC_0(VAR_0);
}
