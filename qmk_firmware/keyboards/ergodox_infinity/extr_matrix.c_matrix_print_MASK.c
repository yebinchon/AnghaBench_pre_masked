
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int matrix_row_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,...) ;

void FUNC_2(void)
{
    FUNC_1("\nr/c 01234567\n");
    for (uint8_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_1("%X0: ", VAR_2);
        matrix_row_t VAR_3 = FUNC_0(VAR_2);
        for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            if (VAR_3 & (1<<VAR_4))
                FUNC_1("1");
            else
                FUNC_1("0");
        }
        FUNC_1("\n");
    }
}
