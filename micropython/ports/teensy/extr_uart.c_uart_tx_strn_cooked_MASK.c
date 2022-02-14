
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int pyb_uart_obj_t ;


 int FUNC_0 (int *,char const) ;

void FUNC_1(pyb_uart_obj_t *VAR_0, const char *VAR_1, uint VAR_2) {
    for (const char *VAR_3 = VAR_1 + VAR_2; VAR_1 < VAR_3; VAR_1++) {
        if (*VAR_1 == '\n') {
            FUNC_0(VAR_0, '\r');
        }
        FUNC_0(VAR_0, *VAR_1);
    }
}
