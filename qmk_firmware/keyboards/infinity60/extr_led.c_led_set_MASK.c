
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int msg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;

void FUNC_3(uint8_t VAR_5) {
    msg_t VAR_6;

    if (VAR_5 & (1<<VAR_3)) {
        FUNC_1();
        VAR_6=(1 << 8) | VAR_1;
        FUNC_0(&VAR_4, VAR_6);
        FUNC_2();
    } else {
        FUNC_1();
        VAR_6=(0 << 8) | VAR_1;
        FUNC_0(&VAR_4, VAR_6);
        FUNC_2();
    }
    if (VAR_5 & (1<<VAR_2)) {
        FUNC_1();
        VAR_6=(1 << 8) | VAR_0;
        FUNC_0(&VAR_4, VAR_6);
        FUNC_2();
    } else {
        FUNC_1();
        VAR_6=(0 << 8) | VAR_0;
        FUNC_0(&VAR_4, VAR_6);
        FUNC_2();
    }
}
