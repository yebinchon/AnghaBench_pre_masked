
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(matrix_row_t VAR_0[], uint8_t VAR_1) {

  matrix_row_t VAR_2 = VAR_0[VAR_1];


  VAR_0[VAR_1] = 0;


  FUNC_1(VAR_1);
  FUNC_2(30);

  VAR_0[VAR_1] = FUNC_0();



  return (VAR_2 != VAR_0[VAR_1]);
}
