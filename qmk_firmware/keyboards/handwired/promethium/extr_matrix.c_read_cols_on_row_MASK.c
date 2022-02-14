
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t matrix_row_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 size_t* VAR_2 ;
 int FUNC_3 (size_t) ;
 size_t* VAR_3 ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static bool FUNC_5(matrix_row_t VAR_4[], uint8_t VAR_5)
    {

        matrix_row_t VAR_6 = VAR_4[VAR_5];


        VAR_4[VAR_5] = 0;


        if (VAR_5 == 8) {
            for(uint8_t VAR_7 = 0; VAR_7 < 3; VAR_7++) {


                uint8_t VAR_8 = VAR_3[VAR_7];
                uint8_t VAR_9 = (FUNC_1(VAR_8 >> 4) & FUNC_0(VAR_8 & 0xF));


                VAR_4[VAR_5] |= VAR_9 ? 0 : (VAR_1 << VAR_7);
            }
            return (VAR_6 != VAR_4[VAR_5]);
        }


        FUNC_3(VAR_5);
        FUNC_2(5);



        for(uint8_t VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {


            uint8_t VAR_11 = VAR_2[VAR_10];
            uint8_t VAR_12 = (FUNC_1(VAR_11 >> 4) & FUNC_0(VAR_11 & 0xF));


            VAR_4[VAR_5] |= VAR_12 ? 0 : (VAR_1 << VAR_10);
        }


        FUNC_4(VAR_5);

        return (VAR_6 != VAR_4[VAR_5]);
}
