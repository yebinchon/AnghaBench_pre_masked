
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* up; TYPE_2__* down; } ;
typedef TYPE_1__ pending_pair_t ;
struct TYPE_5__ {int keycode; } ;
typedef TYPE_2__ pending_key_t ;



void FUNC_0(pending_pair_t *VAR_0) {
    pending_key_t *VAR_1;
    VAR_1 = VAR_0->down;
    if (VAR_1 != ((void*)0)) {
        VAR_1->keycode = VAR_1->keycode & 0xFF;
    }
    VAR_1 = VAR_0->up;
    if (VAR_1 != ((void*)0)) {
        VAR_1->keycode = VAR_1->keycode & 0xFF;
    }
}
