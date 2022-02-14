
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {scalar_t__ dec; struct dec_sub* d_sub; } ;
struct m_config_option {int dummy; } ;
struct dec_sub {int dummy; } ;
struct command_ctx {void* cur_ipc_input; void* cur_ipc; } ;
struct MPOpts {void* input_file; void* ipc_path; } ;
struct MPContext {scalar_t__ video_out; int global; int clients; int ipc_ctx; struct MPOpts* opts; int input; struct track*** current_track; int osd; struct command_ctx* command_ctx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct MPContext*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct MPContext*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct MPContext*,int) ;
 int FUNC_10 (struct MPContext*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct MPContext*) ;
 int FUNC_13 (struct dec_sub*) ;
 int FUNC_14 (void*) ;
 void* FUNC_15 (struct command_ctx*,void*) ;
 int FUNC_16 (struct MPContext*) ;
 int FUNC_17 (struct MPContext*) ;
 int FUNC_18 (struct MPContext*) ;
 int FUNC_19 (scalar_t__,int ,int *) ;

void FUNC_20(void *VAR_15, struct m_config_option *VAR_16, int VAR_17)
{
    struct MPContext *VAR_18 = VAR_15;
    struct command_ctx *VAR_19 = VAR_18->command_ctx;

    if (VAR_17 & VAR_11)
        FUNC_9(VAR_18, 0);

    if (VAR_17 & VAR_8) {
        for (int VAR_20 = 0; VAR_20 < VAR_0; VAR_20++) {
            struct track *VAR_21 = VAR_18->current_track[VAR_20][VAR_1];
            struct dec_sub *VAR_22 = VAR_21 ? VAR_21->d_sub : ((void*)0);
            if (VAR_22)
                FUNC_13(VAR_21->d_sub);
        }
        FUNC_11(VAR_18->osd);
        FUNC_10(VAR_18);
    }

    if (VAR_17 & VAR_4)
        FUNC_7(VAR_18);

    if (VAR_17 & VAR_5) {
        struct track *VAR_23 = VAR_18->current_track[0][VAR_2];
        if (VAR_23 && VAR_23->dec) {
            FUNC_3(VAR_23->dec);
            FUNC_4(VAR_18);
        }
    }

    if (VAR_17 & VAR_6) {
        FUNC_6(VAR_18->input);


        struct MPOpts *VAR_24 = VAR_18->opts;
        if (!FUNC_2(FUNC_1(VAR_19->cur_ipc), FUNC_1(VAR_24->ipc_path)) ||
            !FUNC_2(FUNC_1(VAR_19->cur_ipc_input), FUNC_1(VAR_24->input_file)))
        {
            FUNC_14(VAR_19->cur_ipc);
            FUNC_14(VAR_19->cur_ipc_input);
            VAR_19->cur_ipc = FUNC_15(VAR_19, VAR_24->ipc_path);
            VAR_19->cur_ipc_input = FUNC_15(VAR_19, VAR_24->input_file);
            FUNC_8(VAR_18->ipc_ctx);
            VAR_18->ipc_ctx = FUNC_5(VAR_18->clients, VAR_18->global);
        }
    }

    if (VAR_17 & VAR_3)
        FUNC_12(VAR_18);

    if (VAR_17 & VAR_9)
        FUNC_17(VAR_18);

    if (VAR_17 & VAR_10)
        FUNC_18(VAR_18);

    if (VAR_17 & VAR_12)
        FUNC_0(VAR_18);

    if (VAR_17 & VAR_7)
        FUNC_16(VAR_18);

    if (VAR_17 & VAR_13) {
        if (VAR_18->video_out)
            FUNC_19(VAR_18->video_out, VAR_14, ((void*)0));
    }
}
