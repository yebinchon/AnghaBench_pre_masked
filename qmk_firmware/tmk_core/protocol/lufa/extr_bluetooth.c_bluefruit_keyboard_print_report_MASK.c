
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reserved; int mods; int * keys; } ;
typedef TYPE_1__ report_keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

void FUNC_2(report_keyboard_t *VAR_2) {
    if (!VAR_1) return;
    FUNC_1("keys: ");
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        FUNC_0(VAR_2->keys[VAR_3]);
        FUNC_1(" ");
    }
    FUNC_1(" mods: ");
    FUNC_0(VAR_2->mods);
    FUNC_1(" reserved: ");
    FUNC_0(VAR_2->reserved);
    FUNC_1("\n");
}
