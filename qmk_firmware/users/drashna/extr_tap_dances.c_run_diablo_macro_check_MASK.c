
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {int key_interval; int keycode; int timer; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

void FUNC_4(void) {
    for (uint8_t VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {

        if (VAR_2[VAR_3].key_interval && FUNC_2(VAR_2[VAR_3].timer) > (VAR_2[VAR_3].key_interval * 1000)) {

            VAR_2[VAR_3].timer = FUNC_3();

            if (FUNC_0(VAR_1)) {
                FUNC_1(VAR_2[VAR_3].keycode);
            }
        }
    }
}
