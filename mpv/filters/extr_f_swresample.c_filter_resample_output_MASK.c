
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int f; } ;
struct priv {int in_rate; scalar_t__ current_pts; TYPE_2__ public; int speed; struct mp_aframe* input; int avrctx_out; int reorder_buffer; int pre_out_fmt; int reorder_out; int pool_fmt; int avrctx; int out_pool; TYPE_1__* opts; } ;
struct mp_frame {int dummy; } ;
struct mp_chmap {int dummy; } ;
struct mp_aframe {int dummy; } ;
struct TYPE_3__ {int max_output_frame_size; } ;


 int VAR_0 ;
 struct mp_frame FUNC_0 (int ,struct mp_aframe*) ;
 int FUNC_1 (double,int,int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct priv*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct mp_frame VAR_3 ;
 int FUNC_4 (struct mp_aframe**) ;
 int FUNC_5 (struct mp_aframe*) ;
 double FUNC_6 (struct priv*) ;
 int FUNC_7 (struct priv*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct mp_aframe*,int ) ;
 int FUNC_10 (struct mp_aframe*,int ) ;
 int FUNC_11 (struct mp_aframe*,struct mp_aframe*) ;
 struct mp_aframe* FUNC_12 () ;
 double FUNC_13 (struct mp_aframe*) ;
 scalar_t__ FUNC_14 (struct mp_aframe*) ;
 int FUNC_15 (int ,struct mp_chmap*) ;
 int FUNC_16 (struct mp_aframe*) ;
 double FUNC_17 (struct mp_aframe*) ;
 int FUNC_18 (struct mp_aframe*,int ) ;
 scalar_t__ FUNC_19 (int ,struct mp_aframe*,int) ;
 int FUNC_20 (struct mp_aframe*,scalar_t__) ;
 int FUNC_21 (struct mp_aframe*,int) ;
 int FUNC_22 (struct mp_aframe*,int) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct mp_aframe*,int ,struct mp_chmap*) ;
 int FUNC_25 (int ,struct mp_aframe*,struct mp_aframe*,int) ;
 int FUNC_26 (struct mp_aframe*) ;

__attribute__((used)) static struct mp_frame FUNC_27(struct priv *VAR_4,
                                              struct mp_aframe *VAR_5)
{
    struct mp_aframe *VAR_6 = ((void*)0);

    if (!VAR_4->avrctx)
        goto error;




    double VAR_7 = VAR_4->opts->max_output_frame_size / 1000 * VAR_4->in_rate;
    int VAR_8 = FUNC_8(FUNC_1(VAR_7, 128, VAR_0));
    int VAR_9 = VAR_5 ? FUNC_16(VAR_5) : 0;
    VAR_9 = FUNC_2(VAR_9, VAR_8);

    int VAR_10 = FUNC_7(VAR_4, VAR_9);
    VAR_6 = FUNC_12();
    FUNC_9(VAR_6, VAR_4->pool_fmt);
    if (FUNC_19(VAR_4->out_pool, VAR_6, VAR_10) < 0)
        goto error;

    int VAR_11 = 0;
    if (VAR_10) {
        VAR_11 = FUNC_25(VAR_4->avrctx, VAR_6, VAR_5, VAR_9);
        if (VAR_11 < 0 || VAR_11 > VAR_10)
            goto error;
        FUNC_21(VAR_6, VAR_11);
    }

    struct mp_chmap VAR_12;
    if (!FUNC_15(VAR_4->pool_fmt, &VAR_12))
        goto error;
    if (!FUNC_24(VAR_6, VAR_4->reorder_out, &VAR_12))
        goto error;

    if (!FUNC_10(VAR_6, VAR_4->pre_out_fmt)) {
        struct mp_aframe *VAR_13 = FUNC_12();
        FUNC_9(VAR_13, VAR_4->pre_out_fmt);
        if (FUNC_19(VAR_4->reorder_buffer, VAR_13, VAR_11) < 0) {
            FUNC_26(VAR_13);
            goto error;
        }
        int VAR_14 = 0;
        if (VAR_11)
            VAR_14 = FUNC_25(VAR_4->avrctx_out, VAR_13, VAR_6, VAR_11);
        FUNC_26(VAR_6);
        VAR_6 = VAR_13;
        if (VAR_14 != VAR_11)
            goto error;
    }

    FUNC_5(VAR_6);

    if (VAR_5) {
        FUNC_11(VAR_6, VAR_5);
        VAR_4->current_pts = FUNC_14(VAR_5);
        FUNC_22(VAR_5, VAR_9);
    }

    if (VAR_11) {
        if (VAR_4->current_pts != VAR_2) {
            double VAR_15 = FUNC_6(VAR_4) * FUNC_17(VAR_6) +
                           FUNC_13(VAR_6) +
                           (VAR_4->input ? FUNC_13(VAR_4->input) : 0);
            FUNC_20(VAR_6, VAR_4->current_pts - VAR_15);
            FUNC_18(VAR_6, VAR_4->speed);
        }
    } else {
        FUNC_4(&VAR_6);
    }

    return VAR_6 ? FUNC_0(VAR_1, VAR_6) : VAR_3;
error:
    FUNC_26(VAR_6);
    FUNC_3(VAR_4, "Error on resampling.\n");
    FUNC_23(VAR_4->public.f);
    return VAR_3;
}
