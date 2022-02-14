
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpv_global {TYPE_1__* log; } ;
struct mp_log_root {int color; int stats_file; int stats_path; int log_file; int log_path; int reload_counter; int msg_levels; scalar_t__ use_terminal; int show_time; int module; int really_quiet; int verbose; } ;
struct MPOpts {int dump_stats; int log_file; int msg_levels; scalar_t__ msg_color; int msg_time; scalar_t__ use_terminal; int msg_module; int msg_really_quiet; int verbose; } ;
struct TYPE_4__ {int (* copy ) (int *,int *,int *) ;int (* free ) (int *) ;} ;
struct TYPE_3__ {struct mp_log_root* root; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *,char*,struct mpv_global*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *) ;

void FUNC_7(struct mpv_global *VAR_3, struct MPOpts *VAR_4)
{
    struct mp_log_root *VAR_5 = VAR_3->log->root;

    FUNC_2(&VAR_2);

    VAR_5->verbose = VAR_4->verbose;
    VAR_5->really_quiet = VAR_4->msg_really_quiet;
    VAR_5->module = VAR_4->msg_module;
    VAR_5->use_terminal = VAR_4->use_terminal;
    VAR_5->show_time = VAR_4->msg_time;
    if (VAR_5->use_terminal)
        VAR_5->color = VAR_4->msg_color && FUNC_1(VAR_0);

    VAR_1.free(&VAR_5->msg_levels);
    VAR_1.copy(((void*)0), &VAR_5->msg_levels, &VAR_4->msg_levels);

    FUNC_0(&VAR_5->reload_counter, 1);
    FUNC_3(&VAR_2);

    FUNC_4(VAR_4->log_file, &VAR_5->log_path, &VAR_5->log_file,
                "log", VAR_3);

    FUNC_4(VAR_4->dump_stats, &VAR_5->stats_path, &VAR_5->stats_file,
                "stats", VAR_3);
}
