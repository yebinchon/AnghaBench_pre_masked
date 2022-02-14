
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*,int,int,int,int,int) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static int FUNC_2(uint8_t* VAR_0, int VAR_1,
                            const uint8_t* VAR_2, int VAR_3,
                            int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  int VAR_8, VAR_9;
  int VAR_10 = 0;
  for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
    uint8_t* const VAR_11 = VAR_0 + VAR_9 * VAR_1;
    const uint8_t* const VAR_12 = VAR_2 + VAR_9 * VAR_3;
    for (VAR_8 = 0; VAR_8 < VAR_5 * VAR_4; VAR_8 += VAR_4) {
      const int VAR_13 = FUNC_1(VAR_11[VAR_8] - VAR_12[VAR_8]);
      if (VAR_13 > VAR_10) VAR_10 = VAR_13;
      VAR_11[VAR_8] = VAR_13;
    }
  }

  if (VAR_7) FUNC_0(VAR_0, VAR_5, VAR_6, VAR_4, VAR_1, VAR_10);
  return VAR_10;
}
