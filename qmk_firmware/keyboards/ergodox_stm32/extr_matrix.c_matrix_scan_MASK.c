
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int * VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (size_t) ;
 int FUNC_5 () ;

uint8_t FUNC_6(void) {
  if (VAR_3) {
    if (++VAR_2 == 0) {
      VAR_3 = FUNC_2();
        if (!VAR_3) {
            FUNC_1();
        }
    }
  }
  for (uint8_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
    FUNC_4(VAR_4);
    FUNC_4(VAR_4 + VAR_0);

    VAR_1[VAR_4] = FUNC_0(VAR_4);
    VAR_1[VAR_4 + VAR_0] = FUNC_0(VAR_4 + VAR_0);

    FUNC_5();
  }
  FUNC_3();
  return 0;
}
