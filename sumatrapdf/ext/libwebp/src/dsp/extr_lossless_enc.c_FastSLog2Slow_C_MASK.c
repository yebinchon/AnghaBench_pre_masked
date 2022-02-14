
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;
 int FUNC_1 (double) ;

__attribute__((used)) static float FUNC_2(uint32_t VAR_4) {
  FUNC_0(VAR_4 >= VAR_2);
  if (VAR_4 < VAR_0) {
    int VAR_5 = 0;
    uint32_t VAR_6 = 1;
    int VAR_7 = 0;
    const float VAR_8 = (float)VAR_4;
    const uint32_t VAR_9 = VAR_4;
    do {
      ++VAR_5;
      VAR_4 = VAR_4 >> 1;
      VAR_6 = VAR_6 << 1;
    } while (VAR_4 >= VAR_2);






    VAR_7 = (23 * (VAR_9 & (VAR_6 - 1))) >> 4;
    return VAR_8 * (VAR_3[VAR_4] + VAR_5) + VAR_7;
  } else {
    return (float)(VAR_1 * VAR_4 * FUNC_1((double)VAR_4));
  }
}
