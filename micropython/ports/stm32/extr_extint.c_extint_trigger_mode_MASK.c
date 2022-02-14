
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint ;
typedef int mp_uint_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3(uint VAR_7, uint32_t VAR_8) {
    if (VAR_7 >= VAR_1) {
        return;
    }


    mp_uint_t VAR_9 = FUNC_1();

    if ((VAR_8 & VAR_6) == VAR_6) {
        VAR_2 |= (1 << VAR_7);
    } else {
        VAR_2 &= ~(1 << VAR_7);
    }

    if ((VAR_8 & VAR_5) == VAR_5) {
        VAR_0 |= 1 << VAR_7;
    } else {
        VAR_0 &= ~(1 << VAR_7);
    }
    FUNC_2(VAR_9);







}
