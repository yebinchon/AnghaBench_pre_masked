
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ rgb_matrix_enable; scalar_t__ led_level; int raw; } ;


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
 int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

void FUNC_5(void) {

    VAR_10 = 0b10101001;
    VAR_11 = 0b00001001;


    VAR_0 &= ~(1<<4);
    VAR_6 &= ~(1<<4);



    VAR_1 &= ~(1<<7);
    VAR_2 &= ~(1<<5 | 1<<4);
    VAR_3 &= ~(1<<6);
    VAR_7 |= (1<<7);
    VAR_8 |= (1<<5 | 1<<4);
    VAR_9 |= (1<<6);

    VAR_12.raw = FUNC_0();
    FUNC_2((uint8_t)VAR_12.led_level * 255 / 4 );
    FUNC_1();

    FUNC_3();
}
