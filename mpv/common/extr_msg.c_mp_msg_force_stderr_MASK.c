
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpv_global {TYPE_1__* log; } ;
struct mp_log_root {int force_stderr; } ;
struct TYPE_2__ {struct mp_log_root* root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mpv_global *VAR_1, bool VAR_2)
{
    struct mp_log_root *VAR_3 = VAR_1->log->root;

    FUNC_0(&VAR_0);
    VAR_3->force_stderr = VAR_2;
    FUNC_1(&VAR_0);
}
