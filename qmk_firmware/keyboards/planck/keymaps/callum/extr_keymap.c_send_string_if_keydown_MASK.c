
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 int FUNC_0 (char const*) ;

bool FUNC_1(keyrecord_t *VAR_0, const char *VAR_1) {
    if (VAR_0->event.pressed) {
        FUNC_0(VAR_1);
    }
    return 1;
}
