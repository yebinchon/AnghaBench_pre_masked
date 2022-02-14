
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

uint8_t FUNC_1(void)
{
    uint8_t VAR_2 = 0;
    for (uint8_t VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        for (uint8_t VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
            if (FUNC_0(VAR_3, VAR_4))
                VAR_2++;
        }
    }
    return VAR_2;
}
