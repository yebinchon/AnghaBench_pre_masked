
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int matrix_row_t ;


 int FUNC_0 (int,size_t) ;
 int* VAR_0 ;
 int FUNC_1 (size_t) ;

matrix_row_t FUNC_2(uint8_t VAR_1) {

  matrix_row_t VAR_2 = FUNC_1(VAR_1);

  matrix_row_t VAR_3 = FUNC_0(VAR_2, VAR_1);

  return (VAR_2 & VAR_3) | (VAR_0[VAR_1] & ~VAR_3);;
}
