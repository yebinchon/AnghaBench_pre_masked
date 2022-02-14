
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

void FUNC_1(void) {
    FUNC_0("init_backlight_pin()\n");

    VAR_1 |= (1<<6);
    VAR_0 |= (1<<7);
    VAR_1 |= (1<<4);


    VAR_3 &= ~(1<<6);
    VAR_2 &= ~(1<<7);
    VAR_3 &= ~(1<<4);
}
