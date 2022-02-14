
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint16_t ;
typedef int matrix_row_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t* VAR_5 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static bool FUNC_9(matrix_row_t VAR_7[], uint8_t VAR_8)
{

    matrix_row_t VAR_9 = VAR_7[VAR_8];


    VAR_7[VAR_8] = 0;


    FUNC_6(VAR_8);
    FUNC_8(30);

    if (VAR_6) {

        return 0;
    } else {
        uint16_t VAR_10 = 0;
        VAR_6 = FUNC_3(VAR_3); if (VAR_6) goto out;
        VAR_6 = FUNC_5(VAR_1); if (VAR_6) goto out;
        VAR_6 = FUNC_3(VAR_2); if (VAR_6) goto out;
        VAR_10 = FUNC_2();
        VAR_10 = ~VAR_10;
    out:
        FUNC_4();
        VAR_7[VAR_8] |= (VAR_10 << 8);
    }


    for(uint8_t VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {

        uint8_t VAR_12 = VAR_5[VAR_11];
        uint8_t VAR_13 = (FUNC_1(VAR_12 >> 4) & FUNC_0(VAR_12 & 0xF));


        VAR_7[VAR_8] |= VAR_13 ? 0 : (VAR_4 << VAR_11);
    }


    FUNC_7();

    return (VAR_9 != VAR_7[VAR_8]);
}
