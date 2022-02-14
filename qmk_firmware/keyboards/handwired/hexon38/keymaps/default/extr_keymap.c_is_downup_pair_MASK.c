
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* up; TYPE_2__* down; } ;
typedef TYPE_1__ pending_pair_t ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_2__ pending_key_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_2__*) ;

bool FUNC_3(pending_key_t *VAR_0, pending_pair_t *VAR_1) {

    if (!FUNC_0(VAR_0)) {
        return 0;
    }

    pending_key_t *VAR_2 = VAR_0->next;
    while (VAR_2 != ((void*)0)) {
        if (FUNC_2(VAR_0, VAR_2) && FUNC_1(VAR_2)) {

            if (VAR_1 != ((void*)0)) {
                VAR_1->down = VAR_0;
                VAR_1->up = VAR_2;
            }
            return 1;
        }
        VAR_2 = VAR_2->next;
    }

    return 0;
}
