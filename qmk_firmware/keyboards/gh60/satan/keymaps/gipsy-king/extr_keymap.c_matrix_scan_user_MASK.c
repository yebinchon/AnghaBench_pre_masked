
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;

void FUNC_4(void) {
  if (FUNC_2(VAR_3) > VAR_2) {
      FUNC_1();
      VAR_3 = FUNC_3();
      return;
  }
  if (FUNC_2(VAR_1) < VAR_0) {
    return;
  }
  VAR_1 += VAR_0;
  VAR_4 += 4;
  if (VAR_4 >= 255) {
    VAR_4 = 0;
    VAR_1 = FUNC_3();
  }
  FUNC_0(VAR_4);
}
