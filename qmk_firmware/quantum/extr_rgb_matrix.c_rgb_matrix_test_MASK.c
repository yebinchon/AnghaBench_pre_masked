
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int tick; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int,int) ;

void FUNC_1(void) {


    uint8_t VAR_1 = 10;
    switch ((VAR_0.tick & (0b11 << VAR_1)) >> VAR_1) {
        case 0: {
            FUNC_0(20, 0, 0);
            break;
        }
        case 1: {
            FUNC_0(0, 20, 0);
            break;
        }
        case 2: {
            FUNC_0(0, 0, 20);
            break;
        }
        case 3: {
            FUNC_0(20, 20, 20);
            break;
        }
    }
}
