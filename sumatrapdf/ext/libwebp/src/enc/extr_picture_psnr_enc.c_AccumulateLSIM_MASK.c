
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double uint8_t ;


 int VAR_0 ;

__attribute__((used)) static double FUNC_0(const uint8_t* VAR_1, int VAR_2,
                             const uint8_t* VAR_3, int VAR_4,
                             int VAR_5, int VAR_6) {
  int VAR_7, VAR_8;
  double VAR_9 = 0.;
  for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
    const int VAR_10 = (VAR_8 - VAR_0 < 0) ? 0 : VAR_8 - VAR_0;
    const int VAR_11 = (VAR_8 + VAR_0 + 1 >= VAR_6) ? VAR_6 : VAR_8 + VAR_0 + 1;
    for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7) {
      const int VAR_12 = (VAR_7 - VAR_0 < 0) ? 0 : VAR_7 - VAR_0;
      const int VAR_13 = (VAR_7 + VAR_0 + 1 >= VAR_5) ? VAR_5 : VAR_7 + VAR_0 + 1;
      double VAR_14 = 255. * 255.;
      const double VAR_15 = (double)VAR_3[VAR_8 * VAR_4 + VAR_7];
      int VAR_16, VAR_17;
      for (VAR_17 = VAR_10; VAR_17 < VAR_11; ++VAR_17) {
        const uint8_t* const VAR_18 = VAR_1 + VAR_17 * VAR_2;
        for (VAR_16 = VAR_12; VAR_16 < VAR_13; ++VAR_16) {
          const double VAR_19 = VAR_18[VAR_16] - VAR_15;
          const double VAR_20 = VAR_19 * VAR_19;
          if (VAR_20 < VAR_14) VAR_14 = VAR_20;
        }
      }
      VAR_9 += VAR_14;
    }
  }
  return VAR_9;
}
