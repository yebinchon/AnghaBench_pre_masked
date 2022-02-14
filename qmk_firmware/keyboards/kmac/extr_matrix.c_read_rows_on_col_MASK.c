
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef size_t matrix_row_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_3 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(matrix_row_t VAR_4[], uint8_t VAR_5) {
    bool VAR_6 = 0;


    FUNC_1(VAR_5);
    FUNC_3(30);


    for (uint8_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

        matrix_row_t VAR_8 = VAR_4[VAR_7];



        if (VAR_7 == 3 && VAR_5 == 0) {
            if (FUNC_0(VAR_0) == 0) {

                VAR_4[VAR_7] |= (VAR_2 << VAR_5);
            } else {

                VAR_4[VAR_7] &= ~(VAR_2 << VAR_5);
            }
        } else {
            if (FUNC_0(VAR_3[VAR_7]) == 0) {

                VAR_4[VAR_7] &= ~(VAR_2 << VAR_5);
            } else {

                VAR_4[VAR_7] |= (VAR_2 << VAR_5);
            }
        }


        if ((VAR_8 != VAR_4[VAR_7]) && !(VAR_6)) {
            VAR_6 = 1;
        }
    }


    FUNC_2();

    return VAR_6;
}
