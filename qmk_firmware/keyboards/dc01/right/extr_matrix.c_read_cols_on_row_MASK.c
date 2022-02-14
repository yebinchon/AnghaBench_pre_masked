
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
 size_t* VAR_2 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(matrix_row_t VAR_3[], uint8_t VAR_4)
{

    matrix_row_t VAR_5 = VAR_3[VAR_4];


    VAR_3[VAR_4] = 0;


    FUNC_2(VAR_4);
    FUNC_4(30);


    for(uint8_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {


        uint8_t VAR_7 = VAR_2[VAR_6];
        uint8_t VAR_8 = (FUNC_1(VAR_7 >> 4) & FUNC_0(VAR_7 & 0xF));


        VAR_3[VAR_4] |= VAR_8 ? 0 : (VAR_1 << VAR_6);
    }


    FUNC_3(VAR_4);

    return (VAR_5 != VAR_3[VAR_4]);
}
