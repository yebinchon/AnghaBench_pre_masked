
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct MPContext {scalar_t__ stop_play; int * encode_lavc_ctx; TYPE_1__* opts; TYPE_2__* playlist; } ;
struct TYPE_4__ {int current_was_replaced; struct playlist_entry* current; } ;
struct TYPE_3__ {int player_idle_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPContext*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (struct MPContext*) ;
 int FUNC_6 (struct MPContext*) ;
 struct playlist_entry* FUNC_7 (struct MPContext*,int,int,int) ;
 int FUNC_8 (struct MPContext*) ;
 int FUNC_9 (struct MPContext*) ;
 int FUNC_10 (struct MPContext*,TYPE_2__*) ;
 int FUNC_11 (struct MPContext*) ;
 int FUNC_12 (struct MPContext*) ;

void FUNC_13(struct MPContext *VAR_5)
{

    if (!FUNC_5(VAR_5)) {
        FUNC_0(VAR_5, "Waiting for scripts...\n");
        while (!FUNC_5(VAR_5))
            FUNC_6(VAR_5);
        FUNC_8(VAR_5);
        FUNC_0(VAR_5, "Done loading scripts.\n");
    }

    FUNC_10(VAR_5, VAR_5->playlist);

    for (;;) {
        FUNC_1(VAR_5->stop_play);
        FUNC_4(VAR_5);
        if (VAR_5->stop_play == VAR_3)
            break;

        FUNC_9(VAR_5);
        if (VAR_5->stop_play == VAR_3)
            break;

        struct playlist_entry *VAR_6 = VAR_5->playlist->current;
        if (VAR_5->stop_play == VAR_2 || VAR_5->stop_play == VAR_1 ||
            VAR_5->stop_play == VAR_0 || VAR_5->stop_play == VAR_4)
        {
            VAR_6 = FUNC_7(VAR_5, +1, 0, 1);
        }

        VAR_5->playlist->current = VAR_6;
        VAR_5->playlist->current_was_replaced = 0;
        VAR_5->stop_play = VAR_4;

        if (!VAR_5->playlist->current && VAR_5->opts->player_idle_mode < 2)
            break;
    }

    FUNC_2(VAR_5);

    if (VAR_5->encode_lavc_ctx) {

        FUNC_11(VAR_5);
        FUNC_12(VAR_5);

        if (!FUNC_3(VAR_5->encode_lavc_ctx))
            VAR_5->stop_play = VAR_1;

        VAR_5->encode_lavc_ctx = ((void*)0);
    }
}
