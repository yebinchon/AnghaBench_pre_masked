
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct mp_chmap {int dummy; } ;
struct ao_chain {scalar_t__ ao_resume_time; int underrun; int ao_buffer; TYPE_1__* filter; TYPE_4__* track; } ;
struct MPOpts {int sync_max_audio_change; int sync_max_video_change; scalar_t__ video_sync; double sync_audio_drop_size; scalar_t__ gapless_audio; } ;
struct MPContext {scalar_t__ audio_status; int audio_speed; scalar_t__ video_status; scalar_t__ delay; scalar_t__ last_av_difference; double audio_drop_throttle; int encode_lavc_ctx; scalar_t__ ao; scalar_t__ paused; scalar_t__ display_sync_active; scalar_t__ vo_chain; struct ao_chain* ao_chain; struct MPOpts* opts; } ;
struct TYPE_8__ {TYPE_2__* dec; } ;
struct TYPE_7__ {int * pins; } ;
struct TYPE_6__ {scalar_t__ pts_reset; } ;
struct TYPE_5__ {scalar_t__ ao_needs_update; TYPE_3__* f; scalar_t__ got_output_eof; scalar_t__ failed_output_conversion; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct MPContext*,char*) ;
 int FUNC_3 (struct MPContext*,char*,...) ;
 int FUNC_4 (struct MPContext*,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int*,int*,struct mp_chmap*) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int) ;
 int FUNC_15 (double) ;
 int FUNC_16 (struct MPContext*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct MPContext*,TYPE_4__*) ;
 double FUNC_19 (scalar_t__) ;
 int FUNC_20 (struct MPContext*,int ,int) ;
 int FUNC_21 (struct MPContext*,int*) ;
 int FUNC_22 (int ,int) ;
 int FUNC_23 (int ,int ***,int*) ;
 int FUNC_24 (int ,int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int) ;
 int FUNC_27 (TYPE_3__*) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (struct MPContext*,double) ;
 scalar_t__ FUNC_30 () ;
 int FUNC_31 (struct MPContext*) ;
 int FUNC_32 (struct MPContext*) ;
 int FUNC_33 (struct MPContext*) ;
 int FUNC_34 (struct MPContext*) ;
 int FUNC_35 (struct MPContext*,int **,int,int) ;

void FUNC_36(struct MPContext *VAR_15)
{
    struct MPOpts *VAR_16 = VAR_15->opts;
    bool VAR_17 = VAR_15->audio_status == VAR_8;

    FUNC_16(VAR_15);

    if (VAR_15->ao && FUNC_10(VAR_15->ao, VAR_5))
        FUNC_33(VAR_15);

    if (VAR_15->ao && FUNC_10(VAR_15->ao,
                                               VAR_4))
        FUNC_12(VAR_15->ao);

    struct ao_chain *VAR_18 = VAR_15->ao_chain;
    if (!VAR_18)
        return;

    if (VAR_18->filter->failed_output_conversion) {
        FUNC_18(VAR_15, VAR_18->track);
        return;
    }



    if (!VAR_15->ao) {

        FUNC_28(VAR_18->filter->f->pins[1]);
        FUNC_32(VAR_15);
        if (!VAR_15->ao_chain)
            return;
        if (VAR_18->filter->got_output_eof &&
            VAR_15->audio_status != VAR_8)
        {
            VAR_15->audio_status = VAR_8;
            FUNC_3(VAR_15, "audio EOF without any data\n");
            FUNC_27(VAR_18->filter->f);
            FUNC_17(VAR_15->encode_lavc_ctx, VAR_13);
        }
        return;
    }

    if (VAR_18->ao_resume_time > FUNC_30()) {
        double VAR_19 = VAR_18->ao_resume_time - FUNC_30();
        FUNC_29(VAR_15, VAR_19);
        return;
    }

    if (VAR_15->vo_chain && VAR_18->track && VAR_18->track->dec &&
        VAR_18->track->dec->pts_reset)
    {
        FUNC_4(VAR_15, "Reset playback due to audio timestamp reset.\n");
        FUNC_34(VAR_15);
        FUNC_31(VAR_15);
        return;
    }

    int VAR_20;
    int VAR_21;
    struct mp_chmap VAR_22;
    FUNC_8(VAR_15->ao, &VAR_20, &VAR_21, &VAR_22);
    double VAR_23 = VAR_20 / VAR_15->audio_speed;
    int VAR_24 = FUNC_6(VAR_21);


    if (VAR_15->audio_status == VAR_10 && FUNC_13(VAR_15->ao) &&
        VAR_15->video_status != VAR_8 && VAR_15->delay > 0)
        return;

    int VAR_25 = FUNC_9(VAR_15->ao);

    if (FUNC_10(VAR_15->ao, VAR_6))
        VAR_18->underrun = 1;




    if (VAR_18->underrun)
        return;

    int VAR_26 = 0;
    bool VAR_27 = FUNC_21(VAR_15, &VAR_26);
    if (VAR_26 > 0) {
        VAR_25 = FUNC_1(VAR_26 + 1, FUNC_0(VAR_25, 2500));
    } else if (VAR_26 < 0) {
        VAR_25 = FUNC_0(1, VAR_25 + VAR_26);
    }

    int VAR_28 = 0;
    double VAR_29 =
        (VAR_16->sync_max_audio_change + VAR_16->sync_max_video_change) / 100;
    if (VAR_15->display_sync_active && VAR_16->video_sync == VAR_14 &&
        FUNC_19(VAR_15->last_av_difference) >= VAR_16->sync_audio_drop_size &&
        VAR_15->audio_drop_throttle < VAR_29 &&
        VAR_15->audio_status == VAR_10)
    {
        int VAR_30 = FUNC_15(VAR_16->sync_audio_drop_size * VAR_23);
        VAR_30 = (VAR_30 + VAR_24 / 2) / VAR_24 * VAR_24;

        VAR_28 = VAR_15->last_av_difference >= 0 ? -VAR_30 : VAR_30;

        VAR_25 = FUNC_0(VAR_25, VAR_30);

        VAR_15->audio_drop_throttle += 1 - VAR_29 - VAR_30 / VAR_23;
    }

    VAR_25 = VAR_25 / VAR_24 * VAR_24;

    int VAR_31 = VAR_15->audio_status >= VAR_7 ? VAR_0 : VAR_1;
    bool VAR_32 = 0;
    if (VAR_25 > FUNC_25(VAR_18->ao_buffer)) {
        VAR_31 = FUNC_20(VAR_15, VAR_18->ao_buffer, VAR_25);
        if (VAR_18->filter->ao_needs_update) {
            FUNC_32(VAR_15);
            FUNC_31(VAR_15);
            return;
        }
        if (VAR_31 == VAR_2)
            return;
        VAR_32 = 1;
    }




    if (VAR_15->audio_status >= VAR_7 &&
        FUNC_25(VAR_18->ao_buffer) > 0)
    {
        VAR_15->audio_status = VAR_12;
        return;
    }

    bool VAR_33 = 0;
    if (VAR_26 >= 0) {
        int VAR_34 = FUNC_25(VAR_18->ao_buffer);
        FUNC_26(VAR_18->ao_buffer, FUNC_1(VAR_26, VAR_34));

        VAR_33 |= VAR_27 && VAR_26 < VAR_34;
        VAR_32 |= VAR_26 > 0;
    } else if (VAR_26 < 0) {
        if (-VAR_26 > VAR_25) {
            FUNC_11(VAR_15->ao);
            VAR_15->audio_status = VAR_7;
            VAR_15->delay = 0;
            return;
        }
        FUNC_24(VAR_18->ao_buffer, -VAR_26);
        VAR_33 = 1;
    }

    if (VAR_28) {
        int VAR_35 = FUNC_25(VAR_18->ao_buffer);
        if (FUNC_5(VAR_28) > VAR_35)
            VAR_28 = VAR_28 >= 0 ? VAR_35 : -VAR_35;
        VAR_15->last_av_difference += VAR_28 / VAR_23;
        if (VAR_28 >= 0) {
            FUNC_26(VAR_18->ao_buffer, VAR_28);
            FUNC_2(VAR_15, "drop-audio");
        } else {
            FUNC_22(VAR_18->ao_buffer, -VAR_28);
            FUNC_2(VAR_15, "duplicate-audio");
        }
        FUNC_3(VAR_15, "audio skip_duplicate=%d\n", VAR_28);
    }

    if (VAR_15->audio_status == VAR_12) {
        if (VAR_33)
            VAR_15->audio_status = VAR_9;
        if (VAR_31 != VAR_1 && !FUNC_25(VAR_18->ao_buffer))
            VAR_15->audio_status = VAR_8;
        if (VAR_32 || VAR_33)
            FUNC_31(VAR_15);
        return;
    }

    FUNC_14(VAR_15->audio_status >= VAR_9);



    if (VAR_15->audio_status == VAR_9)
        VAR_15->audio_status = VAR_11;



    if (VAR_15->audio_status == VAR_11) {

        return;
    }

    bool VAR_36 = VAR_31 == VAR_0;
    bool VAR_37 = 0;
    int VAR_38 = 0;

    if (VAR_25 > FUNC_25(VAR_18->ao_buffer)) {
        VAR_25 = FUNC_25(VAR_18->ao_buffer);
        VAR_37 = 1;
    }

    VAR_36 &= VAR_37;

    if (VAR_36 && VAR_25 < VAR_24)
        VAR_25 = 0;






    if (VAR_36 && (!VAR_16->gapless_audio ||
        (VAR_16->gapless_audio <= 0 && VAR_15->video_status != VAR_8)))
        VAR_38 |= VAR_3;

    uint8_t **VAR_39;
    int VAR_40;
    FUNC_23(VAR_18->ao_buffer, &VAR_39, &VAR_40);
    if (VAR_36 || VAR_40 >= VAR_24)
        VAR_40 = VAR_40 / VAR_24 * VAR_24;
    VAR_40 = FUNC_1(VAR_40, VAR_15->paused ? 0 : VAR_25);
    int VAR_41 = FUNC_35(VAR_15, VAR_39, VAR_40, VAR_38);
    FUNC_14(VAR_41 >= 0 && VAR_41 <= VAR_40);
    FUNC_26(VAR_18->ao_buffer, VAR_41);

    VAR_15->audio_drop_throttle =
        FUNC_0(0, VAR_15->audio_drop_throttle - VAR_41 / VAR_23);

    FUNC_16(VAR_15);

    VAR_15->audio_status = VAR_10;
    if (VAR_36 && !VAR_25) {
        VAR_15->audio_status = VAR_7;


        if (FUNC_7(VAR_15->ao) || VAR_16->gapless_audio) {
            VAR_15->audio_status = VAR_8;
            if (!VAR_17) {
                FUNC_3(VAR_15, "audio EOF reached\n");
                FUNC_31(VAR_15);
                FUNC_17(VAR_15->encode_lavc_ctx, VAR_13);
            }
        }
    }
}
