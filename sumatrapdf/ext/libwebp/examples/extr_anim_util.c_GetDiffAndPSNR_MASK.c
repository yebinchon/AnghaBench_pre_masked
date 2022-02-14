
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const,int const,double*,double*) ;
 int VAR_0 ;
 double FUNC_1 (int) ;

void FUNC_2(const uint8_t VAR_1[], const uint8_t VAR_2[],
                    uint32_t VAR_3, uint32_t VAR_4, int VAR_5,
                    int* const VAR_6, double* const VAR_7) {
  const uint32_t VAR_8 = VAR_3 * VAR_0;
  const int VAR_9 = VAR_0 - 1;
  double VAR_10 = 0.;
  double VAR_11 = 0.;
  uint32_t VAR_12, VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13) {
    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12 += VAR_0) {
      int VAR_14;
      const size_t VAR_15 = (size_t)VAR_13 * VAR_8 + VAR_12;
      const int VAR_16 = VAR_1[VAR_15 + VAR_9];
      const int VAR_17 = VAR_2[VAR_15 + VAR_9];
      FUNC_0(VAR_16, VAR_17, &VAR_10, &VAR_11);
      if (!VAR_5) {
        for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
          FUNC_0(VAR_1[VAR_15 + VAR_14], VAR_2[VAR_15 + VAR_14], &VAR_10, &VAR_11);
        }
      } else {

        for (VAR_14 = 0; VAR_14 < VAR_9; ++VAR_14) {
          FUNC_0(VAR_1[VAR_15 + VAR_14] * VAR_16 / 255.,
                     VAR_2[VAR_15 + VAR_14] * VAR_17 / 255.,
                     &VAR_10, &VAR_11);
        }
      }
    }
  }
  *VAR_6 = (int)VAR_10;
  if (*VAR_6 == 0) {
    *VAR_7 = 99.;
  } else {
    VAR_11 /= VAR_8 * VAR_4;
    *VAR_7 = 4.3429448 * FUNC_1(255. * 255. / VAR_11);
  }
}
