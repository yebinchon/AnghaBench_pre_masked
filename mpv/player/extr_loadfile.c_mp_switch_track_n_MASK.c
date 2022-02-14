
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct track {int type; int user_tid; int selected; scalar_t__ remux_sink; scalar_t__ sink; } ;
struct MPContext {int track_layout_hash; struct track*** current_track; TYPE_3__* ao_chain; TYPE_2__* vo_chain; int demuxer; TYPE_1__* opts; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
struct TYPE_6__ {int track; } ;
struct TYPE_5__ {int track; } ;
struct TYPE_4__ {int** stream_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPContext*,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*,int) ;
 int FUNC_5 (struct MPContext*,int ,int *) ;
 int FUNC_6 (struct MPContext*) ;
 int FUNC_7 (struct MPContext*) ;
 int FUNC_8 (struct MPContext*,struct track*) ;
 int FUNC_9 (struct MPContext*) ;
 int FUNC_10 (struct MPContext*,struct track*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct MPContext*,int ) ;
 int FUNC_13 (struct MPContext*) ;
 int FUNC_14 (struct MPContext*) ;
 int FUNC_15 (struct MPContext*) ;
 int FUNC_16 (struct MPContext*,struct track*) ;
 int FUNC_17 (struct MPContext*) ;

void FUNC_18(struct MPContext *VAR_6, int VAR_7, enum stream_type VAR_8,
                       struct track *VAR_9, int VAR_10)
{
    FUNC_1(!VAR_9 || VAR_9->type == VAR_8);
    FUNC_1(VAR_7 >= 0 && VAR_7 < VAR_2);



    if (VAR_10 & VAR_0)
        VAR_6->opts->stream_id[VAR_7][VAR_8] = VAR_9 ? VAR_9->user_tid : -2;


    if (!VAR_6->demuxer)
        return;

    struct track *VAR_11 = VAR_6->current_track[VAR_7][VAR_8];
    if (VAR_9 == VAR_11)
        return;

    if (VAR_11 && VAR_11->sink) {
        FUNC_0(VAR_6, "Can't disable input to complex filter.\n");
        return;
    }
    if ((VAR_8 == VAR_5 && VAR_6->vo_chain && !VAR_6->vo_chain->track) ||
        (VAR_8 == VAR_3 && VAR_6->ao_chain && !VAR_6->ao_chain->track))
    {
        FUNC_0(VAR_6, "Can't switch away from complex filter output.\n");
        return;
    }

    if (VAR_9 && VAR_9->selected) {

        FUNC_0(VAR_6, "Track %d is already selected.\n", VAR_9->user_tid);
        return;
    }

    if (VAR_7 == 0) {
        if (VAR_8 == VAR_5) {
            FUNC_17(VAR_6);
            if (!VAR_9)
                FUNC_4(VAR_6, 1);
        } else if (VAR_8 == VAR_3) {
            FUNC_2(VAR_6);
            FUNC_14(VAR_6);
            FUNC_15(VAR_6);
        }
    }
    if (VAR_8 == VAR_4)
        FUNC_16(VAR_6, VAR_11);

    if (VAR_11) {
        if (VAR_11->remux_sink)
            FUNC_3(VAR_6);
        VAR_11->selected = 0;
        FUNC_10(VAR_6, VAR_11);
    }

    VAR_6->current_track[VAR_7][VAR_8] = VAR_9;

    if (VAR_9) {
        VAR_9->selected = 1;
        FUNC_10(VAR_6, VAR_9);
    }

    if (VAR_8 == VAR_5 && VAR_7 == 0) {
        FUNC_9(VAR_6);
    } else if (VAR_8 == VAR_3 && VAR_7 == 0) {
        FUNC_7(VAR_6);
    } else if (VAR_8 == VAR_4 && VAR_7 >= 0 && VAR_7 <= 2) {
        FUNC_8(VAR_6, VAR_9);
    }

    FUNC_5(VAR_6, VAR_1, ((void*)0));
    FUNC_6(VAR_6);

    FUNC_11(VAR_6->track_layout_hash);
    VAR_6->track_layout_hash = FUNC_12(VAR_6, FUNC_13(VAR_6));
}
