
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int matrix_row_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int* VAR_1 ;

__attribute__((used)) static matrix_row_t FUNC_2(void)
{
    matrix_row_t VAR_2 = 0;
    for(int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_2 |= (FUNC_1(VAR_1[VAR_3] >> 4) & FUNC_0(VAR_1[VAR_3] & 0xF)) ? 0 : (1 << VAR_3);
    }
    return VAR_2;
}
