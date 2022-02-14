
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

uint8_t FUNC_6(void)
{
    for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
        matrix_row_t VAR_11 = 0;


        switch (VAR_10) {
            case 0: FUNC_2(VAR_2, 11); break;
            case 1: FUNC_2(VAR_2, 10); break;
            case 2: FUNC_2(VAR_2, 2); break;
            case 3: FUNC_2(VAR_2, 1); break;
            case 4: FUNC_2(VAR_2, 0); break;
        }

        FUNC_5(20);


        VAR_11 = ((FUNC_1(VAR_1) & 0x8000UL) >> 15) |
            ((FUNC_1(VAR_3) & 0x1C00UL) >> 9) |
      ((FUNC_1(VAR_4) & 0x0004UL) << 2) |
      ((FUNC_1(VAR_2) & 0x03F8UL) << 2) |
      ((FUNC_1(VAR_1) & 0x000CUL) << 10);


        switch (VAR_10) {
         case 0: FUNC_0(VAR_2, 11); break;
         case 1: FUNC_0(VAR_2, 10); break;
         case 2: FUNC_0(VAR_2, 2); break;
         case 3: FUNC_0(VAR_2, 1); break;
         case 4: FUNC_0(VAR_2, 0); break;
        }

        if (VAR_9[VAR_10] != VAR_11) {
            VAR_9[VAR_10] = VAR_11;
            VAR_6 = 1;
            VAR_7 = FUNC_4();
        }
    }

    if (VAR_6 && FUNC_3(VAR_7) > VAR_0) {
        for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
            VAR_8[VAR_12] = VAR_9[VAR_12];
        }
        VAR_6 = 0;
    }
    return 1;
}
