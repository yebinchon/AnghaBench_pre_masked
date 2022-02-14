
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
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
 int VAR_9 ;
 int VAR_10 ;



 int FUNC_0 (int ) ;



 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;

void FUNC_10(keyrecord_t *VAR_11, uint8_t VAR_12, uint8_t VAR_13) {

    switch (VAR_12) {
        case 132:
            FUNC_7(VAR_11, VAR_6, VAR_8, VAR_2);
            break;
        case 129:
            FUNC_7(VAR_11, VAR_9, VAR_8, VAR_3);
            break;
        case 133:
            FUNC_7(VAR_11, VAR_5, VAR_8, VAR_1);
            break;
        case 130:
            FUNC_7(VAR_11, VAR_8, VAR_8, VAR_0);
            break;
        case 131:
            FUNC_7(VAR_11, VAR_7, VAR_7, VAR_2);
            break;
        case 128:
            FUNC_7(VAR_11, VAR_10, VAR_7, VAR_3);
            break;
        case 134:
            if (VAR_11->event.pressed) {
                FUNC_1();
                FUNC_5(FUNC_0(VAR_6));
                FUNC_6();
                FUNC_9(5);
                FUNC_3(VAR_4);
                FUNC_4();
                FUNC_9(10);
                FUNC_2(VAR_4);
                FUNC_4();
                FUNC_9(5);
                FUNC_8(FUNC_0(VAR_6));
                FUNC_6();
            }
            break;
    }
}
