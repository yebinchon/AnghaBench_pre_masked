
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct track {scalar_t__ type; struct mp_decoder_wrapper* dec; TYPE_11__* demuxer; int user_tid; TYPE_1__* stream; scalar_t__ is_external; scalar_t__ selected; } ;
struct seek_params {scalar_t__ type; double amount; scalar_t__ exact; int flags; } ;
struct mp_decoder_wrapper {int dummy; } ;
struct MPOpts {int play_dir; double hr_seek_demuxer_offset; scalar_t__ hr_seek_framedrop; int hr_seek; scalar_t__ correct_pts; } ;
struct TYPE_18__ {double last_chapter_pts; int last_chapter_seek; int num_tracks; int play_dir; double last_seek_pts; int hrseek_active; int hrseek_backstep; double hrseek_pts; scalar_t__ stop_play; struct seek_params current_seek; int start_timestamp; struct track** tracks; struct track* seek_slave; scalar_t__ recorder; TYPE_11__* demuxer; struct MPOpts* opts; } ;
struct TYPE_17__ {int attached_picture; } ;
struct TYPE_16__ {int seekable; scalar_t__ ts_resets_possible; } ;
typedef TYPE_2__ MPContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double FUNC_0 (double,double) ;


 scalar_t__ VAR_2 ;

 int VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 double VAR_8 ;
 int FUNC_2 (TYPE_2__*,char*,double,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_11__*,int) ;
 int FUNC_6 (TYPE_11__*,double,int) ;
 double FUNC_7 (TYPE_2__*) ;
 double FUNC_8 (TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,struct track*) ;
 int FUNC_10 (struct mp_decoder_wrapper*,double) ;
 int FUNC_11 (TYPE_2__*,int ,int *) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_17(MPContext *VAR_16, struct seek_params VAR_17)
{
    struct MPOpts *VAR_18 = VAR_16->opts;

    if (!VAR_16->demuxer || !VAR_17.type || VAR_17.amount == VAR_8)
        return;

    bool VAR_19 = VAR_17.exact == VAR_5;
    double VAR_20 = FUNC_7(VAR_16);
    if (VAR_20 == VAR_8 && VAR_17.type == 128)
        return;
    if (VAR_20 == VAR_8)
        VAR_20 = 0;
    double VAR_21 = VAR_8;
    int VAR_22 = 0;

    switch (VAR_17.type) {
    case 131:
        VAR_21 = VAR_17.amount;
        break;
    case 130:
        VAR_21 = VAR_20;
        VAR_19 = 1;
        break;
    case 128:
        VAR_22 = VAR_17.amount > 0 ? VAR_11 : 0;
        VAR_21 = VAR_20 + VAR_17.amount;
        break;
    case 129: ;
        double VAR_23 = FUNC_8(VAR_16);
        if (VAR_23 >= 0)
            VAR_21 = VAR_17.amount * VAR_23;
        break;
    default: FUNC_3();
    }

    double VAR_24 = VAR_21;

    bool VAR_25 = VAR_18->correct_pts && VAR_17.exact != VAR_4 &&
                 ((VAR_18->hr_seek == 0 && VAR_17.type == 131) ||
                  VAR_18->hr_seek > 0 || VAR_17.exact >= VAR_2) &&
                 VAR_21 != VAR_8;

    if (VAR_17.type == 129 || VAR_17.amount < 0 ||
        (VAR_17.type == 131 && VAR_17.amount < VAR_16->last_chapter_pts))
        VAR_16->last_chapter_seek = -2;


    if (VAR_17.type == 129 && !VAR_25 &&
        (VAR_16->demuxer->ts_resets_possible || VAR_21 == VAR_8))
    {
        VAR_24 = VAR_17.amount;
        VAR_22 |= VAR_10;
    }

    int VAR_26 = VAR_18->play_dir;
    if (VAR_26 < 0)
        VAR_22 |= VAR_13;

    if (VAR_25) {
        double VAR_27 = VAR_18->hr_seek_demuxer_offset;




        if (VAR_19)
            VAR_27 = FUNC_0(VAR_27, 0.5);
        for (int VAR_28 = 0; VAR_28 < VAR_16->num_tracks; VAR_28++) {
            double VAR_29 = 0;
            if (!VAR_16->tracks[VAR_28]->is_external)
                VAR_29 += FUNC_9(VAR_16, VAR_16->tracks[VAR_28]);
            VAR_27 = FUNC_0(VAR_27, -VAR_29);
        }
        VAR_24 -= VAR_27 * VAR_26;
        VAR_22 = (VAR_22 | VAR_12) & ~VAR_11;


        if (VAR_26 < 0)
            VAR_22 |= VAR_11;
    }

    if (!VAR_16->demuxer->seekable)
        VAR_22 |= VAR_9;

    if (!FUNC_6(VAR_16->demuxer, VAR_24, VAR_22)) {
        if (!VAR_16->demuxer->seekable) {
            FUNC_1(VAR_16, "Cannot seek in this stream.\n");
            FUNC_1(VAR_16, "You can force it with '--force-seekable=yes'.\n");
        }
        return;
    }

    VAR_16->play_dir = VAR_26;


    bool VAR_30 = 0;
    struct track *VAR_31 = ((void*)0);
    for (int VAR_32 = 0; VAR_32 < VAR_16->num_tracks; VAR_32++) {
        struct track *VAR_33 = VAR_16->tracks[VAR_32];
        if (VAR_33->selected && VAR_33->is_external && VAR_33->demuxer) {
            double VAR_34 = VAR_24;
            if (!VAR_25 || VAR_33->is_external)
                VAR_34 += FUNC_9(VAR_16, VAR_33);
            if (VAR_22 & VAR_10)
                VAR_34 = VAR_21;
            FUNC_6(VAR_33->demuxer, VAR_34, VAR_22 & VAR_13);
            if (VAR_33->type == VAR_14 && !VAR_31)
                VAR_31 = VAR_33;
        }
        if (VAR_33->selected && !VAR_33->is_external && VAR_33->stream &&
            VAR_33->type == VAR_15 && !VAR_33->stream->attached_picture)
            VAR_30 = 1;
    }

    if (!(VAR_17.flags & VAR_3))
        FUNC_4(VAR_16);

    FUNC_15(VAR_16);
    if (VAR_16->recorder)
        FUNC_12(VAR_16->recorder);






    if (VAR_30 && VAR_31 && !VAR_25 && VAR_16->play_dir > 0 &&
        !(VAR_22 & VAR_11))
    {
        FUNC_2(VAR_16, "delayed seek for aid=%d\n", VAR_31->user_tid);
        FUNC_5(VAR_31->demuxer, 1);
        VAR_16->seek_slave = VAR_31;
    }



    VAR_16->last_seek_pts = VAR_21;

    if (VAR_25) {
        VAR_16->hrseek_active = 1;
        VAR_16->hrseek_backstep = VAR_17.type == 130;
        VAR_16->hrseek_pts = VAR_21 * VAR_16->play_dir;


        bool VAR_35 = !VAR_19 && VAR_18->hr_seek_framedrop;

        FUNC_2(VAR_16, "hr-seek, skipping to %f%s%s\n", VAR_16->hrseek_pts,
                   VAR_35 ? "" : " (no framedrop)",
                   VAR_16->hrseek_backstep ? " (backstep)" : "");

        for (int VAR_36 = 0; VAR_36 < VAR_16->num_tracks; VAR_36++) {
            struct track *VAR_37 = VAR_16->tracks[VAR_36];
            struct mp_decoder_wrapper *VAR_38 = VAR_37->dec;
            if (VAR_38 && VAR_35)
                FUNC_10(VAR_38, VAR_16->hrseek_pts);
        }
    }

    if (VAR_16->stop_play == VAR_0)
        VAR_16->stop_play = VAR_1;

    VAR_16->start_timestamp = FUNC_13();
    FUNC_14(VAR_16);

    FUNC_11(VAR_16, VAR_6, ((void*)0));
    FUNC_11(VAR_16, VAR_7, ((void*)0));

    FUNC_16(VAR_16);

    VAR_16->current_seek = VAR_17;
}
