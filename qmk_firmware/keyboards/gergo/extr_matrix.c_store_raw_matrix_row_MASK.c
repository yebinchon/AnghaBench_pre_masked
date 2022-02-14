
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ matrix_row_t ;


 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_0 (size_t) ;

__attribute__((used)) static inline bool FUNC_1(uint8_t VAR_1) {
  matrix_row_t VAR_2 = FUNC_0(VAR_1);
  if (VAR_0[VAR_1] != VAR_2) {
    VAR_0[VAR_1] = VAR_2;
    return 1;
  }
  return 0;
}
