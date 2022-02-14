
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ video_status; int filter_root; scalar_t__ stop_play; int playback_pts; scalar_t__ lavfi; int encode_lavc_ctx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (struct MPContext*) ;
 int FUNC_7 (struct MPContext*) ;
 int FUNC_8 (struct MPContext*) ;
 int FUNC_9 (struct MPContext*,int) ;
 int FUNC_10 (struct MPContext*) ;
 int FUNC_11 (struct MPContext*) ;
 int FUNC_12 (struct MPContext*) ;
 int FUNC_13 (struct MPContext*) ;
 int FUNC_14 (struct MPContext*) ;
 int FUNC_15 (struct MPContext*) ;
 int FUNC_16 (struct MPContext*) ;
 int FUNC_17 (struct MPContext*) ;
 scalar_t__ FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (struct MPContext*) ;
 int FUNC_21 (struct MPContext*) ;
 int FUNC_22 (struct MPContext*) ;
 int FUNC_23 (struct MPContext*) ;
 int FUNC_24 (struct MPContext*) ;
 int FUNC_25 (struct MPContext*) ;
 int FUNC_26 (struct MPContext*,int ) ;
 int FUNC_27 (struct MPContext*) ;

void FUNC_28(struct MPContext *VAR_3)
{
    if (FUNC_0(VAR_3->encode_lavc_ctx)) {
        VAR_3->stop_play = VAR_1;
        return;
    }

    FUNC_24(VAR_3);

    FUNC_5(VAR_3);
    FUNC_17(VAR_3);
    FUNC_4(VAR_3);

    if (VAR_3->lavfi && FUNC_18(VAR_3->lavfi))
        VAR_3->stop_play = VAR_0;

    FUNC_2(VAR_3);
    FUNC_27(VAR_3);

    FUNC_6(VAR_3);

    FUNC_13(VAR_3);

    FUNC_14(VAR_3);

    FUNC_7(VAR_3);

    FUNC_25(VAR_3);
    if (VAR_3->video_status == VAR_2)
        FUNC_26(VAR_3, VAR_3->playback_pts);

    FUNC_8(VAR_3);

    FUNC_11(VAR_3);

    FUNC_10(VAR_3);

    FUNC_15(VAR_3);

    FUNC_23(VAR_3);

    if (VAR_3->stop_play)
        return;

    FUNC_12(VAR_3);

    if (FUNC_19(VAR_3->filter_root))
        FUNC_22(VAR_3);
    FUNC_21(VAR_3);

    FUNC_16(VAR_3);

    FUNC_20(VAR_3);

    FUNC_3(VAR_3);

    FUNC_9(VAR_3, 0);

    FUNC_1(VAR_3);
}
