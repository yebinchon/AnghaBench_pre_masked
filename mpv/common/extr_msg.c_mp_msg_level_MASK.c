
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log_root {int reload_counter; } ;
struct mp_log {int level; int reload_counter; struct mp_log_root* root; } ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mp_log*) ;

int FUNC_2(struct mp_log *VAR_1)
{
    struct mp_log_root *VAR_2 = VAR_1->root;
    if (!VAR_2)
        return -1;
    if (FUNC_0(&VAR_1->reload_counter, VAR_0) !=
        FUNC_0(&VAR_2->reload_counter, VAR_0))
    {
        FUNC_1(VAR_1);
    }
    return VAR_1->level;
}
