
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* dirs; } ;
typedef TYPE_1__ lfs1_t ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_2__ lfs1_dir_t ;



int FUNC_0(lfs1_t *VAR_0, lfs1_dir_t *VAR_1) {

    for (lfs1_dir_t **VAR_2 = &VAR_0->dirs; *VAR_2; VAR_2 = &(*VAR_2)->next) {
        if (*VAR_2 == VAR_1) {
            *VAR_2 = VAR_1->next;
            break;
        }
    }

    return 0;
}
