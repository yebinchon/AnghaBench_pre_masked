
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int matrix_row_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char) ;

void FUNC_3(void) {

    FUNC_1("\nr\\c ABCDEFGHIJKLMNOPQR\n");
    for (uint8_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        matrix_row_t VAR_3 = FUNC_0(VAR_2);
        FUNC_2("%02X: ", VAR_2);
        for (uint8_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            bool VAR_5 = VAR_3 & (1<<VAR_4);
            FUNC_2("%c", VAR_5 ? '*' : '.');
        }
        FUNC_1("\n");
    }

}
