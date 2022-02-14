
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {scalar_t__ loop_file; } ;
struct MPContext {scalar_t__ stop_play; int play_dir; scalar_t__ ab_loop_clip; struct MPOpts* opts; } ;
typedef enum seek_precision { ____Placeholder_seek_precision } seek_precision ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct MPContext*,double*) ;
 double FUNC_1 (struct MPContext*,int ) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (struct MPContext*,int ,double,int,int ) ;
 int FUNC_4 (struct MPContext*,int ) ;

__attribute__((used)) static void FUNC_5(struct MPContext *VAR_8)
{
    struct MPOpts *VAR_9 = VAR_8->opts;

    if (VAR_8->stop_play != VAR_0)
        return;

    double VAR_10 = VAR_6;
    enum seek_precision VAR_11 = VAR_3;

    double VAR_12[2];
    if (FUNC_0(VAR_8, VAR_12) && VAR_8->ab_loop_clip) {
        VAR_10 = VAR_12[0];
        VAR_11 = VAR_4;
    } else if (VAR_9->loop_file) {
        if (VAR_9->loop_file > 0)
            VAR_9->loop_file--;
        VAR_10 = FUNC_1(VAR_8, VAR_8->play_dir);
    }

    if (VAR_10 != VAR_6) {
        VAR_8->stop_play = VAR_1;
        FUNC_4(VAR_8, VAR_7);
        FUNC_2(VAR_8);



        FUNC_3(VAR_8, VAR_2, VAR_10, VAR_11, VAR_5);
    }
}
