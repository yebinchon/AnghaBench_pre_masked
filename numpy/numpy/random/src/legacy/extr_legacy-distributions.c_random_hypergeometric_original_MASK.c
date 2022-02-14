
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bitgen_t ;
typedef int RAND_INT_TYPE ;


 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int *,int,int,int) ;

__attribute__((used)) static RAND_INT_TYPE FUNC_2(bitgen_t *VAR_0,
                                                    RAND_INT_TYPE VAR_1,
                                                    RAND_INT_TYPE VAR_2,
                                                    RAND_INT_TYPE VAR_3)
{
  if (VAR_3 > 10) {
    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  } else if (VAR_3 > 0) {
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  } else {
    return 0;
  }
}
