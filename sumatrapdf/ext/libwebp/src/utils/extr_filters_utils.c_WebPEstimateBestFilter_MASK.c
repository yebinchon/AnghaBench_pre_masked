
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int bins ;
typedef size_t WEBP_FILTER_TYPE ;


 int FUNC_0 (int const,int const,int const) ;
 int FUNC_1 (int const,int const) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int**,int ,int) ;

WEBP_FILTER_TYPE FUNC_3(const uint8_t* VAR_6,
                                        int VAR_7, int VAR_8, int VAR_9) {
  int VAR_10, VAR_11;
  int VAR_12[VAR_3][VAR_0];
  FUNC_2(VAR_12, 0, sizeof(VAR_12));


  for (VAR_11 = 2; VAR_11 < VAR_8 - 1; VAR_11 += 2) {
    const uint8_t* const VAR_13 = VAR_6 + VAR_11 * VAR_9;
    int VAR_14 = VAR_13[0];
    for (VAR_10 = 2; VAR_10 < VAR_7 - 1; VAR_10 += 2) {
      const int VAR_15 = FUNC_1(VAR_13[VAR_10], VAR_14);
      const int VAR_16 = FUNC_1(VAR_13[VAR_10], VAR_13[VAR_10 - 1]);
      const int VAR_17 = FUNC_1(VAR_13[VAR_10], VAR_13[VAR_10 - VAR_7]);
      const int VAR_18 =
          FUNC_0(VAR_13[VAR_10 - 1], VAR_13[VAR_10 - VAR_7], VAR_13[VAR_10 - VAR_7 - 1]);
      const int VAR_19 = FUNC_1(VAR_13[VAR_10], VAR_18);
      VAR_12[VAR_4][VAR_15] = 1;
      VAR_12[VAR_2][VAR_16] = 1;
      VAR_12[VAR_5][VAR_17] = 1;
      VAR_12[VAR_1][VAR_19] = 1;
      VAR_14 = (3 * VAR_14 + VAR_13[VAR_10] + 2) >> 2;
    }
  }
  {
    int VAR_20;
    WEBP_FILTER_TYPE VAR_21 = VAR_4;
    int VAR_22 = 0x7fffffff;
    for (VAR_20 = VAR_4; VAR_20 < VAR_3; ++VAR_20) {
      int VAR_23 = 0;
      for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
        if (VAR_12[VAR_20][VAR_10] > 0) {
          VAR_23 += VAR_10;
        }
      }
      if (VAR_23 < VAR_22) {
        VAR_22 = VAR_23;
        VAR_21 = (WEBP_FILTER_TYPE)VAR_20;
      }
    }
    return VAR_21;
  }
}
