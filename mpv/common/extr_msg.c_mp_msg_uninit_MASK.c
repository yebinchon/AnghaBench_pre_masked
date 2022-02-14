
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpv_global {TYPE_1__* log; } ;
struct mp_log_root {int msg_levels; struct mp_log_root* log_path; scalar_t__ log_file; struct mp_log_root* stats_path; scalar_t__ stats_file; } ;
struct TYPE_4__ {int (* free ) (int *) ;} ;
struct TYPE_3__ {struct mp_log_root* root; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mp_log_root*) ;

void FUNC_3(struct mpv_global *VAR_1)
{
    struct mp_log_root *VAR_2 = VAR_1->log->root;
    if (VAR_2->stats_file)
        FUNC_0(VAR_2->stats_file);
    FUNC_2(VAR_2->stats_path);
    if (VAR_2->log_file)
        FUNC_0(VAR_2->log_file);
    FUNC_2(VAR_2->log_path);
    VAR_0.free(&VAR_2->msg_levels);
    FUNC_2(VAR_2);
    VAR_1->log = ((void*)0);
}
