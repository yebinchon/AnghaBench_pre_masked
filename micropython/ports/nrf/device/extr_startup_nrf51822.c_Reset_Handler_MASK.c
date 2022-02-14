
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;

void FUNC_2(void) {
    uint32_t * VAR_5 = (uint32_t *)0x40000524;
    uint32_t * VAR_6 = (uint32_t *)0x40000554;

    *VAR_5 = 3;
    *VAR_6 = 3;






    uint32_t * VAR_7 = &VAR_4;
    uint32_t * VAR_8 = &VAR_3;

    while (VAR_8 < &VAR_1) {
      *VAR_8++ = *VAR_7++;
    }

    uint32_t * VAR_9 = &VAR_2;
    uint32_t * VAR_10 = &VAR_0;
    while (VAR_9 < VAR_10) {
        *VAR_9++ = 0ul;
    }

    FUNC_0();
    FUNC_1();
}
