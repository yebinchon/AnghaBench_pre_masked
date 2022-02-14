
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


typedef scalar_t__ uint32_t ;
typedef size_t mp_uint_t ;
struct TYPE_7__ {int DATA; } ;
struct TYPE_8__ {TYPE_1__ bit; } ;
struct TYPE_9__ {int DRE; } ;
struct TYPE_11__ {TYPE_3__ bit; } ;
struct TYPE_10__ {TYPE_2__ DATA; TYPE_5__ INTFLAG; } ;
struct TYPE_12__ {TYPE_4__ USART; } ;


 TYPE_6__* VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char const*,scalar_t__) ;
 int FUNC_3 () ;

void FUNC_4(const char *VAR_1, mp_uint_t VAR_2) {
    if (FUNC_1()) {
        for (size_t VAR_3 = 0; VAR_3 < VAR_2;) {
            uint32_t VAR_4 = VAR_2 - VAR_3;
            uint32_t VAR_5 = FUNC_2(VAR_1 + VAR_3, VAR_4);
            if (VAR_5 < VAR_4) {
                while (!FUNC_3()) {
                    FUNC_0();
                }
            }
            VAR_3 += VAR_5;
        }
        while (!FUNC_3()) {
            FUNC_0();
        }
    }
    while (VAR_2--) {
        while (!(VAR_0->USART.INTFLAG.bit.DRE)) { }
        VAR_0->USART.DATA.bit.DATA = *VAR_1++;
    }
}
