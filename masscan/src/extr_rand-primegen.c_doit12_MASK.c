
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int64_t ;


 long VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(register uint32_t *VAR_2,register long VAR_3,register long VAR_4,int64_t VAR_5)
{
  register long VAR_6;
  register uint32_t VAR_7;
  register uint32_t VAR_8;

  VAR_3 += 5;

  VAR_5 += 1000000000;
  while (VAR_5 < 0) { VAR_5 += VAR_3; VAR_3 += 10; }
  VAR_5 -= 1000000000;
  VAR_6 = VAR_5;
  while (VAR_6 < 0) { VAR_6 += VAR_3; VAR_3 += 10; }

  VAR_4 += 15;
  VAR_3 += 10;

  for (;;) {
    long VAR_9;
    long VAR_10;
    while (VAR_6 >= VAR_0) {
      if (VAR_3 <= VAR_4) return;
      VAR_6 -= VAR_4;
      VAR_4 += 30;
    }
    VAR_9 = VAR_6;
    VAR_10 = VAR_4;
    while ((VAR_6 >= 0) && (VAR_4 < VAR_3)) {
      register uint32_t VAR_11;
      VAR_11 = (uint32_t)VAR_6; VAR_7 = (uint32_t)VAR_6;
      VAR_11 >>= 5; VAR_7 &= 31;
      VAR_6 -= VAR_4;
      VAR_4 += 30;
      VAR_8 = VAR_2[VAR_11]; VAR_7 = VAR_1[VAR_7];
      VAR_8 ^= VAR_7;
      VAR_2[VAR_11] = VAR_8;
    }
    VAR_6 = VAR_9;
    VAR_4 = VAR_10;
    VAR_6 += VAR_3 - 10;
    VAR_3 += 10;
  }
}
