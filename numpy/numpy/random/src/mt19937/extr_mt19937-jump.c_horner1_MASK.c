
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mt19937_state ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (unsigned long*,int) ;

void FUNC_6(unsigned long *VAR_1, mt19937_state *VAR_2) {
  int VAR_3 = VAR_0 - 1;
  mt19937_state *VAR_4;

  VAR_4 = (mt19937_state *)FUNC_1(1, sizeof(mt19937_state));

  while (FUNC_5(VAR_1, VAR_3) == 0)
    VAR_3--;

  if (VAR_3 > 0) {
    FUNC_2(VAR_4, VAR_2);
    FUNC_4(VAR_4);
    VAR_3--;
    for (; VAR_3 > 0; VAR_3--) {
      if (FUNC_5(VAR_1, VAR_3) != 0)
        FUNC_0(VAR_4, VAR_2);
      else
        ;
      FUNC_4(VAR_4);
    }
    if (FUNC_5(VAR_1, 0) != 0)
      FUNC_0(VAR_4, VAR_2);
    else
      ;
  } else if (VAR_3 == 0)
    FUNC_2(VAR_4, VAR_2);
  else
    ;

  FUNC_2(VAR_2, VAR_4);
  FUNC_3(VAR_4);
}
