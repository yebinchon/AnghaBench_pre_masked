
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_0(register uint32_t *VAR_4,uint32_t *VAR_5,int VAR_6)
{
  int VAR_7;

  for (VAR_7 = 0;VAR_7 < 49;++VAR_7) {
    register uint32_t VAR_8;
    register uint32_t VAR_9;
    VAR_9 = VAR_2[VAR_7];
    VAR_8 = VAR_9 - 1 - ((VAR_5[VAR_7] + VAR_1[VAR_7] * VAR_6 - 1) % VAR_9);
    while (VAR_8 < VAR_0) {
      register uint32_t VAR_10;
      register uint32_t VAR_11;
      register uint32_t VAR_12;
      VAR_10 = VAR_8;
      VAR_11 = VAR_8;
      VAR_10 >>= 5;
      VAR_11 &= 31;
      VAR_8 += VAR_9;
      VAR_12 = VAR_4[VAR_10];
      VAR_11 = VAR_3[VAR_11];
      VAR_12 |= VAR_11;
      VAR_4[VAR_10] = VAR_12;
    }
  }
}
