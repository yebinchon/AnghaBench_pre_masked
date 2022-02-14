
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int uart_ring ;


 int FUNC_0 (int) ;
 int * FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int*,int) ;

void FUNC_4(void *VAR_0, int VAR_1, bool VAR_2) {
  FUNC_0(VAR_2);
  uint8_t *VAR_3 = (uint8_t *)VAR_0;
  uart_ring *VAR_4 = FUNC_1(VAR_3[0]);
  if ((VAR_1 != 0) && (VAR_4 != ((void*)0))) {
    if ((VAR_3[0] < 2U) || FUNC_3(VAR_3[0] - 2U, &VAR_3[1], VAR_1 - 1)) {
      for (int VAR_5 = 1; VAR_5 < VAR_1; VAR_5++) {
        while (!FUNC_2(VAR_4, VAR_3[VAR_5])) {

        }
      }
    }
  }
}
