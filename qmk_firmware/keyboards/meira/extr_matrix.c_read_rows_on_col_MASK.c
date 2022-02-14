
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t matrix_row_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_2 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(matrix_row_t VAR_3[], uint8_t VAR_4)
{
    bool VAR_5 = 0;


    FUNC_2(VAR_4);
    FUNC_4(30);


    for(uint8_t VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {


        matrix_row_t VAR_7 = VAR_3[VAR_6];


        if ((FUNC_1(VAR_2[VAR_6] >> 4) & FUNC_0(VAR_2[VAR_6] & 0xF)) == 0)
        {

            VAR_3[VAR_6] |= (VAR_1 << VAR_4);
        }
        else
        {

            VAR_3[VAR_6] &= ~(VAR_1 << VAR_4);
        }


        if ((VAR_7 != VAR_3[VAR_6]) && !(VAR_5))
        {
            VAR_5 = 1;
        }
    }


    FUNC_3();

    return VAR_5;
}
