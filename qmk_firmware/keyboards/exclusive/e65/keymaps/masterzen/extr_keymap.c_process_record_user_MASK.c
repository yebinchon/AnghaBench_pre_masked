
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;
struct TYPE_9__ {int mode; } ;
struct TYPE_8__ {int mode; } ;


 int VAR_0 ;


 int VAR_1 ;

 TYPE_4__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_3 ;

bool FUNC_3(uint16_t VAR_4, keyrecord_t *VAR_5) {
    switch (VAR_4) {

        case 130:
            if (VAR_5->event.pressed) {
                FUNC_2(VAR_0);
            }
            return 0;
            break;
        case 129:
            if (VAR_5->event.pressed) {
                FUNC_2(VAR_1);
            }
            return 0;
            break;
        case 128:


            if (VAR_5->event.pressed) {
                FUNC_0(VAR_3.mode);
                FUNC_1();
                VAR_3.mode = VAR_2.mode;
            }
            return 0;
            break;
    }
    return 1;
}
