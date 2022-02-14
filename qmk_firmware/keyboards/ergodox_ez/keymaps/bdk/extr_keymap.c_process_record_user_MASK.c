
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {scalar_t__ pressed; } ;
struct TYPE_7__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;



 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,TYPE_2__*,int ,int ) ;
 int FUNC_2 (int,TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;

bool FUNC_5(uint16_t VAR_4, keyrecord_t *VAR_5) {
    if(VAR_5->event.pressed) {
        VAR_3++;





        uint8_t VAR_6 = VAR_4 & 0xFF;
        if(FUNC_3(VAR_6)) {
            FUNC_4(VAR_6);
        }
    }

    switch(VAR_4) {
        case 131:
            return FUNC_1(VAR_4, VAR_5, VAR_2, 0);

        case 128:
            return FUNC_2(VAR_4, VAR_5, FUNC_0(VAR_1), 1);

        case 130:
        case 129:
            return FUNC_2(VAR_0, VAR_5, FUNC_0(VAR_4), 2);
    }
    return 1;
}
