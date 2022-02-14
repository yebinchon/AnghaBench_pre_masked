
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


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
 int FUNC_0 () ;

__attribute__((used)) static matrix_row_t FUNC_1(uint8_t VAR_10)
{
  matrix_row_t VAR_11 = 0x00, VAR_12 = 0x00;

  VAR_11 = FUNC_0();

  VAR_12 = (VAR_8&(1<<VAR_4) ? 0 : (1<<(0+7))) |
          (VAR_9&(1<<VAR_6) ? 0 : (1<<(1+7))) |
          (VAR_9&(1<<VAR_5) ? 0 : (1<<(2+7))) |
          (VAR_7&(1<<VAR_3) ? 0 : (1<<(3+7))) |
          (VAR_7&(1<<VAR_2) ? 0 : (1<<(4+7))) |
          (VAR_7&(1<<VAR_1) ? 0 : (1<<(5+7))) |
          (VAR_7&(1<<VAR_0) ? 0 : (1<<(6+7))) ;

  return (VAR_11 | VAR_12);
}
