
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;

void FUNC_2 (void *VAR_1, size_t VAR_2)
{
    uint8_t *VAR_3;

    VAR_3 = (uint8_t*) VAR_1;

    while (1) {


        VAR_0 = VAR_0 * 1103515245 + 12345;


        FUNC_0 (VAR_3, &VAR_0, VAR_2 > 8 ? 8 : VAR_2);
        if (FUNC_1 (VAR_2 <= 8))
            return;
        VAR_2 -= 8;
        VAR_3 += 8;
    }
}
