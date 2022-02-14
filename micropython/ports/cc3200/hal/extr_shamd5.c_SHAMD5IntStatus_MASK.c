
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

uint32_t
FUNC_2(uint32_t VAR_6, bool VAR_7)
{
    uint32_t VAR_8;
    uint32_t VAR_9;




    FUNC_0(VAR_6 == VAR_3);




    if(VAR_7)
    {
        VAR_8 = FUNC_1(VAR_0 + VAR_1);
        VAR_9 = FUNC_1(VAR_6 + VAR_4);
        return((FUNC_1(VAR_6 + VAR_5) &
                VAR_9) | (VAR_8 & 0x00000007) << 16);
    }
    else
    {
        VAR_8 = FUNC_1(VAR_0 + VAR_2);
        return(FUNC_1(VAR_6 + VAR_5) |
               (VAR_8 & 0x00000007) << 16);

    }
}
