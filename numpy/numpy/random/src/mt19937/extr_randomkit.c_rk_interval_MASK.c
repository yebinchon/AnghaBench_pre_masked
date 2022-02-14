
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_state ;


 unsigned long FUNC_0 (int *) ;
 unsigned long FUNC_1 (int *) ;

unsigned long FUNC_2(unsigned long VAR_0, rk_state *VAR_1) {
  unsigned long VAR_2 = VAR_0, VAR_3;

  if (VAR_0 == 0) {
    return 0;
  }

  VAR_2 |= VAR_2 >> 1;
  VAR_2 |= VAR_2 >> 2;
  VAR_2 |= VAR_2 >> 4;
  VAR_2 |= VAR_2 >> 8;
  VAR_2 |= VAR_2 >> 16;
  while ((VAR_3 = (FUNC_1(VAR_1) & VAR_2)) > VAR_0)
    ;

  return VAR_3;
}
