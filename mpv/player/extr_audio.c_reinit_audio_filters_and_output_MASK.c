
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
struct track {TYPE_4__* dec; } ;
struct mp_chmap {int member_0; } ;
struct mp_aframe {int dummy; } ;
struct ao_chain {int spdif_passthrough; int spdif_failed; scalar_t__ ao_resume_time; TYPE_2__* filter; int ao_buffer; struct track* track; int * ao; int output_frame; } ;
struct TYPE_5__ {int num_chmaps; int * chmaps; scalar_t__ auto_safe; int set; } ;
struct MPOpts {scalar_t__ gapless_audio; scalar_t__ audio_wait_open; TYPE_1__ audio_output_channels; scalar_t__ audio_exclusive; scalar_t__ audio_stream_silence; scalar_t__ ao_null_fallback; scalar_t__ audio_output_format; scalar_t__ force_srate; } ;
struct MPContext {int * ao; int error_playing; int encode_lavc_ctx; int global; struct mp_aframe* ao_filter_fmt; struct ao_chain* ao_chain; struct MPOpts* opts; } ;
struct TYPE_7__ {int try_spdif; } ;
struct TYPE_6__ {int output_aformat; int ao_needs_update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*,char*,int ,int ) ;
 int FUNC_2 (struct MPContext*,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int*,int*,struct mp_chmap*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,int,int ,struct MPContext*,int ,int,int,struct mp_chmap) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ao_chain*) ;
 int FUNC_13 (char*,int,int,int,struct mp_chmap) ;
 int FUNC_14 (struct MPContext*) ;
 int FUNC_15 (struct MPContext*,struct track*) ;
 scalar_t__ FUNC_16 (struct mp_aframe*,struct mp_aframe*) ;
 int FUNC_17 (struct mp_aframe*) ;
 int FUNC_18 (struct mp_aframe*,struct mp_chmap*) ;
 int FUNC_19 (struct mp_aframe*) ;
 int FUNC_20 (struct mp_aframe*) ;
 struct mp_aframe* FUNC_21 (int ) ;
 int FUNC_22 (struct mp_aframe*,int *) ;
 int FUNC_23 (struct mp_aframe*,scalar_t__) ;
 int FUNC_24 (struct mp_aframe*,scalar_t__) ;
 int FUNC_25 (int ,int,struct mp_chmap*,int) ;
 int FUNC_26 (struct mp_chmap*,struct mp_chmap*) ;
 int FUNC_27 (struct mp_chmap*,int *,int) ;
 int FUNC_28 (TYPE_4__*) ;
 int FUNC_29 (struct MPContext*,int ,int *) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_32 () ;
 int FUNC_33 (struct MPContext*) ;
 int VAR_6 ;
 int FUNC_34 (struct MPContext*) ;
 int FUNC_35 (struct mp_aframe*) ;
 int FUNC_36 (struct MPContext*) ;
 int FUNC_37 (struct MPContext*) ;
 int FUNC_38 (struct MPContext*,int) ;

__attribute__((used)) static void FUNC_39(struct MPContext *VAR_7)
{
    struct MPOpts *VAR_8 = VAR_7->opts;
    struct ao_chain *VAR_9 = VAR_7->ao_chain;
    FUNC_12(VAR_9);
    struct track *VAR_10 = VAR_9->track;

    if (!VAR_9->filter->ao_needs_update)
        return;

    FUNC_3(&VAR_9->output_frame);


    struct mp_aframe *VAR_11 = FUNC_21(VAR_9->filter->output_aformat);
    if (!VAR_11)
        FUNC_4();

    if (!FUNC_17(VAR_11)) {
        FUNC_35(VAR_11);
        goto init_error;
    }

    if (FUNC_5(FUNC_19(VAR_11))) {
        if (VAR_8->force_srate)
            FUNC_24(VAR_11, VAR_8->force_srate);
        if (VAR_8->audio_output_format)
            FUNC_23(VAR_11, VAR_8->audio_output_format);
        if (VAR_8->audio_output_channels.num_chmaps == 1)
            FUNC_22(VAR_11, &VAR_8->audio_output_channels.chmaps[0]);
    }




    if ((VAR_7->ao_filter_fmt && VAR_7->ao && VAR_8->gapless_audio < 0 &&
         FUNC_16(VAR_7->ao_filter_fmt, VAR_11)) ||
        (VAR_7->ao && VAR_8->gapless_audio > 0))
    {
        FUNC_31(VAR_9->filter, VAR_7->ao);
        FUNC_35(VAR_11);
        return;
    }

    FUNC_37(VAR_7);

    int VAR_12 = FUNC_20(VAR_11);
    int VAR_13 = FUNC_19(VAR_11);
    struct mp_chmap VAR_14 = {0};
    FUNC_18(VAR_11, &VAR_14);

    int VAR_15 = 0;
    bool VAR_16 = FUNC_6(VAR_13) &&
                          VAR_9->spdif_passthrough;

    if (VAR_8->ao_null_fallback && !VAR_16)
        VAR_15 |= VAR_1;

    if (VAR_8->audio_stream_silence)
        VAR_15 |= VAR_3;

    if (VAR_8->audio_exclusive)
        VAR_15 |= VAR_0;

    if (FUNC_5(VAR_13)) {
        if (!VAR_8->audio_output_channels.set ||
            VAR_8->audio_output_channels.auto_safe)
            VAR_15 |= VAR_2;

        FUNC_27(&VAR_14,
                          VAR_8->audio_output_channels.chmaps,
                          VAR_8->audio_output_channels.num_chmaps);
    }

    VAR_7->ao_filter_fmt = VAR_11;

    VAR_7->ao = FUNC_10(VAR_7->global, VAR_15, VAR_6,
                             VAR_7, VAR_7->encode_lavc_ctx, VAR_12,
                             VAR_13, VAR_14);
    VAR_9->ao = VAR_7->ao;

    int VAR_17 = 0;
    int VAR_18 = 0;
    struct mp_chmap VAR_19 = {0};
    if (VAR_7->ao)
        FUNC_8(VAR_7->ao, &VAR_17, &VAR_18, &VAR_19);


    if (VAR_7->ao && FUNC_6(VAR_13)) {
        if (VAR_12 != VAR_17 || VAR_13 != VAR_18 ||
            !FUNC_26(&VAR_14, &VAR_19))
        {
            FUNC_0(VAR_7, "Passthrough format unsupported.\n");
            FUNC_11(VAR_7->ao);
            VAR_7->ao = ((void*)0);
            VAR_9->ao = ((void*)0);
        }
    }

    if (!VAR_7->ao) {

        if (VAR_16 && VAR_9->track && VAR_9->track->dec) {
            FUNC_2(VAR_7, "Falling back to PCM output.\n");
            VAR_9->spdif_passthrough = 0;
            VAR_9->spdif_failed = 1;
            VAR_9->track->dec->try_spdif = 0;
            if (!FUNC_28(VAR_9->track->dec))
                goto init_error;
            FUNC_34(VAR_7);
            FUNC_30(VAR_9->filter);
            FUNC_33(VAR_7);
            return;
        }

        FUNC_0(VAR_7, "Could not open/initialize audio device -> no sound.\n");
        VAR_7->error_playing = VAR_4;
        goto init_error;
    }

    FUNC_25(VAR_9->ao_buffer, VAR_18, &VAR_19,
                                VAR_17);

    char VAR_20[192];
    FUNC_1(VAR_7, "AO: [%s] %s\n", FUNC_9(VAR_7->ao),
            FUNC_13(VAR_20, sizeof(VAR_20), VAR_17, VAR_18,
                                    VAR_19));
    FUNC_2(VAR_7, "AO: Description: %s\n", FUNC_7(VAR_7->ao));
    FUNC_38(VAR_7, 1);

    VAR_9->ao_resume_time =
        VAR_8->audio_wait_open > 0 ? FUNC_32() + VAR_8->audio_wait_open : 0;

    FUNC_31(VAR_9->filter, VAR_7->ao);

    FUNC_14(VAR_7);

    FUNC_29(VAR_7, VAR_5, ((void*)0));

    return;

init_error:
    FUNC_36(VAR_7);
    FUNC_37(VAR_7);
    FUNC_15(VAR_7, VAR_10);
}
