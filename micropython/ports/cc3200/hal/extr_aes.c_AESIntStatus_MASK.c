
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

uint32_t
FUNC_2(uint32_t VAR_6, bool VAR_7)
{
    uint32_t VAR_8;
    uint32_t VAR_9;




    FUNC_0(VAR_6 == VAR_0);




    if(VAR_7)
    {
        VAR_8 = FUNC_1(VAR_3 + VAR_4);
        VAR_9 = FUNC_1(VAR_6 + VAR_1);
        return((FUNC_1(VAR_6 + VAR_2) &
                VAR_9) | ((VAR_8 & 0x0000000F) << 16));
    }
    else
    {
        VAR_8 = FUNC_1(VAR_3 + VAR_5);
        return(FUNC_1(VAR_6 + VAR_2) |
               ((VAR_8 & 0x0000000F) << 16));
    }
}
