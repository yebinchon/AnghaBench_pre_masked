
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int histo ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int* const,int* const,int* const,int,int const,int,int) ;
 int FUNC_1 (int,int,int,int,int,int**,int* const,int* const,int const,int,int,int* const) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int VAR_1 ;
 int FUNC_4 (int**,int ,int) ;

void FUNC_5(int VAR_2, int VAR_3, int VAR_4, int VAR_5,
                       uint32_t* const VAR_6, uint32_t* const VAR_7,
                       uint32_t* const VAR_8, int VAR_9,
                       int VAR_10, int VAR_11) {
  const int VAR_12 = FUNC_3(VAR_2, VAR_4);
  const int VAR_13 = FUNC_3(VAR_3, VAR_4);
  int VAR_14;
  int VAR_15[4][256];
  const int VAR_16 = 1 << FUNC_2(VAR_9);
  if (VAR_5) {
    int VAR_17;
    for (VAR_17 = 0; VAR_17 < VAR_12 * VAR_13; ++VAR_17) {
      VAR_8[VAR_17] = VAR_0 | (VAR_1 << 8);
    }
  } else {
    FUNC_4(VAR_15, 0, sizeof(VAR_15));
    for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
      int VAR_18;
      for (VAR_18 = 0; VAR_18 < VAR_12; ++VAR_18) {
        const int VAR_19 = FUNC_1(VAR_2, VAR_3, VAR_18, VAR_14,
            VAR_4, VAR_15, VAR_7, VAR_6, VAR_16, VAR_10,
            VAR_11, VAR_8);
        VAR_8[VAR_14 * VAR_12 + VAR_18] = VAR_0 | (VAR_19 << 8);
      }
    }
  }

  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_8, VAR_7, VAR_6,
                          VAR_5, VAR_16, VAR_10,
                          VAR_11);
}
