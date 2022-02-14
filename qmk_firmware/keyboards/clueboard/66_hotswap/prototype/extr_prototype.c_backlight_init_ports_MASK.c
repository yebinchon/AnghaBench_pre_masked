
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

void FUNC_1(void) {
    FUNC_0("init_backlight_pin()\n");

    VAR_0 |= (1<<0);
    VAR_0 |= (1<<4);
    VAR_0 |= (1<<1);


    VAR_1 &= ~(1<<0);
    VAR_1 &= ~(1<<4);
    VAR_1 &= ~(1<<1);
}
