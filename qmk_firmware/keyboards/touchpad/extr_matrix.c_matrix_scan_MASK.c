
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int*,int*) ;
 scalar_t__ FUNC_2 () ;
 int * VAR_16 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_17 ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

uint8_t FUNC_11(void) {
  if (FUNC_2()) {
    uint16_t VAR_18 = FUNC_7();
    if ((VAR_18 & 0b111100010001) > 0 && (VAR_18 & 0b000011101110) > 0) {
      uint8_t VAR_19 = 10, VAR_20 = 10;
      FUNC_1(VAR_18, &VAR_19, &VAR_20);
      if (VAR_19 != 10 && VAR_20 != 10) {
        VAR_17 = VAR_15;
        VAR_16[VAR_20] = FUNC_0(VAR_19);
      } else {
        FUNC_5(VAR_16, 0, VAR_14 * sizeof(matrix_row_t));
      }
    } else {
      FUNC_5(VAR_16, 0, VAR_14 * sizeof(matrix_row_t));
    }
    FUNC_6();
  }

  for (uint8_t VAR_21 = 0; VAR_21 < 6; VAR_21++) {
    for (uint8_t VAR_22 = 0; VAR_22 < 6; VAR_22++) {
      switch (VAR_22) {
        case 0: FUNC_8(VAR_5, FUNC_3(VAR_22, VAR_21)); break;
        case 1: FUNC_8(VAR_0, FUNC_3(VAR_22, VAR_21)); break;
        case 2: FUNC_8(VAR_1, FUNC_3(VAR_22, VAR_21)); break;
        case 3: FUNC_8(VAR_2, FUNC_3(VAR_22, VAR_21)); break;
        case 4: FUNC_8(VAR_3, FUNC_3(VAR_22, VAR_21)); break;
        case 5: FUNC_8(VAR_4, FUNC_3(VAR_22, VAR_21)); break;
      }

      switch (VAR_21) {
        case 0: FUNC_8(VAR_11, !FUNC_3(VAR_22, VAR_21)); break;
        case 1: FUNC_8(VAR_10, !FUNC_3(VAR_22, VAR_21)); break;
        case 2: FUNC_8(VAR_9, !FUNC_3(VAR_22, VAR_21)); break;
        case 3: FUNC_8(VAR_8, !FUNC_3(VAR_22, VAR_21)); break;
        case 4: FUNC_8(VAR_12, !FUNC_3(VAR_22, VAR_21)); break;
        case 5: FUNC_8(VAR_13, !FUNC_3(VAR_22, VAR_21)); break;
      }
    }
  }

  if (VAR_17 == VAR_15) {
    FUNC_9(VAR_7);
    FUNC_9(VAR_6);
    VAR_17--;
  } else if (VAR_17 > 0) {
    VAR_17--;
  } else if (VAR_17 == 0) {
    FUNC_10(VAR_6);
    FUNC_10(VAR_7);
  }

  FUNC_4();

  return 1;

}
