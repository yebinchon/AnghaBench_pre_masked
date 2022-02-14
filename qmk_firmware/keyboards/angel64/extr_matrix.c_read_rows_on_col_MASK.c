
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(matrix_row_t VAR_3[], uint8_t VAR_4)
{
    bool VAR_5 = 0;


    FUNC_1(VAR_4);
    FUNC_3(30);


    for(uint8_t VAR_6 = 0; VAR_6 < VAR_0/2; VAR_6++)
    {
        uint8_t VAR_7 = VAR_6 + VAR_0/2;

        matrix_row_t VAR_8 = VAR_3[VAR_7];


        if (FUNC_0(VAR_2[VAR_6]) == 0)
        {

            VAR_3[VAR_7] |= (VAR_1 << VAR_4);
        }
        else
        {

            VAR_3[VAR_7] &= ~(VAR_1 << VAR_4);
        }


        if ((VAR_8 != VAR_3[VAR_7]) && !(VAR_5))
        {
            VAR_5 = 1;
        }
    }


    FUNC_2(VAR_4);

    return VAR_5;
}
