
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 scalar_t__ FUNC_0 (int const*,int,int const*,int) ;
 scalar_t__ FUNC_1 (int const*,int,int const*,int,int,int,int,int) ;
 int VAR_0 ;

__attribute__((used)) static double FUNC_2(const uint8_t* VAR_1, int VAR_2,
                             const uint8_t* VAR_3, int VAR_4,
                             int VAR_5, int VAR_6) {
  const int VAR_7 = (VAR_5 < VAR_0) ? VAR_5 : VAR_0;
  const int VAR_8 = VAR_5 - VAR_0 - 1;
  const int VAR_9 = (VAR_6 < VAR_0) ? VAR_6 : VAR_0;
  const int VAR_10 = VAR_6 - VAR_0 - 1;
  int VAR_11, VAR_12;
  double VAR_13 = 0.;
  for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12) {
    for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
      VAR_13 += FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12, VAR_5, VAR_6);
    }
  }
  for (; VAR_12 < VAR_10; ++VAR_12) {
    for (VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11) {
      VAR_13 += FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12, VAR_5, VAR_6);
    }
    for (; VAR_11 < VAR_8; ++VAR_11) {
      const int VAR_14 = VAR_11 - VAR_0 + (VAR_12 - VAR_0) * VAR_2;
      const int VAR_15 = VAR_11 - VAR_0 + (VAR_12 - VAR_0) * VAR_4;
      VAR_13 += FUNC_0(VAR_1 + VAR_14, VAR_2, VAR_3 + VAR_15, VAR_4);
    }
    for (; VAR_11 < VAR_5; ++VAR_11) {
      VAR_13 += FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12, VAR_5, VAR_6);
    }
  }
  for (; VAR_12 < VAR_6; ++VAR_12) {
    for (VAR_11 = 0; VAR_11 < VAR_5; ++VAR_11) {
      VAR_13 += FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_11, VAR_12, VAR_5, VAR_6);
    }
  }
  return VAR_13;
}
