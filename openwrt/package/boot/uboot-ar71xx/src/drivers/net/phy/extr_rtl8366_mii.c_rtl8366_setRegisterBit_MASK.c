
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int,int*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    uint16_t VAR_3;

    if (VAR_1 >= 16)
        return -1;

    if (FUNC_0(VAR_0, &VAR_3))
        return -1;

    if (VAR_2)
        VAR_3 |= (1 << VAR_1);
    else
        VAR_3 &= ~(1 << VAR_1);

    if (FUNC_1(VAR_0, VAR_3))
        return -1;

    return 0;
}
