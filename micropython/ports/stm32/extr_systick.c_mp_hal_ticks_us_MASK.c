
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mp_uint_t ;
struct TYPE_2__ {int VAL; int CTRL; int LOAD; } ;


 int FUNC_0 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

mp_uint_t FUNC_3(void) {
    mp_uint_t VAR_2 = FUNC_1();
    uint32_t VAR_3 = VAR_0->VAL;
    uint32_t VAR_4 = FUNC_0();
    uint32_t VAR_5 = VAR_0->CTRL;
    FUNC_2(VAR_2);






    if ((VAR_5 & VAR_1) && VAR_3 > 50) {



        VAR_4++;
    }
    uint32_t VAR_6 = VAR_0->LOAD;
    VAR_3 = VAR_6 - VAR_3;





    return VAR_4 * 1000 + (VAR_3 * 1000) / (VAR_6 + 1);
}
