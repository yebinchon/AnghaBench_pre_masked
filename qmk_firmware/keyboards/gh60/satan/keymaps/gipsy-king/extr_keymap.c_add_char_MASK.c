
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ,int) ;

void FUNC_5(bool VAR_2) {
  if (VAR_1 == VAR_0 - 1) {
    VAR_1 = 0;
    FUNC_0();
    return;
  }

  if (VAR_2) {
    FUNC_4(0, 0, 0, VAR_1);
  } else {
    FUNC_4(FUNC_1(), FUNC_2(), FUNC_3(), VAR_1);
  }
  VAR_1 += 1;
}
