
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static matrix_row_t FUNC_0(void) {
    return (
        (VAR_1&(1<<7) ? 0 : ((matrix_row_t)1<<0)) |
        (VAR_0&(1<<6) ? 0 : ((matrix_row_t)1<<1)) |
        (VAR_0&(1<<1) ? 0 : ((matrix_row_t)1<<2)) |
        (VAR_0&(1<<0) ? 0 : ((matrix_row_t)1<<3)) |
        (VAR_0&(1<<5) ? 0 : ((matrix_row_t)1<<4)) |
        (VAR_0&(1<<3) ? 0 : ((matrix_row_t)1<<5)) |
        (VAR_0&(1<<4) ? 0 : ((matrix_row_t)1<<6)) |
        (VAR_0&(1<<2) ? 0 : ((matrix_row_t)1<<7))
    );
}
