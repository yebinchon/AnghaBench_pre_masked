
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void
FUNC_2(uint32_t VAR_7, uint8_t *VAR_8, uint8_t VAR_9)
{
 volatile uint32_t VAR_10[4];
 uint8_t VAR_11;
 uint8_t *VAR_12;




    FUNC_0(VAR_7 == VAR_0);
    if((VAR_9 == 0)||(VAR_9>16))
    {
        return;
    }





    while((VAR_1 & (FUNC_1(VAR_7 + VAR_2))) == 0)
    {
    }




    VAR_10[0] = FUNC_1(VAR_7 + VAR_6);
    VAR_10[1] = FUNC_1(VAR_7 + VAR_5);
    VAR_10[2] = FUNC_1(VAR_7 + VAR_4);
    VAR_10[3] = FUNC_1(VAR_7 + VAR_3);



    VAR_12 = (uint8_t *)VAR_10;
    for(VAR_11 = 0; VAR_11 < VAR_9 ; VAR_11++)
    {
     *(VAR_8+VAR_11) = *(VAR_12+VAR_11);
    }

    return;
}
