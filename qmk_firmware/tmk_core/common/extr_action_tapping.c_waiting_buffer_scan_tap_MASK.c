
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int pressed; int key; } ;
struct TYPE_9__ {int count; } ;
struct TYPE_10__ {int pressed; } ;
struct TYPE_12__ {TYPE_2__ tap; TYPE_3__ event; } ;
struct TYPE_8__ {int count; } ;
struct TYPE_11__ {TYPE_1__ tap; TYPE_7__ event; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_7__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_5__ VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(void) {

    if (VAR_1.tap.count > 0) return;

    if (!VAR_1.event.pressed) return;

    for (uint8_t VAR_5 = VAR_4; VAR_5 != VAR_3; VAR_5 = (VAR_5 + 1) % VAR_0) {
        if (FUNC_0(VAR_2[VAR_5].event.key) && !VAR_2[VAR_5].event.pressed && FUNC_1(VAR_2[VAR_5].event)) {
            VAR_1.tap.count = 1;
            VAR_2[VAR_5].tap.count = 1;
            FUNC_5(&VAR_1);

            FUNC_2("waiting_buffer_scan_tap: found at [");
            FUNC_3(VAR_5);
            FUNC_2("]\n");
            FUNC_4();
            return;
        }
    }
}
