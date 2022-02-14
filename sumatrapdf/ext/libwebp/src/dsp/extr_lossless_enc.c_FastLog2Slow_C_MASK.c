
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int* VAR_4 ;
 int FUNC_1 (double) ;

__attribute__((used)) static float FUNC_2(uint32_t VAR_5) {
  FUNC_0(VAR_5 >= VAR_3);
  if (VAR_5 < VAR_1) {
    int VAR_6 = 0;
    uint32_t VAR_7 = 1;
    const uint32_t VAR_8 = VAR_5;
    double VAR_9;
    do {
      ++VAR_6;
      VAR_5 = VAR_5 >> 1;
      VAR_7 = VAR_7 << 1;
    } while (VAR_5 >= VAR_3);
    VAR_9 = VAR_4[VAR_5] + VAR_6;
    if (VAR_8 >= VAR_0) {


      const int VAR_10 = (23 * (VAR_8 & (VAR_7 - 1))) >> 4;
      VAR_9 += (double)VAR_10 / VAR_8;
    }
    return (float)VAR_9;
  } else {
    return (float)(VAR_2 * FUNC_1((double)VAR_5));
  }
}
