
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hw_imgfmt; } ;
struct priv {int hw_pool; int last_sw_fmt; TYPE_1__ public; int av_device_ctx; } ;
struct mp_image {int w; int h; int imgfmt; } ;
struct mp_frame {scalar_t__ type; struct mp_image* data; } ;
struct mp_filter {int * ppins; struct priv* priv; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct mp_frame FUNC_1 (scalar_t__,struct mp_image*) ;
 int FUNC_2 (struct mp_filter*,char*) ;
 scalar_t__ VAR_0 ;
 struct mp_image* FUNC_3 (int ,struct mp_image*) ;
 int FUNC_4 (struct mp_filter*) ;
 scalar_t__ FUNC_5 (struct mp_frame) ;
 int FUNC_6 (struct mp_frame*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct mp_frame) ;
 struct mp_frame FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,int ,int ,int,int) ;
 int FUNC_11 (struct priv*,int ) ;

__attribute__((used)) static void FUNC_12(struct mp_filter *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    if (!FUNC_7(VAR_1->ppins[1], VAR_1->ppins[0]))
        return;

    struct mp_frame VAR_3 = FUNC_9(VAR_1->ppins[0]);
    if (FUNC_5(VAR_3)) {
        FUNC_8(VAR_1->ppins[1], VAR_3);
        return;
    }
    if (VAR_3.type != VAR_0) {
        FUNC_2(VAR_1, "unsupported frame type\n");
        goto error;
    }
    struct mp_image *VAR_4 = VAR_3.data;


    if (FUNC_0(VAR_4->imgfmt)) {
        FUNC_8(VAR_1->ppins[1], VAR_3);
        return;
    }

    if (VAR_4->w % 2 || VAR_4->h % 2) {
        FUNC_2(VAR_1, "non-mod 2 input frames unsupported\n");
        goto error;
    }

    if (!FUNC_11(VAR_2, VAR_4->imgfmt)) {
        FUNC_2(VAR_1, "no hw upload format found\n");
        goto error;
    }

    if (!FUNC_10(&VAR_2->hw_pool, VAR_2->av_device_ctx,
                                     VAR_2->public.hw_imgfmt, VAR_2->last_sw_fmt,
                                     VAR_4->w, VAR_4->h))
    {
        FUNC_2(VAR_1, "failed to create frame pool\n");
        goto error;
    }

    struct mp_image *VAR_5 = FUNC_3(VAR_2->hw_pool, VAR_4);
    if (!VAR_5)
        goto error;

    FUNC_6(&VAR_3);
    FUNC_8(VAR_1->ppins[1], FUNC_1(VAR_0, VAR_5));

    return;

error:
    FUNC_6(&VAR_3);
    FUNC_2(VAR_1, "failed to upload frame\n");
    FUNC_4(VAR_1);
}
