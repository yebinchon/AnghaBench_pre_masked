
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int report_keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(report_keyboard_t *VAR_4) {
    uint8_t VAR_5 = (VAR_2 + 1) % VAR_0;
    if (VAR_5 != VAR_3) {
        VAR_1[VAR_2] = *VAR_4;
        VAR_2 = VAR_5;
    } else {
        FUNC_0("kbuf: full\n");
    }


    FUNC_1();
    FUNC_2();
}
