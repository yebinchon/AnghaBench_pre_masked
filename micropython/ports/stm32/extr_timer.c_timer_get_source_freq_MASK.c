
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int CFGR; int D2CFGR; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

uint32_t FUNC_2(uint32_t VAR_6) {
    uint32_t VAR_7, VAR_8;
    if (VAR_6 == 1 || (8 <= VAR_6 && VAR_6 <= 11)) {
        VAR_7 = FUNC_1();
        VAR_8 = VAR_0->CFGR & VAR_3;

    } else {

        VAR_7 = FUNC_0();





        VAR_8 = VAR_0->CFGR & VAR_2;

    }
    if (VAR_8 != 0) {

        VAR_7 *= 2;
    }
    return VAR_7;
}
