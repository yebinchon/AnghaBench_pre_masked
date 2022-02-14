
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) inline static matrix_row_t FUNC_0(void) {

    return (VAR_0 & (1 << 6) ? 0 : (VAR_2 << 0)) |
          (VAR_0 & (1 << 2) ? 0 : (VAR_2 << 1)) |
          (VAR_0 & (1 << 3) ? 0 : (VAR_2 << 2)) |
          (VAR_0 & (1 << 1) ? 0 : (VAR_2 << 3)) |
          (VAR_1 & (1 << 7) ? 0 : (VAR_2 << 4)) |
          (VAR_1 & (1 << 6) ? 0 : (VAR_2 << 5)) |
          (VAR_1 & (1 << 5) ? 0 : (VAR_2 << 6)) |
          (VAR_1 & (1 << 4) ? 0 : (VAR_2 << 7));
}
