
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int buf ;
struct TYPE_9__ {int DATA; } ;
struct TYPE_10__ {TYPE_3__ bit; } ;
struct TYPE_7__ {scalar_t__ RXC; } ;
struct TYPE_8__ {TYPE_1__ bit; } ;
struct TYPE_11__ {TYPE_4__ DATA; TYPE_2__ INTFLAG; } ;
struct TYPE_12__ {TYPE_5__ USART; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int*,int) ;

int FUNC_4(void) {
    for (;;) {
        if (VAR_0->USART.INTFLAG.bit.RXC) {
            return VAR_0->USART.DATA.bit.DATA;
        }
        if (FUNC_2() && FUNC_1()) {
            uint8_t VAR_1[1];
            uint32_t VAR_2 = FUNC_3(VAR_1, sizeof(VAR_1));
            if (VAR_2) {
                return VAR_1[0];
            }
        }
        FUNC_0();
    }
}
