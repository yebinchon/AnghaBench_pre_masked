
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

uint16_t FUNC_2(uint16_t VAR_0, uint16_t VAR_1)
{
    if (!FUNC_0(VAR_0) || !FUNC_0(VAR_1)) {
        return 0;
    }

    return FUNC_1((0xFF00 & VAR_0) | ((0xFF00 & VAR_1) >> 8));
}
