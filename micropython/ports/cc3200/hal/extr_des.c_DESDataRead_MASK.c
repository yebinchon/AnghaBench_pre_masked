
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

void
FUNC_2(uint32_t VAR_5, uint8_t *VAR_6, uint8_t VAR_7)
{
 volatile uint32_t VAR_8[2];
 uint8_t VAR_9;
 uint8_t *VAR_10;




 FUNC_0(VAR_5 == VAR_0);
 if((VAR_7 == 0)||(VAR_7>8))
 {
  return;
 }



    while((FUNC_1(VAR_5 + VAR_2) & VAR_1) == 0)
    {
    }




    VAR_8[0] = FUNC_1(VAR_0 + VAR_4);
    VAR_8[1] = FUNC_1(VAR_0 + VAR_3);




    VAR_10 = (uint8_t *)VAR_8;
    for(VAR_9 = 0; VAR_9 < VAR_7 ; VAR_9++)
    {
     *(VAR_6+VAR_9) = *(VAR_10+VAR_9);
    }
}
