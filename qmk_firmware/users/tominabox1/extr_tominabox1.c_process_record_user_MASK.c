
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int row; int col; } ;
struct TYPE_6__ {scalar_t__ pressed; TYPE_1__ key; } ;
struct TYPE_7__ {TYPE_2__ event; } ;
typedef TYPE_3__ keyrecord_t ;




 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ,int ,scalar_t__) ;

bool FUNC_4(uint16_t VAR_1, keyrecord_t *VAR_2) {




    if (VAR_2->event.pressed) {




    switch (VAR_1) {
            case 129:
                if (VAR_2->event.pressed) {
                    FUNC_0(":b:");
                } else {}
                break;
            case 128:
                if (VAR_2->event.pressed) {
                    FUNC_0("BEPIS");
                } else {}
                break;
        }
    }
    return 1;

}
