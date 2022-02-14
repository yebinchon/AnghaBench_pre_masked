
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int,int*,int*,int *,int const,int,int,int,int,int,int,int* const) ;
 int FUNC_1 (int,int,int* const,int *,int) ;
 int FUNC_2 (int ,int ,int,int,int*,int*,int* const) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int FUNC_4 (int*,int* const,int) ;

__attribute__((used)) static void FUNC_5(int VAR_1, int VAR_2,
                                    int VAR_3, uint32_t* const VAR_4,
                                    uint32_t* const VAR_5,
                                    uint32_t* const VAR_6,
                                    int VAR_7, int VAR_8,
                                    int VAR_9, int VAR_10) {
  const int VAR_11 = FUNC_3(VAR_1, VAR_3);



  uint32_t* VAR_12 = VAR_5;
  uint32_t* VAR_13 = VAR_12 + VAR_1 + 1;
  uint8_t* VAR_14 = (uint8_t*)(VAR_13 + VAR_1 + 1);



  int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_2; ++VAR_15) {
    int VAR_16;
    uint32_t* const VAR_17 = VAR_12;
    VAR_12 = VAR_13;
    VAR_13 = VAR_17;
    FUNC_4(VAR_13, VAR_6 + VAR_15 * VAR_1,
           sizeof(*VAR_6) * (VAR_1 + (VAR_15 + 1 < VAR_2)));

    if (VAR_7) {
      FUNC_2(VAR_0, 0, VAR_15, VAR_1, VAR_13, VAR_12,
                   VAR_6 + VAR_15 * VAR_1);
    } else {
      for (VAR_16 = 0; VAR_16 < VAR_1;) {
        const int VAR_18 =
            (VAR_4[(VAR_15 >> VAR_3) * VAR_11 + (VAR_16 >> VAR_3)] >> 8) & 0xff;
        int VAR_19 = VAR_16 + (1 << VAR_3);
        if (VAR_19 > VAR_1) VAR_19 = VAR_1;
        FUNC_0(VAR_1, VAR_2, VAR_12, VAR_13, VAR_14,
                    VAR_18, VAR_16, VAR_19, VAR_15, VAR_8, VAR_9,
                    VAR_10, VAR_6 + VAR_15 * VAR_1 + VAR_16);
        VAR_16 = VAR_19;
      }
    }
  }
}
