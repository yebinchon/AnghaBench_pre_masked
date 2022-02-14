
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitgen_t ;
typedef int binomial_t ;
typedef double RAND_INT_TYPE ;


 double FUNC_0 (int *,double,double,int *) ;
 double FUNC_1 (int *,double,double,int *) ;

__attribute__((used)) static RAND_INT_TYPE FUNC_2(bitgen_t *VAR_0,
                                                     double VAR_1,
                                                     RAND_INT_TYPE VAR_2,
                                                     binomial_t *VAR_3) {
  double VAR_4;

  if (VAR_1 <= 0.5) {
    if (VAR_1 * VAR_2 <= 30.0) {
      return FUNC_1(VAR_0, VAR_2, VAR_1, VAR_3);
    } else {
      return FUNC_0(VAR_0, VAR_2, VAR_1, VAR_3);
    }
  } else {
    VAR_4 = 1.0 - VAR_1;
    if (VAR_4 * VAR_2 <= 30.0) {
      return VAR_2 - FUNC_1(VAR_0, VAR_2, VAR_4, VAR_3);
    } else {
      return VAR_2 - FUNC_0(VAR_0, VAR_2, VAR_4, VAR_3);
    }
  }
}
