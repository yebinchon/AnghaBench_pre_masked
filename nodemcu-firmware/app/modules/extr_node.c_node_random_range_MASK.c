
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;


 int FUNC_0 () ;

int FUNC_1(int VAR_0, int VAR_1) {

  unsigned int VAR_2 = VAR_1 + 1 - VAR_0;


  if (VAR_2 >= 0x7fffffff) {
    unsigned int VAR_3;


    while ((VAR_3 = FUNC_0()) >= VAR_2) {
    }


    return VAR_3 + VAR_0;
  }


  if (VAR_2 == 1) {
    return VAR_0;
  }


  if (VAR_2 == 0) {
    return FUNC_0();
  }




  uint32_t VAR_4 = ((0x80000000 / ((VAR_2 + 1) >> 1)) - 1) * VAR_2;

  uint32_t VAR_5;

  while ((VAR_5 = FUNC_0()) >= VAR_4) {
  }



  return (VAR_5 % VAR_2) + VAR_0;
}
