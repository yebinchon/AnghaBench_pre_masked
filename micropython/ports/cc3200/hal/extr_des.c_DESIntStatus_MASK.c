
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__) ;

uint32_t
FUNC_2(uint32_t VAR_5, bool VAR_6)
{
   uint32_t VAR_7;



    FUNC_0(VAR_5 == VAR_0);




    if(VAR_6)
    {
        VAR_7 = FUNC_1(VAR_5 + VAR_2);
        VAR_7 &= FUNC_1(VAR_5 + VAR_1);
        VAR_7 |= ((FUNC_1(VAR_3 + VAR_4) & 0x7) << 16);

        return(VAR_7);
    }
    else
    {
        VAR_7 = FUNC_1(VAR_5 + VAR_2);
        VAR_7 |= ((FUNC_1(VAR_3 + VAR_4) & 0xD) << 16);
        return(VAR_7);
    }
}
