
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t used; TYPE_1__* action; } ;
typedef TYPE_2__ posix_spawn_file_actions_t ;
struct TYPE_4__ {int filedes; int newfiledes; } ;


 size_t VAR_0 ;

int FUNC_0(posix_spawn_file_actions_t *VAR_1, int VAR_2, int VAR_3)
{
    if (VAR_1->used >= VAR_0)
        return -1;
    VAR_1->action[VAR_1->used].filedes = VAR_2;
    VAR_1->action[VAR_1->used].newfiledes = VAR_3;
    VAR_1->used++;
    return 0;
}
