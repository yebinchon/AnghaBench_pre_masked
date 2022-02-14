
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitgen_t ;
typedef double RAND_INT_TYPE ;


 scalar_t__ FUNC_0 (double,double) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (int *) ;

__attribute__((used)) static RAND_INT_TYPE FUNC_3(bitgen_t *VAR_0,
                                               RAND_INT_TYPE VAR_1,
                                               RAND_INT_TYPE VAR_2,
                                               RAND_INT_TYPE VAR_3) {
  RAND_INT_TYPE VAR_4, VAR_5, VAR_6;
  double VAR_7, VAR_8, VAR_9;

  VAR_4 = VAR_2 + VAR_1 - VAR_3;
  VAR_7 = (double)FUNC_0(VAR_2, VAR_1);

  VAR_9 = VAR_7;
  VAR_5 = VAR_3;
  while (VAR_9 > 0.0) {
    VAR_8 = FUNC_2(VAR_0);
    VAR_9 -= (RAND_INT_TYPE)FUNC_1(VAR_8 + VAR_9 / (VAR_4 + VAR_5));
    VAR_5--;
    if (VAR_5 == 0)
      break;
  }
  VAR_6 = (RAND_INT_TYPE)(VAR_7 - VAR_9);
  if (VAR_1 > VAR_2)
    VAR_6 = VAR_3 - VAR_6;
  return VAR_6;
}
