
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(uint16_t VAR_3, keyrecord_t *VAR_4) {
    if (VAR_4->event.pressed) {
        switch(VAR_3) {
            case 136:
                if(VAR_4->event.pressed){
                    FUNC_2("0028 3063 25D5 203F 25D5 0029 3063");
                }
                return 0;
                break;
            case 133:
                if(VAR_4->event.pressed){
                    FUNC_0("t(-_-t)");
                }
                return 0;
                break;
            case 132:
                if(VAR_4->event.pressed){
                     FUNC_2("0298 203F 0298");
                }
                return 0;
                break;
            case 135:
                if (VAR_4->event.pressed) {
                    FUNC_1(VAR_2);
                    FUNC_3(VAR_0);
                    FUNC_4(VAR_2);
                    FUNC_3(VAR_1);
                }
                return 0;
                break;
            case 130:
                if (VAR_4->event.pressed) {
                    FUNC_2("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
                }
                return 0;
                break;
            case 131:
                if(VAR_4->event.pressed){
                    FUNC_2("2665 203F 2665");
                }
                return 0;
                break;
            case 134:
                if(VAR_4->event.pressed){
                    FUNC_2("0CA0 005F 0CA0");
                }
                return 0;
                break;
            case 129:
                if(VAR_4->event.pressed){
                    FUNC_2("0028 256F 00B0 25A1 00B0 0029 256F 0020 FE35 0020 253B 2501 253B");
                }
                return 0;
                break;
            case 128:
                if(VAR_4->event.pressed){
                    FUNC_2("253B 2501 253B FE35 0020 005C 0028 00B0 25A1 00B0 0029 002F 0020 FE35 0020 253B 2501 253B");
                }
                return 0;
                break;
                }
    }
    return 1;
}
