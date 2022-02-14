
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int pressed; } ;
struct TYPE_6__ {TYPE_1__ event; } ;
typedef TYPE_2__ keyrecord_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

bool FUNC_4(uint16_t VAR_9, keyrecord_t *VAR_10) {
    switch (VAR_9) {
        case 131:
            if (VAR_10->event.pressed) {
                FUNC_1(VAR_7);

                FUNC_2(VAR_7);
            }
            return 0;

        case 134:
            if (VAR_10->event.pressed) {
                FUNC_1(VAR_6);

                FUNC_2(VAR_6);
            }
            return 0;

        case 130:
            if (VAR_10->event.pressed) {
                FUNC_1(VAR_8);

                FUNC_2(VAR_8);
            }
            return 0;

        case 128:
            if (VAR_10->event.pressed) {
                FUNC_3();
            }
            return 0;




        case 133:
            FUNC_0(VAR_10, VAR_2, VAR_3, VAR_4);
            return 0;


        case 132:
            FUNC_0(VAR_10, VAR_3, VAR_3, VAR_1);
            return 0;


        case 129:
            FUNC_0(VAR_10, VAR_5, VAR_5, VAR_0);
            return 0;

        default:
            return 1;
    }
    return 1;
}
