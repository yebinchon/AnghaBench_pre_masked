
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





 int FUNC_0 (int ) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,TYPE_2__*) ;
 int FUNC_6 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ,int ) ;

bool FUNC_8(uint16_t VAR_13, keyrecord_t *VAR_14) {

    if (!FUNC_5(VAR_13, VAR_14)) {
        switch(VAR_13) {
          case 136:
          case 135:



              break;
          case 134:



              break;
        }
        return 0;
    }
    switch (VAR_13) {
        case 130:
            if (VAR_14->event.pressed) {
                FUNC_4(VAR_6);
                FUNC_6(VAR_6, VAR_1);
                FUNC_2(VAR_0);



            }
            return 0;
            break;
        case 129:
            if (VAR_14->event.pressed) {
                if (FUNC_0(VAR_5)) {



                    FUNC_3(VAR_5);
                }
            }
            return 0;
            break;
        case 131:
            if (VAR_14->event.pressed) {
                if (!FUNC_0(VAR_5)) {



                    FUNC_4(VAR_5);
                }
            }
            return 0;
            break;
        case 128:
            if (VAR_14->event.pressed) {
                FUNC_4(VAR_7);
                FUNC_7(VAR_7, VAR_3, VAR_2);
            } else {
                FUNC_3(VAR_7);
                FUNC_7(VAR_7, VAR_3, VAR_2);
            }
            return 0;
            break;
        case 133:
            if (VAR_14->event.pressed) {
                FUNC_4(VAR_3);
                FUNC_7(VAR_7, VAR_3, VAR_2);
            } else {
                FUNC_3(VAR_3);
                FUNC_7(VAR_7, VAR_3, VAR_2);
            }
            return 0;
            break;
        case 132:
            if (VAR_14->event.pressed) {
                FUNC_4(VAR_4);
            } else {
                FUNC_3(VAR_4);
            }
            return 0;
            break;
    }
    return 1;
}
