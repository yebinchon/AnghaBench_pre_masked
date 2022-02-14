
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {scalar_t__ pressed; } ;
struct TYPE_5__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(keyrecord_t *VAR_2, uint16_t VAR_3, char* VAR_4) {
    if (VAR_2->event.pressed) {
        VAR_1 = FUNC_3();
        FUNC_0(VAR_3);
    } else {
        if (FUNC_2(VAR_1) < VAR_0) {
            FUNC_1(VAR_4);
        }
        FUNC_4(VAR_3);
    }
}
