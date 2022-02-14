
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int,int,int) ;

void FUNC_3(void) {
    uint8_t VAR_6 = FUNC_0();
    uint16_t VAR_7 = 355;
    uint8_t VAR_8 = 255;
    uint8_t VAR_9 = 0;
    if (FUNC_1(VAR_3)) { VAR_7 -= 50; VAR_8 -= 20; VAR_9 += 20; };
    if (FUNC_1(VAR_4)) { VAR_9 += 30; };
    if (VAR_6 & VAR_2) { VAR_8 -= 20; VAR_9 += 30; };
    if (VAR_6 & VAR_0) { VAR_7 -= 100; VAR_8 -= 20; VAR_9 += 30; };
    if (VAR_6 & VAR_1) { VAR_7 -= 200; VAR_8 -= 20; VAR_9 += 30; };


    FUNC_2(VAR_7, VAR_8, VAR_9, 0);
    VAR_5 = 0;
}
