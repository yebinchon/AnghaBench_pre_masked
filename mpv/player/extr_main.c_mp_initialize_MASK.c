
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct MPOpts {int operation_mode; int force_vo; TYPE_1__* encode_opts; int player_idle_mode; scalar_t__* test_mode; int verbose; } ;
struct MPContext {int initialized; int input; TYPE_2__* mconfig; int encode_lavc_ctx; int global; int clients; int log; TYPE_5__* playlist; struct MPOpts* opts; } ;
typedef int mpv_handle ;
struct TYPE_8__ {int first; } ;
struct TYPE_7__ {struct MPContext* option_change_callback_ctx; int (* option_change_callback ) (struct MPContext*,int *,int ) ;struct MPContext* option_set_callback_cb; int option_set_callback; } ;
struct TYPE_6__ {scalar_t__* file; } ;


 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (struct MPContext*,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (struct MPContext*,char*) ;
 int FUNC_3 (struct MPContext*,char*,...) ;
 int FUNC_4 (struct MPContext*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct MPContext*,int) ;
 scalar_t__ FUNC_9 (struct MPContext*) ;
 int FUNC_10 (TYPE_2__*,TYPE_5__*,int ,char**) ;
 int FUNC_11 (TYPE_2__*,int ,int *,char**) ;
 int FUNC_12 (TYPE_2__*,char*,int ) ;
 int FUNC_13 (struct MPContext*) ;
 int VAR_5 ;
 int FUNC_14 (int ,struct MPOpts*) ;
 int FUNC_15 (int ,char*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct MPContext*) ;
 int * FUNC_18 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_19 (struct MPContext*,int *,int ) ;
 int FUNC_20 (struct MPContext*) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (struct MPContext*,int) ;
 int FUNC_23 (int ,int ) ;
 scalar_t__ FUNC_24 (struct MPContext*) ;

int FUNC_25(struct MPContext *VAR_8, char **VAR_9)
{
    struct MPOpts *VAR_10 = VAR_8->opts;

    FUNC_5(!VAR_8->initialized);


    if (VAR_9) {
        FUNC_11(VAR_8->mconfig, VAR_8->global,
                                       &VAR_10->verbose, VAR_9);
    }

    FUNC_14(VAR_8->global, VAR_10);
    FUNC_22(VAR_8, 1);

    if (VAR_9) {
        FUNC_3(VAR_8, "Command line options:");
        for (int VAR_11 = 0; VAR_9[VAR_11]; VAR_11++)
            FUNC_3(VAR_8, " '%s'", VAR_9[VAR_11]);
        FUNC_3(VAR_8, "\n");
    }

    FUNC_21(VAR_8->log, 0);

    FUNC_20(VAR_8);

    if (VAR_9) {
        int VAR_12 = FUNC_10(VAR_8->mconfig, VAR_8->playlist,
                                               VAR_8->global, VAR_9);
        if (VAR_12 < 0)
            return VAR_12 == VAR_2 ? 1 : -1;
    }

    if (VAR_10->operation_mode == 1) {
        FUNC_12(VAR_8->mconfig, "builtin-pseudo-gui",
                             VAR_3);
        FUNC_12(VAR_8->mconfig, "pseudo-gui", 0);
    }

    FUNC_13(VAR_8);

    FUNC_16(VAR_8->input);


    VAR_8->initialized = 1;
    VAR_8->mconfig->option_set_callback = VAR_7;
    VAR_8->mconfig->option_set_callback_cb = VAR_8;
    VAR_8->mconfig->option_change_callback = FUNC_19;
    VAR_8->mconfig->option_change_callback_ctx = VAR_8;

    FUNC_19(VAR_8, ((void*)0), VAR_4);

    if (FUNC_9(VAR_8))
        return 1;

    if (!FUNC_23(VAR_6, 0)) {
        FUNC_23(VAR_8->log, VAR_1);
        FUNC_0(VAR_8, "\nmpv was compiled against an incompatible version of "
                 "FFmpeg/Libav than the shared\nlibrary it is linked against. "
                 "This is most likely a broken build and could\nresult in "
                 "misbehavior and crashes.\n\nThis is a broken build.\n");
        return -1;
    }






    if (!VAR_8->playlist->first && !VAR_10->player_idle_mode) {

        FUNC_21(VAR_8->log, 1);
        FUNC_1(VAR_8, "%s", VAR_5);
        return 1;
    }

    FUNC_2(VAR_8, "start init");






    if (VAR_10->encode_opts->file && VAR_10->encode_opts->file[0]) {
        VAR_8->encode_lavc_ctx = FUNC_7(VAR_8->global);
        if(!VAR_8->encode_lavc_ctx) {
            FUNC_1(VAR_8, "Encoding initialization failed.\n");
            return -1;
        }
        FUNC_12(VAR_8->mconfig, "encoding", 0);
        FUNC_15(VAR_8->input, "encode", VAR_0);
    }


    FUNC_4(VAR_8, "Compiled without libass.\n");
    FUNC_4(VAR_8, "There will be no OSD and no text subtitles.\n");


    FUNC_17(VAR_8);

    if (VAR_10->force_vo == 2 && FUNC_8(VAR_8, 0) < 0)
        return -1;

    FUNC_2(VAR_8, "end init");

    return 0;
}
