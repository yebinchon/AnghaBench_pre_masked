
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static void FUNC_4(uint8_t VAR_2, uint32_t VAR_3)
{
    if (FUNC_1(0) <= VAR_2 && VAR_2 <= FUNC_1(7))
        FUNC_3("r%d", VAR_2 % 8);
    else if (FUNC_2(0) <= VAR_2 && VAR_2 <= FUNC_2(7))
        FUNC_3("@(r%d)", VAR_2 % 8);
    else if (FUNC_0(0) <= VAR_2 && VAR_2 <= FUNC_0(7))
        FUNC_3("@(r%d+$%02x)", VAR_2 % 8, VAR_3);
    else if (VAR_2 == VAR_0)
        FUNC_3("@($%02x)", VAR_3);
    else if (VAR_2 == VAR_1)
        FUNC_3("$%02x", VAR_3);
}
