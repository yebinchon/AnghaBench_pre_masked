
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int f; } ;
struct mp_chmap {scalar_t__ num; } ;
struct priv {int in_rate; int out_rate; int is_resampling; TYPE_1__ public; void* avrctx_out; void* avrctx; int reorder_in; void* pool_fmt; void* avrctx_fmt; void* pre_out_fmt; int out_format; struct mp_chmap out_channels; int reorder_out; struct mp_chmap in_channels; TYPE_2__* opts; int log; int in_format; int speed; int in_rate_user; } ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_4__ {int filter_size; int phase_shift; int linear; double cutoff; int normalize; int avopts; } ;


 int VAR_0 ;
 double FUNC_0 (double,double) ;
 int FUNC_1 (struct priv*,char*,...) ;
 int FUNC_2 (struct priv*,char*,...) ;
 int FUNC_3 (struct priv*,char*,int,int ,...) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (void*,char*,int,int ) ;
 int FUNC_9 (void*,char*,int,int ) ;
 void* FUNC_10 () ;
 scalar_t__ FUNC_11 (void*) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (struct priv*) ;
 int FUNC_14 (struct priv*,int,int) ;
 int FUNC_15 (void*,void*) ;
 void* FUNC_16 () ;
 int FUNC_17 (void*,struct mp_chmap*) ;
 int FUNC_18 (void*,int ) ;
 int FUNC_19 (void*,int) ;
 scalar_t__ FUNC_20 (struct mp_chmap*,struct mp_chmap*) ;
 int FUNC_21 (struct mp_chmap*,scalar_t__) ;
 int FUNC_22 (struct mp_chmap*,int) ;
 int FUNC_23 (int ,struct mp_chmap*,struct mp_chmap*) ;
 scalar_t__ FUNC_24 (struct mp_chmap*) ;
 int FUNC_25 (struct mp_chmap*,scalar_t__) ;
 int FUNC_26 (struct mp_chmap*) ;
 int FUNC_27 (struct mp_chmap*) ;
 int FUNC_28 (int ) ;
 scalar_t__ FUNC_29 (int ,void*,int ) ;
 int FUNC_30 (int ,int ) ;
 int FUNC_31 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_32(struct priv *VAR_1, bool VAR_2)
{
    FUNC_13(VAR_1);

    VAR_1->in_rate = FUNC_30(VAR_1->in_rate_user, VAR_1->speed);

    FUNC_3(VAR_1, "%dHz %s %s -> %dHz %s %s\n",
               VAR_1->in_rate, FUNC_27(&VAR_1->in_channels),
               FUNC_4(VAR_1->in_format),
               VAR_1->out_rate, FUNC_27(&VAR_1->out_channels),
               FUNC_4(VAR_1->out_format));

    VAR_1->avrctx = FUNC_10();
    VAR_1->avrctx_out = FUNC_10();
    if (!VAR_1->avrctx || !VAR_1->avrctx_out)
        goto error;

    enum AVSampleFormat VAR_3 = FUNC_6(VAR_1->in_format);
    enum AVSampleFormat VAR_4 = FUNC_6(VAR_1->out_format);
    enum AVSampleFormat VAR_5 = FUNC_7(VAR_4);

    if (VAR_3 == VAR_0 ||
        VAR_4 == VAR_0 ||
        VAR_5 == VAR_0)
    {
        FUNC_1(VAR_1, "unsupported conversion: %s -> %s\n",
               FUNC_4(VAR_1->in_format), FUNC_4(VAR_1->out_format));
        goto error;
    }

    FUNC_9(VAR_1->avrctx, "filter_size", VAR_1->opts->filter_size, 0);
    FUNC_9(VAR_1->avrctx, "phase_shift", VAR_1->opts->phase_shift, 0);
    FUNC_9(VAR_1->avrctx, "linear_interp", VAR_1->opts->linear, 0);

    double VAR_6 = VAR_1->opts->cutoff;
    if (VAR_6 <= 0.0)
        VAR_6 = FUNC_0(1.0 - 6.5 / (VAR_1->opts->filter_size + 8), 0.80);
    FUNC_8(VAR_1->avrctx, "cutoff", VAR_6, 0);

    int VAR_7 = VAR_1->opts->normalize;



    FUNC_9(VAR_1->avrctx, "normalize_mix_level", !!VAR_7, 0);


    if (FUNC_29(VAR_1->log, VAR_1->avrctx, VAR_1->opts->avopts) < 0)
        goto error;

    struct mp_chmap VAR_8 = VAR_1->in_channels;
    struct mp_chmap VAR_9 = VAR_1->out_channels;




    if (FUNC_24(&VAR_8) || FUNC_24(&VAR_9) ||
        FUNC_20(&VAR_8, &VAR_9))
    {
        FUNC_25(&VAR_8, VAR_8.num);
        FUNC_25(&VAR_9, VAR_9.num);
    }


    uint64_t VAR_10 = FUNC_26(&VAR_8);
    uint64_t VAR_11 = FUNC_26(&VAR_9);

    struct mp_chmap VAR_12, VAR_13;
    FUNC_22(&VAR_12, VAR_10);
    FUNC_22(&VAR_13, VAR_11);

    if (VAR_2 && !FUNC_20(&VAR_12, &VAR_13)) {
        FUNC_3(VAR_1, "Remix: %s -> %s\n", FUNC_27(&VAR_12),
                                            FUNC_27(&VAR_13));
    }

    if (VAR_12.num != VAR_8.num) {

        FUNC_2(VAR_1, "Unsupported input channel layout %s.\n",
                 FUNC_27(&VAR_8));
        goto error;
    }

    FUNC_23(VAR_1->reorder_in, &VAR_8, &VAR_12);
    FUNC_31(VAR_1->reorder_in, VAR_8.num);

    if (FUNC_20(&VAR_13, &VAR_9)) {

        VAR_5 = VAR_4;
    } else {

        struct mp_chmap VAR_14 = VAR_13;
        FUNC_21(&VAR_14, VAR_9.num);
        if (VAR_14.num != VAR_9.num)
            goto error;
    }
    FUNC_23(VAR_1->reorder_out, &VAR_13, &VAR_9);

    VAR_1->pre_out_fmt = FUNC_16();
    FUNC_19(VAR_1->pre_out_fmt, VAR_1->out_rate);
    FUNC_17(VAR_1->pre_out_fmt, &VAR_1->out_channels);
    FUNC_18(VAR_1->pre_out_fmt, VAR_1->out_format);

    VAR_1->avrctx_fmt = FUNC_16();
    FUNC_15(VAR_1->avrctx_fmt, VAR_1->pre_out_fmt);
    FUNC_17(VAR_1->avrctx_fmt, &VAR_13);
    FUNC_18(VAR_1->avrctx_fmt, FUNC_5(VAR_5));





    VAR_1->pool_fmt = FUNC_16();
    FUNC_15(VAR_1->pool_fmt, VAR_1->avrctx_fmt);
    if (VAR_9.num > VAR_13.num)
        FUNC_17(VAR_1->pool_fmt, &VAR_9);

    VAR_11 = FUNC_14(VAR_1, VAR_10, VAR_11);


    FUNC_9(VAR_1->avrctx, "in_channel_layout", VAR_10, 0);
    FUNC_9(VAR_1->avrctx, "out_channel_layout", VAR_11, 0);
    FUNC_9(VAR_1->avrctx, "in_sample_rate", VAR_1->in_rate, 0);
    FUNC_9(VAR_1->avrctx, "out_sample_rate", VAR_1->out_rate, 0);
    FUNC_9(VAR_1->avrctx, "in_sample_fmt", VAR_3, 0);
    FUNC_9(VAR_1->avrctx, "out_sample_fmt", VAR_5, 0);


    struct mp_chmap VAR_15;
    FUNC_25(&VAR_15, VAR_9.num);
    uint64_t VAR_16 = FUNC_26(&VAR_15);
    if (!VAR_16)
        goto error;
    FUNC_9(VAR_1->avrctx_out, "in_channel_layout", VAR_16, 0);
    FUNC_9(VAR_1->avrctx_out, "out_channel_layout", VAR_16, 0);

    FUNC_9(VAR_1->avrctx_out, "in_sample_fmt", VAR_5, 0);
    FUNC_9(VAR_1->avrctx_out, "out_sample_fmt", VAR_4, 0);
    FUNC_9(VAR_1->avrctx_out, "in_sample_rate", VAR_1->out_rate, 0);
    FUNC_9(VAR_1->avrctx_out, "out_sample_rate", VAR_1->out_rate, 0);




    FUNC_12(VAR_1->avrctx, VAR_1->reorder_in);

    VAR_1->is_resampling = 0;

    if (FUNC_11(VAR_1->avrctx) < 0 || FUNC_11(VAR_1->avrctx_out) < 0) {
        FUNC_1(VAR_1, "Cannot open Libavresample context.\n");
        goto error;
    }
    return 1;

error:
    FUNC_13(VAR_1);
    FUNC_28(VAR_1->public.f);
    FUNC_2(VAR_1, "libswresample failed to initialize.\n");
    return 0;
}
